//1

#include <stdio.h>

int main() {
    int n, count;

    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        count = 0;

        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;
            }
        }

        if(count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
