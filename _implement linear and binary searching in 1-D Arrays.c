#include <stdio.h>

// Linear Search Function
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return index if element is found
        }
    }
    return -1;  // Return -1 if element is not found
}

// Binary Search Function
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    return -1;  // Return -1 if element is not found
}

int main() {
    int arr[100], size, target, choice, result;

    // Input size and array elements
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array (sorted for binary search): ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // User input for search type
    printf("Choose search method:\n1. Linear Search\n2. Binary Search\n");
    scanf("%d", &choice);

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    if (choice == 1) {
        // Linear Search
        result = linearSearch(arr, size, target);
        if (result != -1) {
            printf("Element %d found at index %d (Linear Search).\n", target, result);
        } else {
            printf("Element %d not found in the array (Linear Search).\n", target);
        }
    } else if (choice == 2) {
        // Binary Search
        result = binarySearch(arr, size, target);
        if (result != -1) {
            printf("Element %d found at index %d (Binary Search).\n", target, result);
        } else {
            printf("Element %d not found in the array (Binary Search).\n", target);
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
