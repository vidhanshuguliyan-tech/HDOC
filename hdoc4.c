//1

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);

    return 0;
}
//2

#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum=%d", sum);

    return 0;
}
