## ---- message=F---------------------------------------------------------------
library(TSrepr)
library(ggplot2)
library(data.table)

data("elec_load")
dim(elec_load)

## -----------------------------------------------------------------------------
data_seasprof <- repr_matrix(elec_load, func = repr_seas_profile,
                             args = list(freq = 48, func = mean),
                             normalise = TRUE, func_norm = norm_z)
dim(data_seasprof)

## -----------------------------------------------------------------------------
res_km <- kmeans(data_seasprof, 5, nstart = 10)

## ---- warning=F, message=F, fig.height=5.5, fig.width=7-----------------------
# prepare data for plotting
data_plot <- melt(data.table(ID = 1:nrow(data_seasprof),
                             class = res_km$cluster,
                             data_seasprof),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                  )

data_plot[, Time := as.integer(gsub("V", "", Time))]

# prepare centroids
centers <- melt(data.table(ID = 1:nrow(res_km$centers),
                           class = 1:nrow(res_km$centers),
                           res_km$centers),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                )

centers[, Time := as.integer(gsub("V", "", Time))]

# plot the results
ggplot(data_plot, aes(Time, value, group = ID)) +
  facet_wrap(~class, ncol = 2, scales = "free_y") +
  geom_line(color = "grey10", alpha = 0.65) +
  geom_line(data = centers, aes(Time, value), color = "firebrick1", alpha = 0.80, size = 1.2) +
  labs(x = "Time", y = "Load (normalised)") +
  theme_bw()

## -----------------------------------------------------------------------------
data_gam <- repr_matrix(elec_load, func = repr_gam, args = list(freq = c(48, 48*7)),
                        normalise = TRUE, func_norm = norm_z)
dim(data_gam)

## -----------------------------------------------------------------------------
res_km <- kmeans(data_gam, 5, nstart = 10)

## ---- warning=F, message=F, fig.height=5.5, fig.width=7-----------------------
# prepare data for plotting
data_plot <- melt(data.table(ID = 1:nrow(data_gam),
                             class = res_km$cluster,
                             data_gam),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                  )

data_plot[, Time := as.integer(gsub("V", "", Time))]

# prepare centroids
centers <- melt(data.table(ID = 1:nrow(res_km$centers),
                           class = 1:nrow(res_km$centers),
                           res_km$centers),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                )

centers[, Time := as.integer(gsub("V", "", Time))]

# plot the results
ggplot(data_plot, aes(Time, value, group = ID)) +
  facet_wrap(~class, ncol = 2, scales = "free_y") +
  geom_line(color = "grey10", alpha = 0.65) +
  geom_line(data = centers, aes(Time, value), color = "firebrick1", alpha = 0.80, size = 1.2) +
  geom_vline(xintercept = 46, color = "dodgerblue2", size = 1.4, linetype = 5, alpha = 0.8) +
  labs(x = "Time", y = "Load (normalised)") +
  theme_bw()

## -----------------------------------------------------------------------------
data_dft <- repr_matrix(elec_load, func = repr_dft, args = list(coef = 48),
                        normalise = TRUE, func_norm = norm_z)
dim(data_dft)

## -----------------------------------------------------------------------------
res_km <- kmeans(data_dft, 5, nstart = 10)

## ---- warning=F, message=F, fig.height=5.5, fig.width=7-----------------------
# prepare data for plotting
data_plot <- melt(data.table(ID = 1:nrow(data_dft),
                             class = res_km$cluster,
                             data_dft),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                  )

data_plot[, Time := as.integer(gsub("V", "", Time))]

# prepare centroids
centers <- melt(data.table(ID = 1:nrow(res_km$centers),
                           class = 1:nrow(res_km$centers),
                           res_km$centers),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                )

centers[, Time := as.integer(gsub("V", "", Time))]

# plot the results
ggplot(data_plot, aes(Time, value, group = ID)) +
  facet_wrap(~class, ncol = 2, scales = "free_y") +
  geom_line(color = "grey10", alpha = 0.65) +
  geom_line(data = centers, aes(Time, value), color = "firebrick1", alpha = 0.80, size = 1.2) +
  labs(x = "Time", y = "Load (normalised)") +
  theme_bw()

## -----------------------------------------------------------------------------
data_feaclip <- repr_matrix(elec_load, func = repr_feaclip, windowing = TRUE, win_size = 48)
dim(data_feaclip)

## -----------------------------------------------------------------------------
res_km <- kmeans(data_feaclip, 5, nstart = 10)

## ---- warning=F, message=F, fig.height=5.5, fig.width=7-----------------------
# prepare data for plotting
data_plot <- melt(data.table(ID = 1:nrow(data_feaclip),
                             class = res_km$cluster,
                             data_feaclip),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                  )

data_plot[, Time := as.integer(gsub("V", "", Time))]

# prepare centroids
centers <- melt(data.table(ID = 1:nrow(res_km$centers),
                           class = 1:nrow(res_km$centers),
                           res_km$centers),
                  id.vars = c("ID", "class"),
                  variable.name = "Time",
                  variable.factor = FALSE
                )

centers[, Time := as.integer(gsub("V", "", Time))]

# plot the results
ggplot(data_plot, aes(Time, value, group = ID)) +
  facet_wrap(~class, ncol = 2, scales = "free_y") +
  geom_line(color = "grey10", alpha = 0.65) +
  geom_line(data = centers, aes(Time, value),
            color = "firebrick1", alpha = 0.80, size = 1.2) +
  labs(x = "Time", y = "Number of occurences") +
  theme_bw()

