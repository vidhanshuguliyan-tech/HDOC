//1

#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("%d", sum);

    return 0;
}


//2

#include <stdio.h>

int main() {
    int stars[] = {1, 3, 5, 3, 1};

    for(int i = 0; i < 5; i++) {

        for(int j = 1; j <= stars[i]; j++) {
            printf("*\n");
        }

        if(i < 4) {
            printf("\n");
        }
    }

    return 0;
}
