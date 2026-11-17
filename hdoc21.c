//1

#include <stdio.h>

int main() {
    int n, first, last, temp, digits = 0;
    int divisor = 1, middle, result;

    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10) {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    for(int i = 1; i <= digits; i++) {
        divisor = divisor * 10;
    }

    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("%d", result);

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum = sum + i;
        }
    }

    if(sum == n) {
        printf("Perfect number");
    }
    else {
        printf("Not perfect number");
    }

    return 0;
}
