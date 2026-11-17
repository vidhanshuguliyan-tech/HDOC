//1

#include <stdio.h>

int main() {
    int n, digit, product = 1;

    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;

        if(digit % 2 != 0) {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}
//2

#include <stdio.h>

int main() {
    long long binary, result = 0;
    int digit, place = 1;

    scanf("%lld", &binary);

    while(binary > 0) {
        digit = binary % 10;

        if(digit == 0) {
            result = result + 1 * place;
        }
        else if(digit == 1) {
            result = result + 0 * place;
        }

        place = place * 10;
        binary = binary / 10;
    }

    printf("%lld", result);

    return 0;
}
