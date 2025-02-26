// C program to calculate sum of the series s = 1+1/3+1/5+....+n

#include <stdio.h>

int main() {
  int n;
  float sum = 0;
  printf("Enter the number of terms (n): ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i += 2) {
    sum += 1.0/i;
  }

  printf("The sum of the series s = 1+1/3+1/5+....+1/n where n is %d is %f.", n, sum);
  return 0;
}