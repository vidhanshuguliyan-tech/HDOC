//1

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    char temp;

    fgets(str, sizeof(str), stdin);

    // Calculate string length
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    int start = 0;
    int end = length - 1;

    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    str[length] = '\0';

    printf("%s", str);

    return 0;
}
//2

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int palindrome = 1;

    fgets(str, sizeof(str), stdin);

    // Calculate string length
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Compare characters from both ends
    int start = 0;
    int end = length - 1;

    while(start < end) {
        if(str[start] != str[end]) {
            palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if(palindrome == 1) {
        printf("Palindrome");
    }
    else {
        printf("Not palindrome");
    }

    return 0;
}
