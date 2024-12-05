#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  unsigned long long res = (unsigned long long)a * (unsigned long long)b;
  if (res >= UINT_MAX)
    return UINT_MAX;
  else
    return 0;
}
