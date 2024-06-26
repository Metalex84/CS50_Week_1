#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    if (number <= 1)
        return (false);
    if (number <= 3)
        return (true);
    if (((number % 2) == 0) || (number % 3 == 0))
        return (false);
    for (int i = 5; i < (number / 2) + 1; i += 6)
    {
        if ((number % i) == 0 || (number % (i + 2) == 0))
            return (false);
    }
    return (true);
}
