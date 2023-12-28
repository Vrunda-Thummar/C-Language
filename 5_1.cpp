#include<stdio.h>

int main()
{
    float i = 0.5, n, s = 0.5;

    printf("Enter value : ");
    scanf("%.2f",&n);

    printf("%.2f",s);

    while(i <= n)
    {
        s += 2;

        printf("%.2f",s);

        i++;
    }

    return 0;
}