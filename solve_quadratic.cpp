#include <stdio.h>
#include <math.h> 
#include <assert.h>
#include "solve_quadratic.h"

EXPRESSION solve_quadratic_eq(double a, double b, double c, double *x1, double *x2)
{
    assert(x1 != NULL);
    assert(x2 != NULL);

    if (a == 0)
    {
        return solve_lineare_equation(x1, b, c);
    }
    double discriminant = solve_discriminant(a, b, c);

    if (discriminant == 0)
    {
        *x1 = (-b + sqrt(discriminant))/(2*a);
        return one_root;
    }
    
    if (discriminant > 0)
    {
        *x1 = (-b + sqrt(discriminant))/(2*a);
        *x2 = (-b - sqrt(discriminant))/(2*a);
        return two_roots;
    }
    

    return no_roots;
}

void output(int quantity_roots, double x1, double x2)
{
    switch (quantity_roots)
    {
        case no_roots:
        printf("Нет действительных корней\n");
        break;
        case one_root:
        printf("Один корень: %lf\n", x1);
        break;
        case two_roots:
        printf("Два корня: %lf %lf\n", x1, x2);
        break;
        case infinity_roots:
        printf("Бесконечно много корней\n");
        break;
    }
}

double solve_discriminant(double a, double b, double c)
{
    return b * b - 4 * a * c;
}

EXPRESSION solve_lineare_equation(double *x, double b, double c)
{
    assert(x != NULL);
    
    if (b == 0 && c != 0)
    {
        return no_roots;
    }
    if (b == 0 && c == 0)
    {
        return infinity_roots;
    }
    *x = -c / b;
    return one_root;
}

