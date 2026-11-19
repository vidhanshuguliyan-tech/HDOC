//1

#include <stdio.h>

int main()
{
    int n, arr[100];
    int total = 0, left = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int right = total - left - arr[i];

        if(left == right)
        {
            printf("%d", i);
            return 0;
        }

        left += arr[i];
    }

    printf("-1");
    return 0;
}
//2

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
