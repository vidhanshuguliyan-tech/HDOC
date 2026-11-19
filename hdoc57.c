//1

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
        int found = 0;

        for(int j = i; j < i+k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
            printf("0 ");
    }

    return 0;
}

//2

#include <stdio.h>

int main()
{
    int n, arr[100];
    int currentSum, maxSum;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    currentSum = maxSum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(currentSum + arr[i] < arr[i])
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d", maxSum);

    return 0;
}
