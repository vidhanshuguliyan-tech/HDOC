//1

#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    scanf("%d", &n);

    original = n;

    while(n > 0) {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if(sum == original) {
        printf("Armstrong");
    }
    else {
        printf("Not Armstrong");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n, count = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        printf("Prime");
    }
    else {
        printf("Not prime");
    }

    return 0;
}
