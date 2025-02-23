// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// erank
NumericVector erank(NumericVector mu);
RcppExport SEXP _ohenery_erank(SEXP muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    rcpp_result_gen = Rcpp::wrap(erank(mu));
    return rcpp_result_gen;
END_RCPP
}
// rhenery
IntegerVector rhenery(NumericVector mu, Rcpp::Nullable<NumericVector> gamma);
RcppExport SEXP _ohenery_rhenery(SEXP muSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<NumericVector> >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(rhenery(mu, gamma));
    return rcpp_result_gen;
END_RCPP
}
// harsmlik
NumericVector harsmlik(IntegerVector g, IntegerVector idx, NumericVector eta, Rcpp::Nullable<NumericVector> wt, Rcpp::Nullable<NumericMatrix> deleta);
RcppExport SEXP _ohenery_harsmlik(SEXP gSEXP, SEXP idxSEXP, SEXP etaSEXP, SEXP wtSEXP, SEXP deletaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type g(gSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<NumericVector> >::type wt(wtSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<NumericMatrix> >::type deleta(deletaSEXP);
    rcpp_result_gen = Rcpp::wrap(harsmlik(g, idx, eta, wt, deleta));
    return rcpp_result_gen;
END_RCPP
}
// hensmlik
NumericVector hensmlik(IntegerVector g, IntegerVector idx, NumericVector eta, NumericVector gamma, Rcpp::Nullable<NumericVector> wt, Rcpp::Nullable<NumericMatrix> deleta);
RcppExport SEXP _ohenery_hensmlik(SEXP gSEXP, SEXP idxSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP wtSEXP, SEXP deletaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type g(gSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<NumericVector> >::type wt(wtSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<NumericMatrix> >::type deleta(deletaSEXP);
    rcpp_result_gen = Rcpp::wrap(hensmlik(g, idx, eta, gamma, wt, deleta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ohenery_erank", (DL_FUNC) &_ohenery_erank, 1},
    {"_ohenery_rhenery", (DL_FUNC) &_ohenery_rhenery, 2},
    {"_ohenery_harsmlik", (DL_FUNC) &_ohenery_harsmlik, 5},
    {"_ohenery_hensmlik", (DL_FUNC) &_ohenery_hensmlik, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_ohenery(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
