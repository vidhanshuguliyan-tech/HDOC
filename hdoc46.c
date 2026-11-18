//1

#include <stdio.h>

int main() {
    char str[100];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] != 'a' && str[i] != 'e' &&
           str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'u' && str[i] != 'A' &&
           str[i] != 'E' && str[i] != 'I' &&
           str[i] != 'O' && str[i] != 'U' &&
           str[i] != '\n') {

            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}
//2


#include <stdio.h>

int main() {
    char str[100];
    int found = 0;

    int freq[26] = {0};

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] >= 'a' && str[i] <= 'z') {

            int index = str[i] - 'a';

            freq[index]++;

            if(freq[index] == 2) {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0) {
        printf("No repeating character");
    }

    return 0;
}
