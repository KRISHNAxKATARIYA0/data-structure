#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int temp;
    
    for (int i = 0; i < size - 1; i++) {
        
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Original array:\n");
    displayArray(arr, size);

    
    bubbleSort(arr, size);

    
    printf("Sorted array:\n");
    displayArray(arr, size);

    return 0;
}
