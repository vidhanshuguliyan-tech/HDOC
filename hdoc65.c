//1

#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fgets(text, sizeof(text), stdin);

    fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        printf("File opening failed");
        return 1;
    }

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
//2

#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char line[200];

    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("Error: File does not exist!");
        return 0;
    }

    printf("File opened successfully.\n");

    while(fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
