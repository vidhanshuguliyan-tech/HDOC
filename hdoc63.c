//1

#include <stdio.h>

int main()
{
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while(fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
//2

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch, characters = 0;
    int words = 0, lines = 0;
    int inWord = 0, last = '\0';

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
            lines++;

        if(isspace((unsigned char)ch))
            inWord = 0;
        else if(!inWord)
        {
            words++;
            inWord = 1;
        }

        last = ch;
    }

    if(characters > 0 && last != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);

    return 0;
}
