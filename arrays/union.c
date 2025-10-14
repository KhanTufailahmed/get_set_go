#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int n1 = 4;
    int arr2[] = {3, 4, 5, 6,7,9};
    int n2 = 6;

    int arr3[n1 + n2]; // temporary array for union
    int k = 0;

    // Copy all elements of arr1
    for (int i = 0; i < n1; i++) {
        arr3[k] = arr1[i];
        k++;
    }
    // Copy elements of arr2 that are not already in arr3
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == arr3[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            arr3[k++] = arr2[i];
        }
    }

    printf("Union of two arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
