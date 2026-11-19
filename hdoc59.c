//1

#include <stdio.h>

int main()
{
    char s[100], t[100];
    int freq[26] = {0};
    int valid = 1;

    scanf("%99s", s);
    scanf("%99s", t);

    for(int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    for(int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
            valid = 0;
    }

    if(valid)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
//2

#include <stdio.h>

int main()
{
    int n, arr[100], target;
    int found = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
        printf("-1 -1");

    return 0;
}
