// C program to find sum of all odd/even numbers between 1-100.
// odd numbers: 1, 3, 5, 7, 9, ..., 99
// even numbers: 2, 4, 6, 8, 10, ..., 100

#include <stdio.h>

int main() {
  int sum_odd = 0;
  int sum_even = 0;
  for (int i = 1; i <= 100; i += 2) { // Initializes i as 1 and increments it by 2 until 100.
    sum_odd += i; // Adds i to the current value of sum_odd.
  }
  for (int i = 2; i <= 100; i += 2) { // Initializes i as 2 and increments it by 2 until 100.
    sum_even += i; // Adds i to the current value of sum_even.
  }

  printf("Sum of odd numbers: %d\n", sum_odd);
  printf("Sum of even numbers: %d", sum_even);
  return 0;
}