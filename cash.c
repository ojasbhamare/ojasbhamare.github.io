#include<stdio.h>
#include<math.h>
#include<cs50.h>

int main(void)
{
    float x;
    do
    {
        x = get_float("Change owed: ");
    }
    while (x < 0);
    x = round(x * 100);
    int ans = 0;
    int lst[4] = {25, 10, 5, 1};
    for (int i = 0 ; i < 4 ; i++)
    {
        int j = lst[i];
        while (x >= j)
        {
            x -= j;
            ans += 1;
        }
    }
    printf("%i\n", ans);

}
