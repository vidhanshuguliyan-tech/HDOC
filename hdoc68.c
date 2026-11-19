

#include <stdio.h>

int main()
{
    int n, arr[100];
    int expected, actual = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        actual += arr[i];
    }

    expected = n * (n + 1) / 2;

    printf("%d", expected - actual);

    return 0;
}
