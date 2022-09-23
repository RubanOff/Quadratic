#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "introduction.h"
#include "solve_quadratic.h"
void introduction ()
{
    printf("Эта программа для решения корней квадратного уравнения\n");
    printf("Введите коэффициенты: ");
}


void input_coefficients (double *a, double *b, double *c)
{
    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);

    while(scanf("%lf %lf %lf", a, b, c) != 3)
    {
        skip();
        printf("Некоректный ввод, введите заново: ");  
    }
    
    assert(isfinite(*a));
    assert(isfinite(*b));
    assert(isfinite(*c));
}

void skip()
{
    int h = 0;
    do
    {
        h = getchar();
    }
    while (h != '\n' && h != EOF);
}

