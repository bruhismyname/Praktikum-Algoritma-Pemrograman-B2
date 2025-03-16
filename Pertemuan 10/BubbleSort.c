/*
Nama    		    : Rajwaa Muflihul Aufaa
NIM     		    : 24060123140189
Nama Program 	    : BubbleSort.c
Deskripsi 	        : Mengurutkan tabel integer dengan bubble sort
*/

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int T[] = {7, 1, 9, 5, 3, 8, 6};
    int N = sizeof(T)/sizeof(T[0]);

    bubbleSort(T, N);
    printf("Sorted array using Bubble Sort: \n");
    printArray(T, N);

    return 0;
}
