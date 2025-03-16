/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: FaktorBil.c
Deskripsi 		: Menampilkan faktor bilangan suatu inputan
*/

#include <stdio.h>

int main(){

    //kamus
    int n, i;

    //algoritma
    printf("Masukkan nilai n: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        if (n%i == 0){
            printf("%d ",i);
        }
    }
    return 0;
}