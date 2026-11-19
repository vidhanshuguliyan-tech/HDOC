

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
