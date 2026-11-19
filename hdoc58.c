//1

#include <stdio.h>

int main()
{
    int n, k, arr[100], temp;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if(k < 1 || k > n)
        return 0;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("%d", arr[k-1]);

    return 0;
}

#include <stdio.h>

int main()
{
    char s[1000];
    int maxLength = 0;

    scanf("%999s", s);

    for(int i = 0; s[i] != '\0'; i++)
    {
        int seen[256] = {0};
        int length = 0;

        for(int j = i; s[j] != '\0'; j++)
        {
            if(seen[(unsigned char)s[j]])
                break;

            seen[(unsigned char)s[j]] = 1;
            length++;
        }

        if(length > maxLength)
            maxLength = length;
    }

    printf("%d", maxLength);

    return 0;
}
