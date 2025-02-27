// C programt to swap 2 numbers using third variable and without.

#include <stdio.h>

int main() {
  int a, b, temp;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  // Swapping using a third variable
  temp = a;
  a = b;
  b = temp;
  printf("After swapping using a third variable: a = %d, b = %d\n", a, b);

  // Swapping without using a third variable
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After swapping without using a third variable: a = %d, b = %d", a, b);

  return 0;
}