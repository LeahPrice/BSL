// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// simulate_cell
arma::ucube simulate_cell(LogicalMatrix x, IntegerVector rows, IntegerVector cols, double Pm, double Pp, int sim_iters, int num_obs);
RcppExport SEXP _BSL_simulate_cell(SEXP xSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP PmSEXP, SEXP PpSEXP, SEXP sim_itersSEXP, SEXP num_obsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< double >::type Pm(PmSEXP);
    Rcpp::traits::input_parameter< double >::type Pp(PpSEXP);
    Rcpp::traits::input_parameter< int >::type sim_iters(sim_itersSEXP);
    Rcpp::traits::input_parameter< int >::type num_obs(num_obsSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_cell(x, rows, cols, Pm, Pp, sim_iters, num_obs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BSL_simulate_cell", (DL_FUNC) &_BSL_simulate_cell, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_BSL(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
