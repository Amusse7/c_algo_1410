#include <stdio.h>

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIdx])
            minIdx = j;
        }

        //swap
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int main() {
    int arr[]= {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n); //calling the function to select the array
    printf("Selection Array: ");
    printArray(arr, n);
    return 0;
}