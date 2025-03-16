/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: JumDeret.c
Deskripsi 		: Menghitung jumlah total deret dari sebuah inputan bilangan
*/

#include <stdio.h>

int main() {

    // kamus
    int n, i, sum = 0;

    //algoritma
    printf("Masukkan jumlah bilangan dalam deret: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Jumlah total deret adalah: %d\n", sum);

    return 0;
}
