#ifndef SOLVE_QUADRATIC_SRC_H_
#define SOLVE_QUADRATIC_SRC_H_

enum EXPRESSION {no_roots, one_root, two_roots, infinity_roots};

EXPRESSION solve_quadratic_eq(double a, double b, double c, double *x1, double *x2);

void output(int quantity_roots, double x1, double x2);

double solve_discriminant(double a, double b, double c);

EXPRESSION solve_lineare_equation(double *x, double b, double c);

void input_coefficients(double *a, double *b, double *c);

#endif  //SOLVE_QUADRATIC_SRC_H_