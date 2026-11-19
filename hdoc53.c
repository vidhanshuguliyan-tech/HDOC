

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
