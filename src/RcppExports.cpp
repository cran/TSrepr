// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// clipping
IntegerVector clipping(NumericVector x);
RcppExport SEXP _TSrepr_clipping(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(clipping(x));
    return rcpp_result_gen;
END_RCPP
}
// trending
IntegerVector trending(NumericVector x);
RcppExport SEXP _TSrepr_trending(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(trending(x));
    return rcpp_result_gen;
END_RCPP
}
// repr_feaclip
NumericVector repr_feaclip(NumericVector x);
RcppExport SEXP _TSrepr_repr_feaclip(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(repr_feaclip(x));
    return rcpp_result_gen;
END_RCPP
}
// repr_featrend
NumericVector repr_featrend(NumericVector x, Rcpp::Function func, int pieces, int order);
RcppExport SEXP _TSrepr_repr_featrend(SEXP xSEXP, SEXP funcSEXP, SEXP piecesSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type func(funcSEXP);
    Rcpp::traits::input_parameter< int >::type pieces(piecesSEXP);
    Rcpp::traits::input_parameter< int >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(repr_featrend(x, func, pieces, order));
    return rcpp_result_gen;
END_RCPP
}
// repr_feacliptrend
std::vector<double> repr_feacliptrend(NumericVector x, Rcpp::Function func, int pieces, int order);
RcppExport SEXP _TSrepr_repr_feacliptrend(SEXP xSEXP, SEXP funcSEXP, SEXP piecesSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type func(funcSEXP);
    Rcpp::traits::input_parameter< int >::type pieces(piecesSEXP);
    Rcpp::traits::input_parameter< int >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(repr_feacliptrend(x, func, pieces, order));
    return rcpp_result_gen;
END_RCPP
}
// maxC
double maxC(NumericVector x);
RcppExport SEXP _TSrepr_maxC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(maxC(x));
    return rcpp_result_gen;
END_RCPP
}
// minC
double minC(NumericVector x);
RcppExport SEXP _TSrepr_minC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(minC(x));
    return rcpp_result_gen;
END_RCPP
}
// meanC
double meanC(NumericVector x);
RcppExport SEXP _TSrepr_meanC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(meanC(x));
    return rcpp_result_gen;
END_RCPP
}
// sumC
double sumC(NumericVector x);
RcppExport SEXP _TSrepr_sumC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sumC(x));
    return rcpp_result_gen;
END_RCPP
}
// medianC
double medianC(NumericVector x);
RcppExport SEXP _TSrepr_medianC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(medianC(x));
    return rcpp_result_gen;
END_RCPP
}
// mse
double mse(NumericVector x, NumericVector y);
RcppExport SEXP _TSrepr_mse(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mse(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rmse
double rmse(NumericVector x, NumericVector y);
RcppExport SEXP _TSrepr_rmse(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rmse(x, y));
    return rcpp_result_gen;
END_RCPP
}
// mae
double mae(NumericVector x, NumericVector y);
RcppExport SEXP _TSrepr_mae(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mae(x, y));
    return rcpp_result_gen;
END_RCPP
}
// mdae
double mdae(NumericVector x, NumericVector y);
RcppExport SEXP _TSrepr_mdae(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mdae(x, y));
    return rcpp_result_gen;
END_RCPP
}
// smape
double smape(NumericVector x, NumericVector y);
RcppExport SEXP _TSrepr_smape(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(smape(x, y));
    return rcpp_result_gen;
END_RCPP
}
// mape
double mape(NumericVector x, NumericVector y);
RcppExport SEXP _TSrepr_mape(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mape(x, y));
    return rcpp_result_gen;
END_RCPP
}
// maape
double maape(NumericVector x, NumericVector y);
RcppExport SEXP _TSrepr_maape(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(maape(x, y));
    return rcpp_result_gen;
END_RCPP
}
// mase
double mase(NumericVector real, NumericVector forecast, NumericVector naive);
RcppExport SEXP _TSrepr_mase(SEXP realSEXP, SEXP forecastSEXP, SEXP naiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type real(realSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type forecast(forecastSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type naive(naiveSEXP);
    rcpp_result_gen = Rcpp::wrap(mase(real, forecast, naive));
    return rcpp_result_gen;
END_RCPP
}
// norm_z
NumericVector norm_z(NumericVector x);
RcppExport SEXP _TSrepr_norm_z(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_z(x));
    return rcpp_result_gen;
END_RCPP
}
// norm_z_list
List norm_z_list(NumericVector x);
RcppExport SEXP _TSrepr_norm_z_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_z_list(x));
    return rcpp_result_gen;
