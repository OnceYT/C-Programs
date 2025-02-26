// C program to calculate sum of the series s = 1+3+5+....+n

#include <stdio.h>

int main() {
  int n, sum = 0;
  printf("Enter the number of terms (n): ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i += 2) {
    sum += i;
  }

  printf("The sum of the series s = 1+3+5+....+n where n is %d is %d.", n, sum);
  return 0;
}