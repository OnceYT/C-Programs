// C program to print the fibonacci sequence.
// Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones.
// For example, the Fibonacci sequence up to 10 is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>

int main() {
  int n, first = 0, second = 1, next;
  printf("Enter the number of fibonacci numbers to print: ");
  scanf("%d", &n);

  printf("Fibonacci sequence upto %d items: %d %d ", n, first, second); // Prints the first two numbers of the sequence.
  for (int i = 1; i <= n - 2; i++) { // Loops from 1 to n.
    next = first + second; // Calculates the next number in the sequence. (0+1 in the first iteration)
    first = second; // Assigns the value of the second number to the first. (first = 0 becomes first = 1 in the first iteration -> becomes 1 in the second iteration.)
    second = next; // Assigns the value of the processed next number to the second. (second = 1 becomes second = 1 in the first iteration -> becomes 2 in the second iteration.)
    printf("%d ", next);
  }

  return 0;
}