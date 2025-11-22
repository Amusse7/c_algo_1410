#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target){
            return i; // Found at index i
        }
    }
    return -1; // Not found
}

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;


    int index = linearSearch(arr, size, target);
    if (index != -1){
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found\n", target);
    }
    return 0;
}