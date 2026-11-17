//1

#include <stdio.h>

int main() {
    int n, binary = 0, remainder, place = 1;

    scanf("%d", &n);

    while(n > 0) {
        remainder = n % 2;
        binary = binary + remainder * place;
        n = n / 2;
        place = place * 10;
    }

    printf("%d", binary);

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    scanf("%d", &n);

    original = n;

    while(n > 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if(original == reverse) {
        printf("Palindrome");
    }
    else {
        printf("Not palindrome");
    }

    return 0;
}
