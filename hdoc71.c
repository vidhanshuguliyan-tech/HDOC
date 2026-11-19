//1

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
//2

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
