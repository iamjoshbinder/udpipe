// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// udp_load_model
SEXP udp_load_model(const char* file_model);
RcppExport SEXP _udpipe_udp_load_model(SEXP file_modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type file_model(file_modelSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_load_model(file_model));
    return rcpp_result_gen;
END_RCPP
}
// udp_tokenise_tag_parse
Rcpp::List udp_tokenise_tag_parse(SEXP udmodel, Rcpp::StringVector x, Rcpp::StringVector docid, std::string annotation_tokenizer, std::string annotation_tagger, std::string annotation_parser);
RcppExport SEXP _udpipe_udp_tokenise_tag_parse(SEXP udmodelSEXP, SEXP xSEXP, SEXP docidSEXP, SEXP annotation_tokenizerSEXP, SEXP annotation_taggerSEXP, SEXP annotation_parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type udmodel(udmodelSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type docid(docidSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tokenizer(annotation_tokenizerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tagger(annotation_taggerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_parser(annotation_parserSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_tokenise_tag_parse(udmodel, x, docid, annotation_tokenizer, annotation_tagger, annotation_parser));
    return rcpp_result_gen;
END_RCPP
}
// na_locf
Rcpp::CharacterVector na_locf(Rcpp::CharacterVector x);
RcppExport SEXP _udpipe_na_locf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(na_locf(x));
    return rcpp_result_gen;
END_RCPP
}
// udp_train
Rcpp::List udp_train(const char* file_model, Rcpp::CharacterVector conllu_input_files, Rcpp::CharacterVector conllu_heldout_files, std::string annotation_tokenizer, std::string annotation_tagger, std::string annotation_parser);
RcppExport SEXP _udpipe_udp_train(SEXP file_modelSEXP, SEXP conllu_input_filesSEXP, SEXP conllu_heldout_filesSEXP, SEXP annotation_tokenizerSEXP, SEXP annotation_taggerSEXP, SEXP annotation_parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type file_model(file_modelSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type conllu_input_files(conllu_input_filesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type conllu_heldout_files(conllu_heldout_filesSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tokenizer(annotation_tokenizerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tagger(annotation_taggerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_parser(annotation_parserSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_train(file_model, conllu_input_files, conllu_heldout_files, annotation_tokenizer, annotation_tagger, annotation_parser));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_udpipe_udp_load_model", (DL_FUNC) &_udpipe_udp_load_model, 1},
    {"_udpipe_udp_tokenise_tag_parse", (DL_FUNC) &_udpipe_udp_tokenise_tag_parse, 6},
    {"_udpipe_na_locf", (DL_FUNC) &_udpipe_na_locf, 1},
    {"_udpipe_udp_train", (DL_FUNC) &_udpipe_udp_train, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_udpipe(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
