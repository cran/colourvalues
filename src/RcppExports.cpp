// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_colour_values_hex
SEXP rcpp_colour_values_hex(SEXP x, SEXP palette, Rcpp::NumericVector& alpha, std::string na_colour, bool include_alpha, bool format, int digits, bool summary, int n_summaries);
RcppExport SEXP _colourvalues_rcpp_colour_values_hex(SEXP xSEXP, SEXP paletteSEXP, SEXP alphaSEXP, SEXP na_colourSEXP, SEXP include_alphaSEXP, SEXP formatSEXP, SEXP digitsSEXP, SEXP summarySEXP, SEXP n_summariesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type palette(paletteSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type na_colour(na_colourSEXP);
    Rcpp::traits::input_parameter< bool >::type include_alpha(include_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< bool >::type summary(summarySEXP);
    Rcpp::traits::input_parameter< int >::type n_summaries(n_summariesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_colour_values_hex(x, palette, alpha, na_colour, include_alpha, format, digits, summary, n_summaries));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_colour_values_rgb
SEXP rcpp_colour_values_rgb(SEXP x, SEXP palette, Rcpp::NumericVector& alpha, std::string na_colour, bool include_alpha, bool format, int digits, bool summary, int n_summaries);
RcppExport SEXP _colourvalues_rcpp_colour_values_rgb(SEXP xSEXP, SEXP paletteSEXP, SEXP alphaSEXP, SEXP na_colourSEXP, SEXP include_alphaSEXP, SEXP formatSEXP, SEXP digitsSEXP, SEXP summarySEXP, SEXP n_summariesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type palette(paletteSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type na_colour(na_colourSEXP);
    Rcpp::traits::input_parameter< bool >::type include_alpha(include_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< bool >::type summary(summarySEXP);
    Rcpp::traits::input_parameter< int >::type n_summaries(n_summariesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_colour_values_rgb(x, palette, alpha, na_colour, include_alpha, format, digits, summary, n_summaries));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_colour_values_rgb_interleaved
SEXP rcpp_colour_values_rgb_interleaved(SEXP x, SEXP palette, Rcpp::NumericVector& alpha, Rcpp::IntegerVector& repeats, R_xlen_t& total_colours, std::string na_colour, bool include_alpha, bool format, int digits, bool summary, int n_summaries);
RcppExport SEXP _colourvalues_rcpp_colour_values_rgb_interleaved(SEXP xSEXP, SEXP paletteSEXP, SEXP alphaSEXP, SEXP repeatsSEXP, SEXP total_coloursSEXP, SEXP na_colourSEXP, SEXP include_alphaSEXP, SEXP formatSEXP, SEXP digitsSEXP, SEXP summarySEXP, SEXP n_summariesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type palette(paletteSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type repeats(repeatsSEXP);
    Rcpp::traits::input_parameter< R_xlen_t& >::type total_colours(total_coloursSEXP);
    Rcpp::traits::input_parameter< std::string >::type na_colour(na_colourSEXP);
    Rcpp::traits::input_parameter< bool >::type include_alpha(include_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< bool >::type summary(summarySEXP);
    Rcpp::traits::input_parameter< int >::type n_summaries(n_summariesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_colour_values_rgb_interleaved(x, palette, alpha, repeats, total_colours, na_colour, include_alpha, format, digits, summary, n_summaries));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_convert_hex_to_rgb
Rcpp::IntegerMatrix rcpp_convert_hex_to_rgb(Rcpp::StringVector hex_strings);
RcppExport SEXP _colourvalues_rcpp_convert_hex_to_rgb(SEXP hex_stringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type hex_strings(hex_stringsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_convert_hex_to_rgb(hex_strings));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_convert_rgb_mat_to_hex
Rcpp::StringVector rcpp_convert_rgb_mat_to_hex(Rcpp::IntegerMatrix rgb);
RcppExport SEXP _colourvalues_rcpp_convert_rgb_mat_to_hex(SEXP rgbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type rgb(rgbSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_convert_rgb_mat_to_hex(rgb));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_convert_rgb_vec_to_hex
Rcpp::StringVector rcpp_convert_rgb_vec_to_hex(Rcpp::IntegerVector rgb);
RcppExport SEXP _colourvalues_rcpp_convert_rgb_vec_to_hex(SEXP rgbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type rgb(rgbSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_convert_rgb_vec_to_hex(rgb));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_validate_alpha
Rcpp::NumericVector rcpp_validate_alpha(Rcpp::NumericVector alpha, int alpha_type);
RcppExport SEXP _colourvalues_rcpp_validate_alpha(SEXP alphaSEXP, SEXP alpha_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type alpha_type(alpha_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_validate_alpha(alpha, alpha_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_format_type
std::string rcpp_get_format_type(SEXP palette_type);
RcppExport SEXP _colourvalues_rcpp_get_format_type(SEXP palette_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type palette_type(palette_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_format_type(palette_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_r_class
Rcpp::CharacterVector rcpp_get_r_class(SEXP obj);
RcppExport SEXP _colourvalues_rcpp_get_r_class(SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_r_class(obj));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_vector_type
int rcpp_vector_type(int new_type, int existing_type);
RcppExport SEXP _colourvalues_rcpp_vector_type(SEXP new_typeSEXP, SEXP existing_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type new_type(new_typeSEXP);
    Rcpp::traits::input_parameter< int >::type existing_type(existing_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_vector_type(new_type, existing_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_list_size
Rcpp::List rcpp_list_size(const Rcpp::List& lst, int& total_size, int& existing_type, std::string& format_type);
RcppExport SEXP _colourvalues_rcpp_list_size(SEXP lstSEXP, SEXP total_sizeSEXP, SEXP existing_typeSEXP, SEXP format_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< int& >::type total_size(total_sizeSEXP);
    Rcpp::traits::input_parameter< int& >::type existing_type(existing_typeSEXP);
    Rcpp::traits::input_parameter< std::string& >::type format_type(format_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_list_size(lst, total_size, existing_type, format_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_refil_list
Rcpp::List rcpp_refil_list(const Rcpp::List& lst_sizes, Rcpp::StringVector& colours, int& vector_position);
RcppExport SEXP _colourvalues_rcpp_refil_list(SEXP lst_sizesSEXP, SEXP coloursSEXP, SEXP vector_positionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type lst_sizes(lst_sizesSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector& >::type colours(coloursSEXP);
    Rcpp::traits::input_parameter< int& >::type vector_position(vector_positionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_refil_list(lst_sizes, colours, vector_position));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_validate_rgb_range
int rcpp_validate_rgb_range(int x);
RcppExport SEXP _colourvalues_rcpp_validate_rgb_range(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_validate_rgb_range(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_validate_rgb_spline
int rcpp_validate_rgb_spline(int x);
RcppExport SEXP _colourvalues_rcpp_validate_rgb_spline(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_validate_rgb_spline(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_palette
Rcpp::NumericMatrix rcpp_get_palette(std::string& palette);
RcppExport SEXP _colourvalues_rcpp_get_palette(SEXP paletteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type palette(paletteSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_palette(palette));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_viridis
Rcpp::DataFrame rcpp_viridis();
RcppExport SEXP _colourvalues_rcpp_viridis() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_viridis());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_inferno
Rcpp::DataFrame rcpp_inferno();
RcppExport SEXP _colourvalues_rcpp_inferno() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_inferno());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_magma
Rcpp::DataFrame rcpp_magma();
RcppExport SEXP _colourvalues_rcpp_magma() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_magma());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_plasma
Rcpp::DataFrame rcpp_plasma();
RcppExport SEXP _colourvalues_rcpp_plasma() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_plasma());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cividis
Rcpp::DataFrame rcpp_cividis();
RcppExport SEXP _colourvalues_rcpp_cividis() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_cividis());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_terrain
Rcpp::DataFrame rcpp_terrain();
RcppExport SEXP _colourvalues_rcpp_terrain() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_terrain());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_topo
Rcpp::DataFrame rcpp_topo();
RcppExport SEXP _colourvalues_rcpp_topo() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_topo());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_heat
Rcpp::DataFrame rcpp_heat();
RcppExport SEXP _colourvalues_rcpp_heat() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_heat());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ylorrd
Rcpp::DataFrame rcpp_ylorrd();
RcppExport SEXP _colourvalues_rcpp_ylorrd() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_ylorrd());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ylorbr
Rcpp::DataFrame rcpp_ylorbr();
RcppExport SEXP _colourvalues_rcpp_ylorbr() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_ylorbr());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ylgnbu
Rcpp::DataFrame rcpp_ylgnbu();
RcppExport SEXP _colourvalues_rcpp_ylgnbu() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_ylgnbu());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ylgn
Rcpp::DataFrame rcpp_ylgn();
RcppExport SEXP _colourvalues_rcpp_ylgn() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_ylgn());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_reds
Rcpp::DataFrame rcpp_reds();
RcppExport SEXP _colourvalues_rcpp_reds() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_reds());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rdpu
Rcpp::DataFrame rcpp_rdpu();
RcppExport SEXP _colourvalues_rcpp_rdpu() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_rdpu());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_purples
Rcpp::DataFrame rcpp_purples();
RcppExport SEXP _colourvalues_rcpp_purples() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_purples());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_purd
Rcpp::DataFrame rcpp_purd();
RcppExport SEXP _colourvalues_rcpp_purd() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_purd());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pubugn
Rcpp::DataFrame rcpp_pubugn();
RcppExport SEXP _colourvalues_rcpp_pubugn() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_pubugn());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pubu
Rcpp::DataFrame rcpp_pubu();
RcppExport SEXP _colourvalues_rcpp_pubu() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_pubu());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_orrd
Rcpp::DataFrame rcpp_orrd();
RcppExport SEXP _colourvalues_rcpp_orrd() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_orrd());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_oranges
Rcpp::DataFrame rcpp_oranges();
RcppExport SEXP _colourvalues_rcpp_oranges() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_oranges());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_greys
Rcpp::DataFrame rcpp_greys();
RcppExport SEXP _colourvalues_rcpp_greys() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_greys());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_greens
Rcpp::DataFrame rcpp_greens();
RcppExport SEXP _colourvalues_rcpp_greens() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_greens());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_gnbu
Rcpp::DataFrame rcpp_gnbu();
RcppExport SEXP _colourvalues_rcpp_gnbu() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_gnbu());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_bupu
Rcpp::DataFrame rcpp_bupu();
RcppExport SEXP _colourvalues_rcpp_bupu() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_bupu());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_bugn
Rcpp::DataFrame rcpp_bugn();
RcppExport SEXP _colourvalues_rcpp_bugn() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_bugn());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_blues
Rcpp::DataFrame rcpp_blues();
RcppExport SEXP _colourvalues_rcpp_blues() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_blues());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_spectral
Rcpp::DataFrame rcpp_spectral();
RcppExport SEXP _colourvalues_rcpp_spectral() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_spectral());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rdylgn
Rcpp::DataFrame rcpp_rdylgn();
RcppExport SEXP _colourvalues_rcpp_rdylgn() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_rdylgn());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rdylbu
Rcpp::DataFrame rcpp_rdylbu();
RcppExport SEXP _colourvalues_rcpp_rdylbu() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_rdylbu());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rdgy
Rcpp::DataFrame rcpp_rdgy();
RcppExport SEXP _colourvalues_rcpp_rdgy() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_rdgy());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rdbu
Rcpp::DataFrame rcpp_rdbu();
RcppExport SEXP _colourvalues_rcpp_rdbu() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_rdbu());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_puor
Rcpp::DataFrame rcpp_puor();
RcppExport SEXP _colourvalues_rcpp_puor() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_puor());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_prgn
Rcpp::DataFrame rcpp_prgn();
RcppExport SEXP _colourvalues_rcpp_prgn() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_prgn());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_piyg
Rcpp::DataFrame rcpp_piyg();
RcppExport SEXP _colourvalues_rcpp_piyg() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_piyg());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_brbg
Rcpp::DataFrame rcpp_brbg();
RcppExport SEXP _colourvalues_rcpp_brbg() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_brbg());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cm
Rcpp::DataFrame rcpp_cm();
RcppExport SEXP _colourvalues_rcpp_cm() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_cm());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rainbow
Rcpp::DataFrame rcpp_rainbow();
RcppExport SEXP _colourvalues_rcpp_rainbow() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_rainbow());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ygobb
Rcpp::DataFrame rcpp_ygobb();
RcppExport SEXP _colourvalues_rcpp_ygobb() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_ygobb());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_matlab_like2
Rcpp::DataFrame rcpp_matlab_like2();
RcppExport SEXP _colourvalues_rcpp_matlab_like2() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_matlab_like2());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_matlab_like
Rcpp::DataFrame rcpp_matlab_like();
RcppExport SEXP _colourvalues_rcpp_matlab_like() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_matlab_like());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_magenta2green
Rcpp::DataFrame rcpp_magenta2green();
RcppExport SEXP _colourvalues_rcpp_magenta2green() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_magenta2green());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cyan2yellow
Rcpp::DataFrame rcpp_cyan2yellow();
RcppExport SEXP _colourvalues_rcpp_cyan2yellow() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_cyan2yellow());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_blue2yellow
Rcpp::DataFrame rcpp_blue2yellow();
RcppExport SEXP _colourvalues_rcpp_blue2yellow() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_blue2yellow());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_green2red
Rcpp::DataFrame rcpp_green2red();
RcppExport SEXP _colourvalues_rcpp_green2red() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_green2red());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_blue2green
Rcpp::DataFrame rcpp_blue2green();
RcppExport SEXP _colourvalues_rcpp_blue2green() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_blue2green());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_blue2red
Rcpp::DataFrame rcpp_blue2red();
RcppExport SEXP _colourvalues_rcpp_blue2red() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_blue2red());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_diverge_hcl
Rcpp::DataFrame rcpp_diverge_hcl();
RcppExport SEXP _colourvalues_rcpp_diverge_hcl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_diverge_hcl());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_diverge_hsv
Rcpp::DataFrame rcpp_diverge_hsv();
RcppExport SEXP _colourvalues_rcpp_diverge_hsv() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_diverge_hsv());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_terrain_hcl
Rcpp::DataFrame rcpp_terrain_hcl();
RcppExport SEXP _colourvalues_rcpp_terrain_hcl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_terrain_hcl());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_heat_hcl
Rcpp::DataFrame rcpp_heat_hcl();
RcppExport SEXP _colourvalues_rcpp_heat_hcl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_heat_hcl());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sequential_hcl
Rcpp::DataFrame rcpp_sequential_hcl();
RcppExport SEXP _colourvalues_rcpp_sequential_hcl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_sequential_hcl());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rainbow_hcl
Rcpp::DataFrame rcpp_rainbow_hcl();
RcppExport SEXP _colourvalues_rcpp_rainbow_hcl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_rainbow_hcl());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_scale
Rcpp::NumericVector rcpp_scale(Rcpp::NumericVector x);
RcppExport SEXP _colourvalues_rcpp_scale(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_scale(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_colourvalues_rcpp_colour_values_hex", (DL_FUNC) &_colourvalues_rcpp_colour_values_hex, 9},
    {"_colourvalues_rcpp_colour_values_rgb", (DL_FUNC) &_colourvalues_rcpp_colour_values_rgb, 9},
    {"_colourvalues_rcpp_colour_values_rgb_interleaved", (DL_FUNC) &_colourvalues_rcpp_colour_values_rgb_interleaved, 11},
    {"_colourvalues_rcpp_convert_hex_to_rgb", (DL_FUNC) &_colourvalues_rcpp_convert_hex_to_rgb, 1},
    {"_colourvalues_rcpp_convert_rgb_mat_to_hex", (DL_FUNC) &_colourvalues_rcpp_convert_rgb_mat_to_hex, 1},
    {"_colourvalues_rcpp_convert_rgb_vec_to_hex", (DL_FUNC) &_colourvalues_rcpp_convert_rgb_vec_to_hex, 1},
    {"_colourvalues_rcpp_validate_alpha", (DL_FUNC) &_colourvalues_rcpp_validate_alpha, 2},
    {"_colourvalues_rcpp_get_format_type", (DL_FUNC) &_colourvalues_rcpp_get_format_type, 1},
    {"_colourvalues_rcpp_get_r_class", (DL_FUNC) &_colourvalues_rcpp_get_r_class, 1},
    {"_colourvalues_rcpp_vector_type", (DL_FUNC) &_colourvalues_rcpp_vector_type, 2},
    {"_colourvalues_rcpp_list_size", (DL_FUNC) &_colourvalues_rcpp_list_size, 4},
    {"_colourvalues_rcpp_refil_list", (DL_FUNC) &_colourvalues_rcpp_refil_list, 3},
    {"_colourvalues_rcpp_validate_rgb_range", (DL_FUNC) &_colourvalues_rcpp_validate_rgb_range, 1},
    {"_colourvalues_rcpp_validate_rgb_spline", (DL_FUNC) &_colourvalues_rcpp_validate_rgb_spline, 1},
    {"_colourvalues_rcpp_get_palette", (DL_FUNC) &_colourvalues_rcpp_get_palette, 1},
    {"_colourvalues_rcpp_viridis", (DL_FUNC) &_colourvalues_rcpp_viridis, 0},
    {"_colourvalues_rcpp_inferno", (DL_FUNC) &_colourvalues_rcpp_inferno, 0},
    {"_colourvalues_rcpp_magma", (DL_FUNC) &_colourvalues_rcpp_magma, 0},
    {"_colourvalues_rcpp_plasma", (DL_FUNC) &_colourvalues_rcpp_plasma, 0},
    {"_colourvalues_rcpp_cividis", (DL_FUNC) &_colourvalues_rcpp_cividis, 0},
    {"_colourvalues_rcpp_terrain", (DL_FUNC) &_colourvalues_rcpp_terrain, 0},
    {"_colourvalues_rcpp_topo", (DL_FUNC) &_colourvalues_rcpp_topo, 0},
    {"_colourvalues_rcpp_heat", (DL_FUNC) &_colourvalues_rcpp_heat, 0},
    {"_colourvalues_rcpp_ylorrd", (DL_FUNC) &_colourvalues_rcpp_ylorrd, 0},
    {"_colourvalues_rcpp_ylorbr", (DL_FUNC) &_colourvalues_rcpp_ylorbr, 0},
    {"_colourvalues_rcpp_ylgnbu", (DL_FUNC) &_colourvalues_rcpp_ylgnbu, 0},
    {"_colourvalues_rcpp_ylgn", (DL_FUNC) &_colourvalues_rcpp_ylgn, 0},
    {"_colourvalues_rcpp_reds", (DL_FUNC) &_colourvalues_rcpp_reds, 0},
    {"_colourvalues_rcpp_rdpu", (DL_FUNC) &_colourvalues_rcpp_rdpu, 0},
    {"_colourvalues_rcpp_purples", (DL_FUNC) &_colourvalues_rcpp_purples, 0},
    {"_colourvalues_rcpp_purd", (DL_FUNC) &_colourvalues_rcpp_purd, 0},
    {"_colourvalues_rcpp_pubugn", (DL_FUNC) &_colourvalues_rcpp_pubugn, 0},
    {"_colourvalues_rcpp_pubu", (DL_FUNC) &_colourvalues_rcpp_pubu, 0},
    {"_colourvalues_rcpp_orrd", (DL_FUNC) &_colourvalues_rcpp_orrd, 0},
    {"_colourvalues_rcpp_oranges", (DL_FUNC) &_colourvalues_rcpp_oranges, 0},
    {"_colourvalues_rcpp_greys", (DL_FUNC) &_colourvalues_rcpp_greys, 0},
    {"_colourvalues_rcpp_greens", (DL_FUNC) &_colourvalues_rcpp_greens, 0},
    {"_colourvalues_rcpp_gnbu", (DL_FUNC) &_colourvalues_rcpp_gnbu, 0},
    {"_colourvalues_rcpp_bupu", (DL_FUNC) &_colourvalues_rcpp_bupu, 0},
    {"_colourvalues_rcpp_bugn", (DL_FUNC) &_colourvalues_rcpp_bugn, 0},
    {"_colourvalues_rcpp_blues", (DL_FUNC) &_colourvalues_rcpp_blues, 0},
    {"_colourvalues_rcpp_spectral", (DL_FUNC) &_colourvalues_rcpp_spectral, 0},
    {"_colourvalues_rcpp_rdylgn", (DL_FUNC) &_colourvalues_rcpp_rdylgn, 0},
    {"_colourvalues_rcpp_rdylbu", (DL_FUNC) &_colourvalues_rcpp_rdylbu, 0},
    {"_colourvalues_rcpp_rdgy", (DL_FUNC) &_colourvalues_rcpp_rdgy, 0},
    {"_colourvalues_rcpp_rdbu", (DL_FUNC) &_colourvalues_rcpp_rdbu, 0},
    {"_colourvalues_rcpp_puor", (DL_FUNC) &_colourvalues_rcpp_puor, 0},
    {"_colourvalues_rcpp_prgn", (DL_FUNC) &_colourvalues_rcpp_prgn, 0},
    {"_colourvalues_rcpp_piyg", (DL_FUNC) &_colourvalues_rcpp_piyg, 0},
    {"_colourvalues_rcpp_brbg", (DL_FUNC) &_colourvalues_rcpp_brbg, 0},
    {"_colourvalues_rcpp_cm", (DL_FUNC) &_colourvalues_rcpp_cm, 0},
    {"_colourvalues_rcpp_rainbow", (DL_FUNC) &_colourvalues_rcpp_rainbow, 0},
    {"_colourvalues_rcpp_ygobb", (DL_FUNC) &_colourvalues_rcpp_ygobb, 0},
    {"_colourvalues_rcpp_matlab_like2", (DL_FUNC) &_colourvalues_rcpp_matlab_like2, 0},
    {"_colourvalues_rcpp_matlab_like", (DL_FUNC) &_colourvalues_rcpp_matlab_like, 0},
    {"_colourvalues_rcpp_magenta2green", (DL_FUNC) &_colourvalues_rcpp_magenta2green, 0},
    {"_colourvalues_rcpp_cyan2yellow", (DL_FUNC) &_colourvalues_rcpp_cyan2yellow, 0},
    {"_colourvalues_rcpp_blue2yellow", (DL_FUNC) &_colourvalues_rcpp_blue2yellow, 0},
    {"_colourvalues_rcpp_green2red", (DL_FUNC) &_colourvalues_rcpp_green2red, 0},
    {"_colourvalues_rcpp_blue2green", (DL_FUNC) &_colourvalues_rcpp_blue2green, 0},
    {"_colourvalues_rcpp_blue2red", (DL_FUNC) &_colourvalues_rcpp_blue2red, 0},
    {"_colourvalues_rcpp_diverge_hcl", (DL_FUNC) &_colourvalues_rcpp_diverge_hcl, 0},
    {"_colourvalues_rcpp_diverge_hsv", (DL_FUNC) &_colourvalues_rcpp_diverge_hsv, 0},
    {"_colourvalues_rcpp_terrain_hcl", (DL_FUNC) &_colourvalues_rcpp_terrain_hcl, 0},
    {"_colourvalues_rcpp_heat_hcl", (DL_FUNC) &_colourvalues_rcpp_heat_hcl, 0},
    {"_colourvalues_rcpp_sequential_hcl", (DL_FUNC) &_colourvalues_rcpp_sequential_hcl, 0},
    {"_colourvalues_rcpp_rainbow_hcl", (DL_FUNC) &_colourvalues_rcpp_rainbow_hcl, 0},
    {"_colourvalues_rcpp_scale", (DL_FUNC) &_colourvalues_rcpp_scale, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_colourvalues(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
