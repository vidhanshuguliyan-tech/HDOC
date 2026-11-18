//1

#include <stdio.h>

int main() {
    long long n;
    int digit, maxDigit = 0;
    int count[10] = {0};
    int maxCount = 0;

    scanf("%lld", &n);

    // Count frequency of each digit
    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find the digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n, element;

    scanf("%d", &n);

    int arr[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    int i = n - 1;

    // Shift larger elements one position right
    while(i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the new element
    arr[i + 1] = element;

    // Print updated array
    for(int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
