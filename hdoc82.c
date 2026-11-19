
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
