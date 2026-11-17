//1

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int a, b, hcf = 1;

    scanf("%d %d", &a, &b);

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("%d", hcf);

    return 0;
}
