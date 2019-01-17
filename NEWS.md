# v0.2.2

* [0,1) alpha values treated as percentage [issue 37](https://github.com/SymbolixAU/colourvalues/issues/37)
* Fixed NAs in character summary values [issue 42](https://github.com/SymbolixAU/colourvalues/issues/42)
* Improved handling of Dates in summary values

# v0.2.1

* `show_colours()` to plot all colour palettes
* added more colour palettes. Use `colour_palettes()` to list them
* fix NA values in summary [issue 39](https://github.com/SymbolixAU/colourvalues/issues/39)
* alpha now accepts fewer than 5 values when using a vector

# v0.2.0

* `alpha` can accept [0,1) values to indicate a percentage
* `format`, `summary`, `n_summaries` arguments for returning summary colours (for use in legends)
* `convert_colours()` function exposed to R to convert between hex-rgb [issue 14](https://github.com/SymbolixAU/colourvalues/issues/14)
* speed improvement for internal hex-to-RGB conversion
* speed improvement for `NumericVector`s [issue 26](https://github.com/SymbolixAU/colourvalues/issues/26)
* updated headers with more `inline` statements
* Added a `NEWS.md` file to track changes to the package.
