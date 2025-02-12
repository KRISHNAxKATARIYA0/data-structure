#include <stdio.h>

#define MAX_SIZE 100  // Define the maximum size of the array

void insertElement(int arr[], int *n, int position, int value) {
    // Check if the position is valid
    if (position < 1 || position > *n + 1) {
        printf("Invalid position! Position should be between 1 and %d.\n", *n + 1);
        return;
    }
    
    // Shift elements to the right to make space for the new element
    for (int i = *n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the element at the specified position
    arr[position - 1] = value;
    
    // Increment the size of the array
    (*n)++;
    
    printf("Element inserted successfully!\n");
}

void printArray(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE], n, value, position;
    
    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    // Read the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the position and value to insert
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &position);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    
    // Call the insert function
    insertElement(arr, &n, position, value);
    
    // Print the updated array
    printArray(arr, n);
    
    return 0;
}
