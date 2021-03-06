% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/regions.R
\name{fisheretal}
\alias{fisheretal}
\alias{fisheretal.Q4}
\alias{fisheretal.SO3}
\title{Transformation based pivotal bootstrap confidence region}
\usage{
fisheretal(x, alp = NULL, boot = TRUE, m = 300, symm = TRUE)

\method{fisheretal}{Q4}(x, alp = NULL, boot = TRUE, m = 300, symm = TRUE)

\method{fisheretal}{SO3}(x, alp = NULL, boot = TRUE, m = 300, symm = TRUE)
}
\arguments{
\item{x}{\eqn{n\times p}{n-by-p} matrix where each row corresponds to a
random rotation in matrix (\eqn{p=9}) or quaternion (\eqn{p=4}) form.}

\item{alp}{alpha level desired, e.g. 0.05 or 0.10.}

\item{boot}{should the bootstrap or normal theory critical value be used.}

\item{m}{number of bootstrap replicates to use to estimate critical value.}

\item{symm}{logical; if TRUE (default), a symmetric region is constructed.}
}
\value{
Radius of the confidence region centered at the projected mean.
}
\description{
Find the radius of a \eqn{100(1-\alpha)}\% confidence region for the central
orientation based on  transforming a result from directional statistics.
}
\details{
Compute the radius of a \eqn{100(1-\alpha)}\% confidence region for the
central orientation based on the projected mean estimator using the method
for the mean polar axis as proposed in \cite{fisher1996}.  To be able to
reduce their method to a radius requires the additional assumption of
rotational symmetry, equation (10) in \cite{fisher1996}.

fisher1996
}
\examples{
Qs<-ruars(20, rcayley, kappa = 100, space = 'Q4')

# The Fisher et al. method can be accesed from the "region" function or the "fisheretal" function
region(Qs, method = "transformation", type = "bootstrap", alp = 0.1,
symm = TRUE, estimator = "mean")
fisheretal(Qs, alp = 0.1, boot = TRUE, symm = TRUE)
}
\seealso{
\code{\link{bayesCR}}, \code{\link{prentice}}, \code{\link{chang}},
  \code{\link{zhang}}
}
