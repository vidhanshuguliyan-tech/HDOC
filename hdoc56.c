//1

#include <stdio.h>

int main()
{
    int n, k, arr[100];
    int sum = 0, maxSum;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if(k <= 0 || k > n)
        return 0;

    for(int i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for(int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i-k];

        if(sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int n, k, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if(k <= 0 || k > n)
        return 0;

    for(int i = 0; i <= n-k; i++)
    {
        int max = arr[i];

        for(int j = i; j < i+k; j++)
        {
            if(arr[j] > max)
                max = arr[j];
        }

        printf("%d ", max);
    }

    return 0;
}

