// C program to find the biggest number amongst n number using an array.

#include <stdio.h>

int main() {
  int n, max;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d integers: \n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("The largest amongst the given numbers is %d", max);
  return 0;
}