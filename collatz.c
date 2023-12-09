#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int collatz(int n);

int main(void)
{
    // Get user input
    int number = get_int("Number: ");
    int result = collatz(number);
    printf("%i steps\n", result);
}

// Collatz conjecture
int collatz(int n)
{
    // Base case
    if (n == 1)
    {
        return 0;
    }
    // Even
    else if (n % 2 == 0)
    {
        return 1 + collatz(n / 2);
    }
    // Odd
    else
    {
        return 1 + collatz(3 * n + 1);
    }
}