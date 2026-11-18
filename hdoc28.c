//1

#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("%d", sum);

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

    int max = arr[0];
    int min = arr[0];

    // Find maximum and minimum
    for(int i = 1; i < n; i++) {

        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}
