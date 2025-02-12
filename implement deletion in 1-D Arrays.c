#include <stdio.h>

void deleteElement(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index.\n");
        return;
    }
    
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;  // Decrease array size
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter index to delete: ");
    scanf("%d", &index);

    deleteElement(arr, &size, index);

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
