//1

#include <stdio.h>

int main() {
    int n, m;

    // Read size of first array
    scanf("%d", &n);

    int arr1[n];

    // Read first array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read size of second array
    scanf("%d", &m);

    int arr2[m];
    int merged[n + m];

    // Read second array
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy first array
    for(int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for(int i = 0; i < m; i++) {
        merged[n + i] = arr2[i];
    }

    // Print merged array
    for(int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
//2

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