END_RCPP
}
// denorm_z
NumericVector denorm_z(NumericVector x, double mean, double sd);
RcppExport SEXP _TSrepr_denorm_z(SEXP xSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(denorm_z(x, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// norm_min_max
NumericVector norm_min_max(NumericVector x);
RcppExport SEXP _TSrepr_norm_min_max(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_min_max(x));
    return rcpp_result_gen;
END_RCPP
}
// norm_min_max_list
List norm_min_max_list(NumericVector x);
RcppExport SEXP _TSrepr_norm_min_max_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_min_max_list(x));
    return rcpp_result_gen;
END_RCPP
}
// denorm_min_max
NumericVector denorm_min_max(NumericVector x, double min, double max);
RcppExport SEXP _TSrepr_denorm_min_max(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(denorm_min_max(x, min, max));
    return rcpp_result_gen;
END_RCPP
}
// repr_sma
NumericVector repr_sma(NumericVector x, int order);
RcppExport SEXP _TSrepr_repr_sma(SEXP xSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(repr_sma(x, order));
    return rcpp_result_gen;
END_RCPP
}
// repr_paa
NumericVector repr_paa(NumericVector x, int q, Rcpp::Function func);
RcppExport SEXP _TSrepr_repr_paa(SEXP xSEXP, SEXP qSEXP, SEXP funcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type func(funcSEXP);
    rcpp_result_gen = Rcpp::wrap(repr_paa(x, q, func));
    return rcpp_result_gen;
END_RCPP
}
// repr_seas_profile
NumericVector repr_seas_profile(NumericVector x, int freq, Rcpp::Function func);
RcppExport SEXP _TSrepr_repr_seas_profile(SEXP xSEXP, SEXP freqSEXP, SEXP funcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type func(funcSEXP);
    rcpp_result_gen = Rcpp::wrap(repr_seas_profile(x, freq, func));
    return rcpp_result_gen;
END_RCPP
}
// rleC
List rleC(NumericVector x);
RcppExport SEXP _TSrepr_rleC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rleC(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TSrepr_clipping", (DL_FUNC) &_TSrepr_clipping, 1},
    {"_TSrepr_trending", (DL_FUNC) &_TSrepr_trending, 1},
    {"_TSrepr_repr_feaclip", (DL_FUNC) &_TSrepr_repr_feaclip, 1},
    {"_TSrepr_repr_featrend", (DL_FUNC) &_TSrepr_repr_featrend, 4},
    {"_TSrepr_repr_feacliptrend", (DL_FUNC) &_TSrepr_repr_feacliptrend, 4},
    {"_TSrepr_maxC", (DL_FUNC) &_TSrepr_maxC, 1},
    {"_TSrepr_minC", (DL_FUNC) &_TSrepr_minC, 1},
    {"_TSrepr_meanC", (DL_FUNC) &_TSrepr_meanC, 1},
    {"_TSrepr_sumC", (DL_FUNC) &_TSrepr_sumC, 1},
    {"_TSrepr_medianC", (DL_FUNC) &_TSrepr_medianC, 1},
    {"_TSrepr_mse", (DL_FUNC) &_TSrepr_mse, 2},
    {"_TSrepr_rmse", (DL_FUNC) &_TSrepr_rmse, 2},
    {"_TSrepr_mae", (DL_FUNC) &_TSrepr_mae, 2},
    {"_TSrepr_mdae", (DL_FUNC) &_TSrepr_mdae, 2},
    {"_TSrepr_smape", (DL_FUNC) &_TSrepr_smape, 2},
    {"_TSrepr_mape", (DL_FUNC) &_TSrepr_mape, 2},
    {"_TSrepr_maape", (DL_FUNC) &_TSrepr_maape, 2},
    {"_TSrepr_mase", (DL_FUNC) &_TSrepr_mase, 3},
    {"_TSrepr_norm_z", (DL_FUNC) &_TSrepr_norm_z, 1},
    {"_TSrepr_norm_z_list", (DL_FUNC) &_TSrepr_norm_z_list, 1},
    {"_TSrepr_denorm_z", (DL_FUNC) &_TSrepr_denorm_z, 3},
    {"_TSrepr_norm_min_max", (DL_FUNC) &_TSrepr_norm_min_max, 1},
    {"_TSrepr_norm_min_max_list", (DL_FUNC) &_TSrepr_norm_min_max_list, 1},
    {"_TSrepr_denorm_min_max", (DL_FUNC) &_TSrepr_denorm_min_max, 3},
    {"_TSrepr_repr_sma", (DL_FUNC) &_TSrepr_repr_sma, 2},
    {"_TSrepr_repr_paa", (DL_FUNC) &_TSrepr_repr_paa, 3},
    {"_TSrepr_repr_seas_profile", (DL_FUNC) &_TSrepr_repr_seas_profile, 3},
    {"_TSrepr_rleC", (DL_FUNC) &_TSrepr_rleC, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_TSrepr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
