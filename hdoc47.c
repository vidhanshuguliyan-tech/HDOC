//1

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int anagram = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Count characters in first string
    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != '\n') {
            freq[(unsigned char)str1[i]]++;
        }
    }

    // Subtract characters in second string
    for(int i = 0; str2[i] != '\0'; i++) {
        if(str2[i] != '\n') {
            freq[(unsigned char)str2[i]]--;
        }
    }

    // Check frequencies
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if(anagram == 1) {
        printf("Anagrams");
    }
    else {
        printf("Not anagrams");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0;
    int maxLength = 0;
    int currentLength = 0;
    int maxStart = 0;

    fgets(str, sizeof(str), stdin);

    while(1) {

        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            if(currentLength == 0) {
                start = i;
            }
            currentLength++;
        }
        else {
            if(currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = start;
            }

            currentLength = 0;
        }

        if(str[i] == '\0') {
            break;
        }

        i++;
    }

    for(int j = maxStart; j < maxStart + maxLength; j++) {
        printf("%c", str[j]);
    }

    return 0;
}
