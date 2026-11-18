//1

#include <stdio.h>

int main() {
    int n, key, found = 0;

    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    scanf("%d", &key);

    // Linear search
    for(int i = 0; i < n; i++) {

        if(arr[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("-1");
    }

    return 0;
}
//2

#include <stdio.h>

int main() {
    int n, temp;

    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    int start = 0;
    int end = n - 1;

    while(start < end) {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print reversed array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
