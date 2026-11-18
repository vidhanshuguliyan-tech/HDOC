//1

#include <stdio.h>

int main() {
    char date[20];

    scanf("%s", date);

    // Print day
    for(int i = 0; i < 2; i++) {
        printf("%c", date[i]);
    }

    printf("-Apr-");

    // Print year
    for(int i = 6; i < 10; i++) {
        printf("%c", date[i]);
    }

    return 0;
}
//2

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    scanf("%s", str);

    length = strlen(str);

    for(int i = 0; i < length; i++) {

        for(int j = i; j < length; j++) {

            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            printf(",");
        }
    }

    return 0;
}
