#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing value %d with %d\n", array[i], value);
        if (array[i] == value) {
            return i; // Return the index where the value is found
        }
    }
    
    return -1; // Value not found
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value_to_find = 9;

    int index = linear_search(arr, size, value_to_find);

    if (index != -1) {
        printf("The value %d was found at index %d.\n", value_to_find, index);
    } else {
        printf("The value %d was not found in the array.\n", value_to_find);
    }

    return 0;
}
