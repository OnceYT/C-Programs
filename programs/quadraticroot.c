// C program to find root of a quadratic equation.
// will change

#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, d, root1, root2, realPart, imaginaryPart;
  printf("Enter the coefficients a, b, and c: ");
  scanf("%f %f %f", &a, &b, &c);

  d = b * b - 4 * a * c;

  if (d > 0) {
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    printf("Roots are real and different: %.2f and %.2f", root1, root2);
  } else if (d == 0) {
    root1 = root2 = -b / (2 * a);
    printf("Roots are real and same: %.2f and %.2f", root1, root2);
  } else {
    realPart = -b / (2 * a);
    imaginaryPart = sqrt(-d) / (2 * a);
    printf("Roots are complex and different: %.2f + %.2fi and %.2f - %.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
  }

  return 0;
}