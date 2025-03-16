/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: gayaSentri.c
Deskripsi 		: Menghitung dan menampilkan gaya sentripetal
*/

#include <stdio.h>

int main() {

    //kamus
    float m,v,r,F ;

    //algoritma
    printf("Masukkan : \n") ;
    printf("m = ");
    scanf("%f",&m);
    printf("v = ");
    scanf("%f",&v);
    printf("r = ");
    scanf("%f",&r);

    F = m*(v*v/r) ;
    printf("F = %.2f\n", F) ;
    printf("\nJadi gaya yang dihasilkan adalah %.2f meter", F) ;

    return 0;

}