//1

#include <stdio.h>

enum Numbers
{
    A = 10,
    B,
    C
};

int main()
{
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}
//2

#include <stdio.h>
#include <string.h>

enum Operation
{
    ADD, SUBTRACT, MULTIPLY
};

int main()
{
    char choice[20];
    int a, b;

    scanf("%19s %d %d", choice, &a, &b);

    enum Operation op;

    if(strcmp(choice, "ADD") == 0)
        op = ADD;
    else if(strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if(strcmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else
    {
        printf("Invalid operation");
        return 0;
    }

    switch(op)
    {
        case ADD:
            printf("%d", a+b);
            break;

        case SUBTRACT:
            printf("%d", a-b);
            break;

        case MULTIPLY:
            printf("%d", a*b);
            break;
    }

    return 0;
}
