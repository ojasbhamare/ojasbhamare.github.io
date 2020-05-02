#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Height: ");
    } 
    while (x < 1 || x > 8);
    for (int i = 0 ; i < x ; i++)
    {
        for (int j = 0 ; j < x ; j++)
        {
            if (j >= x - i - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}