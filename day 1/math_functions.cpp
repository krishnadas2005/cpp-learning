#include <iostream>
using namespace std;

int main() {
    double x = 9;
    double y = 6;
    double z = 6.99;

    cout << max(x, y)<<'\n';
    cout << min(x, y)<<'\n';
    cout << pow(x, y)<<'\n';
    cout << sqrt(x)<<'\n';
    cout << abs(y)<<'\n'; // makes the value +ve
    cout << round(z)<<'\n';
    cout << ceil(z)<<'\n';
    cout << floor(z)<<'\n';

    return 0;
}

// C++ MATH FUNCTIONS
// Header required: #include <cmath>

// Basic math functions
// abs(x)        -> Absolute value
// fabs(x)       -> Absolute value for floating-point numbers
// fmod(x, y)    -> Remainder of floating-point division
// pow(x, y)     -> x raised to the power y
// sqrt(x)       -> Square root
// cbrt(x)       -> Cube root

// Rounding functions
// ceil(x)       -> Rounds up
// floor(x)      -> Rounds down
// round(x)      -> Rounds to nearest integer
// trunc(x)      -> Removes decimal part
// lround(x)     -> Rounds to long integer
// llround(x)    -> Rounds to long long integer

// Exponential and logarithmic functions
// exp(x)        -> e raised to the power x
// exp2(x)       -> 2 raised to the power x
// log(x)        -> Natural logarithm
// log10(x)      -> Base-10 logarithm
// log2(x)       -> Base-2 logarithm

// Trigonometric functions
// sin(x)        -> Sine
// cos(x)        -> Cosine
// tan(x)        -> Tangent

// Inverse trigonometric functions
// asin(x)       -> Inverse sine
// acos(x)       -> Inverse cosine
// atan(x)       -> Inverse tangent
// atan2(y, x)   -> Angle from x and y coordinates

// Hyperbolic functions
// sinh(x)       -> Hyperbolic sine
// cosh(x)       -> Hyperbolic cosine
// tanh(x)       -> Hyperbolic tangent

// Inverse hyperbolic functions
// asinh(x)      -> Inverse hyperbolic sine
// acosh(x)      -> Inverse hyperbolic cosine
// atanh(x)      -> Inverse hyperbolic tangent

// Other useful functions
// hypot(x, y)   -> Square root of (x² + y²)
// fmax(x, y)    -> Returns larger value
// fmin(x, y)    -> Returns smaller value
// fdim(x, y)    -> Positive difference between x and y
// copysign(x,y) -> x with the sign of y
// nan()         -> Creates NaN (Not a Number)
// isfinite(x)   -> Checks if value is finite
// isinf(x)      -> Checks if value is infinity
// isnan(x)      -> Checks if value is NaN

// Constants
// M_PI          -> Pi (commonly available, but not guaranteed by standard C++)
// M_E           -> Euler's number (commonly available)
// std::numbers::pi -> Pi in modern C++ (C++20)
// std::numbers::e  -> Euler's number in modern C++ (C++20)