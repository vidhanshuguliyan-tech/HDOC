//1

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    int ch;

    source = fopen("source.txt", "r");

    if(source == NULL)
    {
        printf("Source file not found");
        return 1;
    }

    destination = fopen("destination.txt", "w");

    if(destination == NULL)
    {
        fclose(source);
        printf("Destination file error");
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to destination.txt");

    return 0;
}
//2

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
