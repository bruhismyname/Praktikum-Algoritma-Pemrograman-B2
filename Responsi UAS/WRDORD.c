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
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    bubbleSort(A, n);

    int B1[n/2 + 1], B2[n/2 + 1];
    int B1_size = 0, B2_size = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            B1[B1_size++] = A[i];
        } else {
            B2[B2_size++] = A[i];
        }
    }

    for (int i = 0; i < B2_size / 2; i++) {
        int temp = B2[i];
        B2[i] = B2[B2_size - i - 1];
        B2[B2_size - i - 1] = temp;
    }

    int result[n];
    int index1 = 0, index2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && index1 < B1_size) {
            result[i] = B1[index1++];
        } else if (index2 < B2_size) {
            result[i] = B2[index2++];
        }
    }

    printArray(result, n);

    return 0;
}