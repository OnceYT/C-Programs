// C program to convert temp from fahrenheit to celsius.

#include <stdio.h>

int main() {
  float fahrenheit, celsius;
  printf("Enter the temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;
  printf("Temperature in Celsius: %f", celsius);
  return 0;
}