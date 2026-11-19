//1

#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int ans = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}

//2

#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int ans = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}
