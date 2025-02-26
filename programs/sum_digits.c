// C program to find sum of the digits entered.
// For example, sum is 5+6=11 if input is 56.

#include <stdio.h>

int main() {
  int n, sum = 0;
  printf("Enter a number to find the sum of it's digits: ");
  scanf("%d", &n);
  int digit = n; // Stores the original value of n in a new variable for printing later.

  while (n > 0) { // The loop runs untill n is greater than 0. Essentially until all digits are processed.
    sum += n % 10; // Extracts the last digit of n and adds it to the current value of sum.
    n /= 10; // Removes the processed last digit from n. Shorthand for n = n / 10.
  }

  printf("The sum of the digits of %d is %d", digit, sum);
  return 0;
}