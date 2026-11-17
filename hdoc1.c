#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);

    return 0;
}
//2

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",
           a + b, a - b, a * b, a / b);

    return 0;
}
