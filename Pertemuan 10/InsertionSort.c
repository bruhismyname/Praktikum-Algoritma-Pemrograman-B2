/*
Nama    		    : Rajwaa Muflihul Aufaa
NIM     		    : 24060123140189
Nama Program 	    : InsertionSort.c
Deskripsi 	        : Mengurutkan tabel integer dengan insertion sort
*/

#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Pindahkan elemen arr[0..i-1], yang lebih besar dari key, ke satu posisi di depan dari posisi sekarang
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    insertionSort(T, N);
    printf("Sorted array using Insertion Sort: \n");
    printArray(T, N);

    return 0;
}
