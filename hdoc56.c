


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
