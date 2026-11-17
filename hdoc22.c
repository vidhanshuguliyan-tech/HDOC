//1

#include <stdio.h>

int main() {
    int n, original, digit, fact, sum = 0;

    scanf("%d", &n);

    original = n;

    while(n > 0) {
        digit = n % 10;
        fact = 1;

        for(int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == original) {
        printf("Strong number");
    }
    else {
        printf("Not strong number");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n;
    float sum = 1.0;

    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
