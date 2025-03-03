#include <stdio.h>

// Step 3: Merge function (Combining sorted subarrays)
void merge(int arr[], int st, int mid, int end) {
    int temp[end - st + 1]; // Temporary array to store merged result
    int i = st, j = mid + 1, k = 0;

    // Step 3.1: Compare elements from both halves and merge them into temp[]
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Step 3.2: Copy remaining elements from the left half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Step 3.3: Copy remaining elements from the right half
    while (j <= end) {
        temp[k++] = arr[j++];
    }

    // Step 3.4: Copy sorted elements back into the original array
    for (int i = 0; i < k; i++) {
        arr[st + i] = temp[i];
    }
}

// Step 2: Recursive Merge Sort function (Divide phase)
void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2; // Step 2.1: Find the middle index

        //Recursively sort the left half
        mergeSort(arr, start, mid);

        //Recursively sort the right half
        mergeSort(arr, mid + 1, end);

        //Merge both halves
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {12, 31, 35, 8, 32, 17}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 2: Call mergeSort to sort the array
    mergeSort(arr, 0, size - 1);

    // Step 4: Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
