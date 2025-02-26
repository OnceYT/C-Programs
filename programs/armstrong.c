// C Program to check if a number is Armstrong or not.
// Armstrong number is a number that is equal to the sum of its own digits, each raised to the power of the total number of digits.
// For exmaple, 153 is an Armstrong number because 153 = 1^3 + 5^3 + 3^3 = 1+125+27 = 153.

#include <stdio.h>
#include <math.h>

int main() {
  int n, power = 0, digit, sum = 0;
  printf("Enter a number to check if it's Armstrong: ");
  scanf("%d", &n);
  digit = n;

  while (digit > 0) { // Checks the number of digits and stores it in an int called power.
    digit /= 10;
    power++;
  }

  digit = n;

  while (digit > 0) { // Extracts the last digit and adds it to the sum after raising it to the power.
    sum += pow(digit%10, power);
    digit /= 10; // Removes the last processed digit. Shorthand for digit = digit / 10.
  }

  if (sum == n) {
    printf("%d is an Armstrong number.\n", n);
  } else {
    printf("%d is not an Armstrong number.\n", n);
  }

  return 0;
}