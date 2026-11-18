//1

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    // Count characters
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
//2

#include <stdio.h>

int main() {
    char str[100];

    // Read string
    fgets(str, sizeof(str), stdin);

    // Print each character on a new line
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n') {
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
