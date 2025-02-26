// C program to calculate sum of the series s = 2+4+6+....+n

#include <stdio.h>

int main() {
  int n, sum = 0;
  printf("Enter the number of terms (n): ");
  scanf("%d", &n);

  for (int i = 2; i <= n; i += 2) {
    sum += i;
  }

  printf("The sum of the series s = 2+4+6+....+n where n is %d is %d.", n, sum);
  return 0;
}