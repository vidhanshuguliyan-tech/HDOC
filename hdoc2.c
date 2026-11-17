#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    
    if (num2 != 0) {
        quotient = (float)num1 / num2;  
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    // Output
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
}
//2
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;
30
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);


    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}
