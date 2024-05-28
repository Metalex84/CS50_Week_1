#include <cs50.h>
#include <stdio.h>

int get_height_from_user();
void print_straight(int height);

int main(void)
{
    print_straight(get_height_from_user());
    return (0);
}

int get_height_from_user()
{
    int height;
    do
        height = get_int("Height: ");
    while ((height < 1) || (height > 8));
    return (height);
}

void print_straight(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = height - i; j > 0; j--)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("#");
        printf("\n");
    }
}
