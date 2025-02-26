// C program to check if a given number is prime or not.
// A prime number is a number that is greater than 1 and is only divisible by 1 and itself.
// For example, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, etc.

#include <stdio.h>

int main() {
  int n, isPrime = 1;
  printf("Enter a number to check if it's prime: ");
  scanf("%d", &n);

  for (int i = 2; i < n; i++) {
    if (n < 2) {
      isPrime = 0;
      break;
    }
    int check = n % i;
    if (check == 0) {
      isPrime = 0;
    }
  } 

  if (isPrime) {
    printf("%d is a prime number.\n", n);
  } else {
    printf("%d is not a prime number.\n", n);
  }
  
  return 0;
}