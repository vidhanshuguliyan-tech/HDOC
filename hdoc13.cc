//1

#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            if(b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case '%':
            if(b != 0)
                printf("%d", a % b);
            else
                printf("Modulo by zero not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
