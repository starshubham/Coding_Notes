#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is greatest", a);
            }
            else
            {
                printf("%d is greatest", b);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is greatest", b);
        }
        else
        {
            printf("%d is greatest", d);
        }
    }
    else if (c > d)
    {
        printf("%d is greatest", c);
    }
    else
    {
        printf("%d is greatest", d);
    }
    return 0;
}