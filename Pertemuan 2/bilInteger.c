
/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: bilInteger.c
Deskripsi 		: Menampilkan ke layar bahwa bilangan i tersebut sebagai bilangan bulat positif atau nol atau bulat negative
*/

#include <stdio.h>

int main(){

    //kamus
    int i ; // inputan i

    //algoritma
    printf("Masukkan nilai i : ");
    scanf("%i",&i);
    if (i>0){
        printf("Bilangan %i adalah bilangan positif", i);
    } else if (i==0){
        printf("Bilangan %i adalah nol",i);
    } else if (i<0){
        printf("Bilangan %i adalah bilangan negatif",i);
    }
    return 0;
}