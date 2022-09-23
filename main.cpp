#include <stdio.h>
#include "solve_quadratic.h"
#include "introduction.h"
#include <math.h>
int main()
{
    double a = NAN, b = NAN, c = NAN, x1 = NAN, x2 = NAN;

    introduction();

    //ax^2+bx+c=0
    
    input_coefficients(&a, &b, &c);
  
    EXPRESSION quantity_roots =  solve_quadratic_eq(a, b, c, &x1, &x2);
    output(quantity_roots, x1, x2);
    
    return 0;
}