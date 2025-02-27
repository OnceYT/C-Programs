// C program to print the following structure:
// 1
// 2   3
// 4   5   6

#include <stdio.h>

int main() {
  int n, count = 1;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", count);
      count++;
    }
    printf("\n");
  }

  return 0;
}