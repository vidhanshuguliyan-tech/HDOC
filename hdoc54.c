//1

#include <stdio.h>

int main()
{
    int n, arr[100];
    int candidate = 0, count = 0;
    int freq = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Boyer-Moore voting algorithm
    for(int i = 0; i < n; i++)
    {
        if(count == 0)
            candidate = arr[i];

        if(arr[i] == candidate)
            count++;
        else
            count--;
    }

    // Verify candidate
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == candidate)
            freq++;
    }

    if(freq > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}
//2

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

        for(int j = i + 1; j < n; j++)
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
