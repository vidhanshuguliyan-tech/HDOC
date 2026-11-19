

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
