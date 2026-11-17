//1

#include <stdio.h>

int main() {
    int days, fine = 0;

    scanf("%d", &days);

    if(days > 30) {
        printf("Membership Cancelled");
    }
    else if(days <= 5) {
        fine = days * 2;
        printf("Fine ₹%d", fine);
    }
    else if(days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine ₹%d", fine);
    }
    else {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine ₹%d", fine);
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int units, bill = 0;

    scanf("%d", &units);

    if(units <= 100) {
        bill = units * 5;
    }
    else if(units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if(units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) +
               (100 * 10) + (units - 300) * 12;
    }

    printf("Bill: ₹%d", bill);

    return 0;
}
