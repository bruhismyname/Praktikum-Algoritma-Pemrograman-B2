/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: volBolakeret.c
Deskripsi 		: Menghitung dan menampilkan volume bola dan volume kerucut
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //kamus
    float r, Vb, Vk ;
    const float phi = 3.14 ;

    //algoritma
    printf("Masukkan : \n");
    printf("r = ") ;
    scanf("%f", &r);

    Vb = (4/3) * (phi*r*r*r);
    printf("Vb = %.2f \n", Vb) ;

    Vk = 0.5 * Vb ;
    printf("Vk = %.2f \n", Vk) ;

    printf("\nJadi volume bola adalah : %.2f meter", Vb);
    printf("\nJadi volume kerucut adalah : %.2f meter", Vk);

    return 0;
}