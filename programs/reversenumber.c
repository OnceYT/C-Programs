// C program to reverse a number.
// For example, 56 becomes 65

#include <stdio.h>

int main() {
  int n, reversed = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  int digit = n; // Store user input in a new variable just for printing

  while (n > 0) {
    int last_digit = n % 10;
    reversed = reversed * 10 + last_digit;
    n /= 10;
  }

  printf("Reverse of %d is %d", digit, reversed);
  return 0;
}