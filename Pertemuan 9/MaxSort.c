/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: selectionsort.c
Deskripsi 		: Mengurutkan tabel menggunakan selection sort
*/
#include <stdio.h>
#include <stdlib.h>

void Selectionsort(int arr[], int n) {
    
    // kamus
    int i, pass, IMax;

    // algoritma
    for (pass = 0; pass < n - 1; pass++) {
        IMax = pass;
        for (i = pass + 1; i < n; i++) {
            if (arr[i] > arr[IMax]) {
                IMax = i;
            }
        }
        
        int Temp = arr[pass];
        arr[pass] = arr[IMax];
        arr[IMax] = Temp;
    }
}

int main() {

    //kamus
    int arr[] = {7, 1, 9, 5, 3, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    Selectionsort(arr, n);

    //algoritma
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}