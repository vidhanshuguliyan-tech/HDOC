
#include <stdio.h>

int main()
{
    int n, x = -1;
    long long total, left = 0;

    scanf("%d", &n);

    total = (long long)n * (n + 1) / 2;

    for(int i = 1; i <= n; i++)
    {
        left += i;

        if(left == total - left + i)
        {
            x = i;
            break;
        }
    }

    printf("%d", x);

    return 0;
}
