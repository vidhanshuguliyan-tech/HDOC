

#include <stdio.h>
#include <string.h>

enum Months
{
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main()
{
    char month[10];
    int year;

    scanf("%9s", month);

    if(strcmp(month, "FEB") == 0)
    {
        scanf("%d", &year);

        if(year % 400 == 0 ||
           (year % 4 == 0 && year % 100 != 0))
            printf("29 days");
        else
            printf("28 days");
    }
    else if(strcmp(month, "APR") == 0 ||
            strcmp(month, "JUN") == 0 ||
            strcmp(month, "SEP") == 0 ||
            strcmp(month, "NOV") == 0)
    {
        printf("30 days");
    }
    else if(strcmp(month, "JAN") == 0 ||
            strcmp(month, "MAR") == 0 ||
            strcmp(month, "MAY") == 0 ||
            strcmp(month, "JUL") == 0 ||
            strcmp(month, "AUG") == 0 ||
            strcmp(month, "OCT") == 0 ||
            strcmp(month, "DEC") == 0)
    {
        printf("31 days");
    }
    else
        printf("Invalid month");

    return 0;
}
