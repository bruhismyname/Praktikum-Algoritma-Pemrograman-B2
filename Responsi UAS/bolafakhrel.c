#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr1[a], arr2[b];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }

    bubbleSort(arr1, a);
    bubbleSort(arr2, b);

    int hilang[a];
    int hilangCount = 0;
    int i = 0, j = 0;

    while (i < a && j < b) {
        if (arr1[i] < arr2[j]) {
            hilang[hilangCount++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            i++;
            j++;
        }
    }
    
    while (i < a) {
        hilang[hilangCount++] = arr1[i++];
    }

    printArray(hilang, hilangCount);

    return 0;
}