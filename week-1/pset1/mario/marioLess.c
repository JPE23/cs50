#include <cs50.h>
#include <stdio.h>

int i, j, k;

int main(void)
{
    int n = 0;

    // Get desired height
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //Pyramid
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < n - j; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}