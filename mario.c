#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int x;
    do                         //getting int between 1 and 8
    {
        x =get_int("Height: ");
    } while (x<1 ||x>8);
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)   //Left part of objective
        {
            if (j>=x-i-1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }

        printf("  ");            //Middle gap on each line

        for(int k=0;k<i+1;k++)  //Right part of objective
        {
            printf("#");
        }
        printf("\n");
    }
}