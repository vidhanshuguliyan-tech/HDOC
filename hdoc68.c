//1

#include <stdio.h>

enum Days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);

    return 0;
}
//2

#include <stdio.h>
#include <string.h>

enum Traffic
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char light[20];

    scanf("%19s", light);

    if(strcmp(light, "RED") == 0)
        printf("Stop");
    else if(strcmp(light, "YELLOW") == 0)
        printf("Wait");
    else if(strcmp(light, "GREEN") == 0)
        printf("Go");
    else
        printf("Invalid input");

    return 0;
}
