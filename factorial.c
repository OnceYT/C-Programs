// C program to find factorial of any number.
// Factorial of a number is the product of all integers up to that number.
// For example, factorial of 5 is 5*4*3*2*1 = 120.
// Likewise, factorial of 2 is 2*1 = 2.

#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int factorial = 1;
  for (int i = 1; i <= n; i++) { // Initializes i as 1 and increments it by 1 until n.
    factorial *= i; // Multiplies i to the current value of factorial.
  }

  printf("Factorial of %d is %d\n", n, factorial);
  return 0;
}