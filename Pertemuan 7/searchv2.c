/*
Nama : Rajwaa Muflihul Aufaa
Nim : 24060123140189
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){

    // kamus
    int N, IX, X, i;
    bool Found = false;
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
    while (i <= N && !Found )
    {
        if (T[i] == X)  
        {
            Found = true;
        }
        else
        {
            i = i + 1;
        }
    }
    if (Found)  
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