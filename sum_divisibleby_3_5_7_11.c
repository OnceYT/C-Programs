// C program to find sum of those numbers which are divisible by 3/5/7/11 in between 1-100.

#include <stdio.h>

int main() {
  int sum3 = 0, sum5 = 0, sum7 = 0, sum11 = 0;
  for (int i = 1; i <= 100; i++) { // Initializes i as 1 and increments it by 1 until 100.
    if (i % 3 == 0) { // Checks if i is divisible by 3.
      sum3 += i; // And adds it to the current value of sum3.
    }
    if (i % 5 == 0) {
      sum5 += i;
    }
    if (i % 7 == 0) {
      sum7 += i;
    }
    if (i % 11 == 0) {
      sum11 += i;
    }
  }

  printf("Sum of numbers divisible by 3: %d\n", sum3);
  printf("Sum of numbers divisible by 5: %d\n", sum5);
  printf("Sum of numbers divisible by 7: %d\n", sum7);
  printf("Sum of numbers divisible by 11: %d\n", sum11);
  return 0;
}