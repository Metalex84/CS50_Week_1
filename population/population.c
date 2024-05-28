#include <cs50.h>
#include <stdio.h>

int pop_years(int start, int end);

int main(void)
{
    // TODO: Prompt for start size
    int start;
    int end;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    // TODO: Prompt for end size
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    // TODO: Calculate number of years until we reach threshold
    int years = pop_years(start, end);
    // TODO: Print number of years
    printf("Years: %d\n", years);
}

int pop_years(int start, int end)
{
    int size = start;
    int years = 0;

    if (start != end)
    {
        do
        {
            size += (size / 3) - (size / 4);
            years++;
        }
        while (size < end);
    }
    return (years);
}