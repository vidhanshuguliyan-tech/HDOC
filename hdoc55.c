//1

#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
    {
        int ans = -1;

        for(int j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                ans = arr[j];
                break;
            }
        }

        printf("%d", ans);

        if(i != n - 1)
            printf(", ");
    }

    return 0;
}
//2

#include <stdio.h>

int main()
{
    int n, arr[100], ans[100];
    int product = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Store prefix products
    for(int i = 0; i < n; i++)
    {
        ans[i] = product;
        product *= arr[i];
    }

    // Multiply by suffix products
    product = 1;

    for(int i = n - 1; i >= 0; i--)
    {
        ans[i] *= product;
        product *= arr[i];
    }

    for(int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
