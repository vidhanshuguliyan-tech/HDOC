//1

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
//2

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    scanf("%49s", name);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("File opening failed");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
