//1

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if(ch >= 'a' && ch <= 'z') {

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
//2

#include <stdio.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}
