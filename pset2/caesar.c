// Encrypt messages using Caesar’s cipher

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
    // Check argument presence
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    // Get plaintext
    string plaintext = get_string("plaintext: ");

    // Convert to ciphertext
    int k = atoi(argv[1]);

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i ++)
    {
        char c = plaintext[i];

        if isalpha(c)
        {
            if islower(c)
            {
                c = ((c - 97 + k) % 26) + 97;
            }
            if isupper(c)
            {
                c = ((c - 65 + k) % 26) + 65;
            }
        }

        printf("%c", c);
    }

    printf("\n");
    return 0;
}
