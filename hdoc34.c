//1

#include <stdio.h>

int main() {
    int n, position, element;

    scanf("%d", &n);

    int arr[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &element);

    // Shift elements to the right
    for(int i = n - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert element at the given position
    arr[position - 1] = element;

    // Print updated array
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n, position;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &position);

    // Shift elements to the left
    for(int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print array after deletion
    for(int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
