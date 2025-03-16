/*
Nama : Rajwaa Muflihul Aufaa
Nim : 24060123140189
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    // kamus
    int N, IX, X, i;
    int *T = malloc((N+1) * sizeof(int));

    // algoritma
    printf("Masukan nilai ");
    printf("N = ");
    scanf("%d", &N);
    printf("X = ");
    scanf("%d", &X);

    printf("Masukkan nilai tabel: \n");
    for(i = 1; i <= N; i++) {
        scanf("%d", &T[i]);
    }

    i = 1;
    IX = 0;
    while (i < N && T[i] != X )
    {
        i = i + 1;
    }
    if (T[i] == X)  
    {
        IX = i;
        printf("jadi hasilnya %d", IX);
    }
    else {
        IX = 0;
        printf("%d tidak ada di dalam tabel", X);
    }
    
    free(T);
    return 0;
}