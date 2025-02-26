// C program to generate first 10 positive integers that are divisible by 3/5/11.

#include <stdio.h>

int main() {
  int count3 = 0, count5 = 0, count11 = 0;
  int num = 1;

  printf("First 10 positive integers\n");

  printf("Divisible by 3: ");
  while (count3 < 10) {
    if (num % 3 == 0) {
      printf("%d ", num);
      count3++;
    }
    num++;
  }

  num = 1;
  printf("\nDivisible by 5: ");
  while (count5 < 10) {
    if (num % 5 == 0) {
      printf("%d ", num);
      count5++;
    }
    num++;
  }

  num = 1;
  printf("\nDivisible by 11: ");
  while (count11 < 10) {
    if (num % 11 == 0) {
      printf("%d ", num);
      count11++;
    }
    num++;
  }

  printf("\n");
  return 0;
}
