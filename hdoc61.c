//1

#include <stdio.h>

int main()
{
    int n, arr[100];
    int freq[100001] = {0};

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] >= 0 && arr[i] <= 100000)
        {
            freq[arr[i]]++;

            if(freq[arr[i]] == 2)
            {
                printf("%d", arr[i]);
                return 0;
            }
        }
    }

    return 0;
}
//2

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[500];

    fgets(str, sizeof(str), stdin);

    int newWord = 1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            newWord = 1;
        else if(newWord)
        {
            str[i] = toupper((unsigned char)str[i]);
            newWord = 0;
        }
    }

    printf("%s", str);

    return 0;
}
