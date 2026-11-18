//1

#include <stdio.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    // Print the first character
    if(str[0] != ' ' && str[0] != '\n') {
        printf("%c.", str[0]);
    }

    // Find first character after each space
    for(int i = 1; str[i] != '\0'; i++) {

        if(str[i] == ' ' && str[i + 1] != ' ' &&
           str[i + 1] != '\n' && str[i + 1] != '\0') {

            printf("%c.", str[i + 1]);
        }
    }

    return 0;
}
//2

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    // Calculate string length
    length = strlen(str);

    // Remove newline
    if(length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Find the last space
    for(int i = 0; i < length; i++) {
        if(str[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials of all words before surname
    for(int i = 0; i < lastSpace; i++) {
        if(i == 0 || str[i - 1] == ' ') {
            printf("%c.", str[i]);
        }
    }

    // Print surname in full
    if(lastSpace != -1) {
        printf(" %s", str + lastSpace + 1);
    }
    else {
        printf("%s", str);
    }

    return 0;
}
