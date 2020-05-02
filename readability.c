#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int main(void)
{
    int l, w, s = 0;
    string text =get_string("Text: ");

    for(int i=0;i<strlen(text);i++)
    {
        if(text[i]=='.'||text[i]=='!'||text[i]=='?')
        {
            s+=1;
        }
    }
    for(int i=0;i<strlen(text);i++)
    {
        if(text[i]==' ')
        {
            w+=1;
        }
    }
    w+=1;

    for(int i=0;i<strlen(text);i++)
    {
        if('a'<=text[i]<='z'||'A'<=text[i]<='Z')
        {
            l+=1;
        }
    }

    float ans=round(5.88*(l/w)-29.6*(s/w)-15.8);

    if (ans<1)
    {
        printf("Before Grade 1");
    }
    else if (ans>16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %i",ans);
    }
}