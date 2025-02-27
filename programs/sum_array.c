// C program to find the sum of given n integers using an array.

#include <stdio.h>

int main() {
  int n, sum = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d integers: \n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("Sum of the given numbers: %d", sum);
  return 0;
}