% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/normalizations_R.R
\name{norm_boxcox}
\alias{norm_boxcox}
\title{Two-parameter Box-Cox normalisation}
\usage{
norm_boxcox(x, lambda = 0.1, gamma = 0)
}
\arguments{
\item{x}{the numeric vector (time series)}

\item{lambda}{the numeric value - power transformation parameter (default is 0.1)}

\item{gamma}{the non-negative numeric value - parameter for holding the time series positive (offset) (default is 0)}
}
\value{
the numeric vector of normalised values
}
\description{
The \code{norm_boxcox} normalises time series by two-parameter Box-Cox normalisation.
}
\examples{
norm_boxcox(runif(50))

}
\seealso{
\code{\link[TSrepr]{norm_z}, \link[TSrepr]{norm_min_max}, \link[TSrepr]{norm_atan}}
}
\author{
Peter Laurinec, <tsreprpackage@gmail.com>
}
