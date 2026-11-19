
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
