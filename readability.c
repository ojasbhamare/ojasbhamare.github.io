#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int roundNo(float num)
{
    return num < 0 ? num - 0.5 : num + 0.5;
}

int main(void)
{
    int l=0;
    int w=0;
    int s=0;
    string text = get_string("Text: ");

    for (int i = 0; i < strlen(text) ; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            s += 1;
        }
    }
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (text[i] == ' ')
        {
            w += 1;
        }
    }
    w += 1;

    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if ((65 <= (int) text[i] && (int) text[i] <= 90 )|| (97 <=(int) text[i] && (int) text[i] <= 122))
        {
            l += 1;
        }
    }

    int ans = roundNo(5.88 * (l/w) - 29.6 * (s/w) - 15.8);

    if (ans < 1)
    {
        printf("Before Grade 1");
    }
    else if (ans > 16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %i",ans);
    }
}