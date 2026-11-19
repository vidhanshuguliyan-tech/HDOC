
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

