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



