//1

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char temp[200];
    int len1, len2, rotation = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    len1 = strlen(str1);
    if(len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }

    len2 = strlen(str2);
    if(len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    // Check lengths
    if(len1 == len2) {

        // Join first string with itself
        strcpy(temp, str1);
        strcat(temp, str1);

        // Check whether second string exists in temp
        if(strstr(temp, str2) != NULL) {
            rotation = 1;
        }
    }

    if(rotation == 1) {
        printf("Rotation");
    }
    else {
        printf("Not rotation");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0;
    char temp;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; ; i++) {

        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            end = i - 1;

            while(start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0') {
            break;
        }
    }

    printf("%s", str);

    return 0;
}
