// C program to calculate sum of the series s = 1+1/2+1/3+....+n

#include <stdio.h>

int main() {
  int n;
  float sum = 0;
  printf("Enter the number of terms (n): ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    sum += 1.0/i;
  }

  printf("The sum of the series s = 1+1/2+1/3+....+1/n where n is %d is %f.", n, sum);
  return 0;
}