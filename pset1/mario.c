// Build a mario double pyramid

#include <stdio.h>
#include <cs50.h>

int n;
void print_blocks(int k);

int main(void)
{
    printf("Let's build a pyramid\n");

    // Make sure the input has the right value
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 23);

    // Print the pyramid
    for (int i = 0; i < n; i++)
    {
        // Left side
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        print_blocks(i);

        // Gap
        printf("  ");

        // Right side
        print_blocks(i);

        printf("\n");
    }
}

// Print k blocks function
void print_blocks(int k)
{
    for (int j = 0; j < k + 1; j++)
    {
        printf("#");
    }
}
