/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: luasKellang.c
Deskripsi 		: Menghitung dan menampilkan luas dan keliling layang-layang
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //kamus
    float s1,s2,d1,d2,Luas,Keliling ;

    //algoritma
    printf("Masukkan: \n");
    printf("s1 = ");
    scanf("%f", &s1);
    printf("s2 = ");
    scanf("%f", &s2);
    printf("d1 = ");
    scanf("%f",&d1);
    printf("d2 = ");
    scanf("%f",&d2);

    Luas = 0.5*d1*d2 ;
    printf("Luas = %.2f \n",Luas);

    Keliling = 2*(s1+s2);
    printf("Keliling = %.2f \n", Keliling);

    printf("\nJadi Luas layang-layang adalah : %.2f meter", Luas);
    printf("\nJadi Keliling layang-layang adalah : %.2f meter", Keliling);

    return 0;
}