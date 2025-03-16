/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: jarakPBola.c
Deskripsi 		: Menghitung dan menampilkan jarak yang ditempuh gerak parabola
*/

#include <stdio.h>

int main() {

    //kamus
    float v0,t,y ;
    float g = 9.8 ;
    

    //algoritma
    printf("Masukkan: \n");
    printf ("v0 = ");
    scanf ("%f", &v0) ;
    printf ("t = ") ;
    scanf ("%f", &t) ;

    y = (v0*t)-(0.5*(g*t*t)) ;
    printf ("y = %.2f\n", y);
    printf("\nJadi jarak yang ditempuh adalah:%.2f meter") ;

    return 0;
}