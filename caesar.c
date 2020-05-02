#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    int x = atoi(argv[1]);

    for (int i = 0 ; i < strlen(argv[1]) ; i++)
    {
        if (! isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }
    string s = get_string("plaintext: ");

    for (int i = 0 ; i < strlen(s) ; i++)
    {
        if (islower(s[i]))
        {
            s[i] = 97 + (s[i] - 97 + x) % 26;
        }
        if (isupper(s[i]))
        {
            s[i] = 65 + (s[i] - 65 + x) % 26;
        }
    }
    printf("ciphertext: %s\n", s);
}