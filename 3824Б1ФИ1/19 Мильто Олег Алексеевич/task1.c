#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{

    long res = (long)a + (long)b;

    if (res >= INT_MAX)
    {
        return INT_MAX;
    }
    else if (res <= INT_MIN)
    {
        return INT_MIN;
    }
    else
      return 0;
}
