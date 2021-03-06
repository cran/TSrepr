## ---- fig.height=3.5, fig.width=7---------------------------------------------
library(TSrepr)
library(ggplot2)
library(data.table)

data_ts <- as.numeric(elec_load[1,])
length(data_ts)

data_ts_sums <- repr_paa(data_ts, q = 2, func = sum)
length(data_ts_sums)

ggplot(data.table(Time = 1:length(data_ts_sums),
                  Value = data_ts_sums),
       aes(Time, Value)) +
  geom_line() +
  theme_bw()

## ---- fig.height=3.2, fig.width=6---------------------------------------------
library(moments)

data_ts_skew <- repr_paa(data_ts, q = 48, func = skewness)

ggplot(data.table(Time = 1:length(data_ts_skew),
                  Value = data_ts_skew),
       aes(Time, Value)) +
  geom_line() +
  theme_bw()

## -----------------------------------------------------------------------------
repr_fea_extract <- function(x) {
  return(c(mean(x), median(x), max(x), min(x), sd(x)))
}

## ---- fig.height=3.5, fig.width=7---------------------------------------------
data_fea <- repr_windowing(data_ts, win_size = 48, func = repr_fea_extract)

ggplot(data.table(Time = 1:length(data_fea),
                  Value = data_fea),
       aes(Time, Value)) +
  geom_line() +
  theme_bw()

## -----------------------------------------------------------------------------
norm_max <- function(x) {
  return(x/max(x))
}

## -----------------------------------------------------------------------------
data_mat <- repr_matrix(elec_load,
                        func = repr_fea_extract,
                        windowing = T,
                        win_size = 48,
                        normalise = T,
                        func_norm = norm_max)

set.seed(123)
clus_res <- kmeans(data_mat, centers = 5, nstart = 10)

## ---- warning=F, message=F, fig.height=5, fig.width=6-------------------------
# prepare data for plotting
data_plot <- melt(data.table(ID = 1:nrow(data_mat),
                             class = clus_res$cluster,
                             data_mat),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                  )

data_plot[, Time := as.integer(gsub("V", "", Time))]

# prepare centroids
centers <- melt(data.table(ID = 1:nrow(clus_res$centers),
                           class = 1:nrow(clus_res$centers),
                           clus_res$centers),
                id.vars = c("ID", "class"),
                variable.name = "Time",
                variable.factor = FALSE
                )

centers[, Time := as.integer(gsub("V", "", Time))]

# plot the results
ggplot(data_plot,
       aes(Time, value, group = ID)) +
  facet_wrap(~class, ncol = 2, scales = "free_y") +
  geom_line(color = "grey10", alpha = 0.65) +
  geom_line(data = centers,
            aes(Time, value),
            color = "firebrick1", alpha = 0.80, size = 1.2) +
  labs(x = "Time", y = "Load (normalised)") +
  theme_bw()

## -----------------------------------------------------------------------------
table(clus_res$cluster)

