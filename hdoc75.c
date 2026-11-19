
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
