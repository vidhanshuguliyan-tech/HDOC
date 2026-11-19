//1

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

//2

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch, vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        ch = tolower((unsigned char)ch);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' ||
               ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    fclose(fp);

    return 0;
}
