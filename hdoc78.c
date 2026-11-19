
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");

    if(in == NULL)
    {
        printf("Input file not found");
        return 1;
    }

    out = fopen("output.txt", "w");

    if(out == NULL)
    {
        fclose(in);
        printf("Output file error");
        return 1;
    }

    while((ch = fgetc(in)) != EOF)
    {
        ch = toupper((unsigned char)ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed");

    return 0;
}
