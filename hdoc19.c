//1

#include <stdio.h>

int main() {
    int a, b, max, lcm;

    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while(1) {
        if(max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("%d", lcm);

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n, remainder, sum = 0;

    scanf("%d", &n);

    while(n > 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}
