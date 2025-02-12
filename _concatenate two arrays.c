#include <stdio.h>

// Function to concatenate two arrays
void concatenateArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i, j;

    // Copy elements of the first array into result
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

    // Copy elements of the second array into result
    for (j = 0; j < size2; j++) {
        result[i + j] = arr2[j];
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[100], arr2[100], result[200];
    int size1, size2;

    // Input size and elements for the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements for the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Concatenate the arrays
    concatenateArrays(arr1, size1, arr2, size2, result);

    // Display the concatenated array
    printf("Concatenated array: ");
    displayArray(result, size1 + size2);

    return 0;
}
