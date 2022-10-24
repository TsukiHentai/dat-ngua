/*
* File: quadeq.cpp
* ----------------
* This program finds roots of the quadratic equation
*
* 2
* a x + b x + c = 0
*
* If a is 0 or if the equation has no real roots, the
* program exits with an error.
*/
#include <iostream>
#include <cmath>
#include "genlib.h"
#include "simpio.h"
/* Private function prototypes */
void GetCoefficients(double & a, double & b, double & c);
void SolveQuadratic(double a, double b, double c,
double & x1, double & x2);
void DisplayRoots(double x1, double x2);
/* Main program */
int main() {
double a, b, c, r1, r2;
GetCoefficients(a, b, c);
SolveQuadratic(a, b, c, r1, r2);
DisplayRoots(r1, r2);
return 0;
}
/*
* Function: GetCoefficients
* Usage: GetCoefficients(a, b, c);
* --------------------------------
* This function is responsible for reading in the coefficients
* of a quadratic equation. The values of the coefficients are
* passed back to the main program in the variables a, b, and c,
* which are reference parameters.
*/
void GetCoefficients(double & a, double & b, double & c) {
cout << "Enter coefficients for the quadratic equation:" << endl;
cout << "a: ";
a = GetReal();
cout << "b: ";
b = GetReal();
cout << "c: ";
c = GetReal();
}
/*
* Function: SolveQuadratic
* Usage: SolveQuadratic(a, b, c, x1, x2);
* ---------------------------------------
* This function solves a quadratic equation. The coefficients
* are supplied as the arguments a, b, and c, and the roots are
* returned in x1 and x2, which are reference parameters.
*/
void SolveQuadratic(double a, double b, double c,
double & x1, double & x2) {
if (a == 0) Error("The coefficient a must be nonzero");
double disc = b * b - 4 * a * c;
if (disc < 0) Error("The solutions are complex numbers");
double sqrtDisc = sqrt(disc);
x1 = (-b + sqrtDisc) / (2 * a);
x2 = (-b - sqrtDisc) / (2 * a);
}
/*
* Function: DisplayRoots
* Usage: DisplayRoots(x1, x2);
* ----------------------------
* This function displays the values x1 and x2, which are
* the roots of a quadratic equation.
*/
void DisplayRoots(double x1, double x2) {
if (x1 == x2) {
cout << "There is a double root at " << x1 << endl;
} else {
cout << "The roots are " << x1 << " and " << x2 << endl;
}
}
