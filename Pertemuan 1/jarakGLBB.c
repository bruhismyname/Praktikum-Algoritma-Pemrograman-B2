/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: jarakGLBB.c
Deskripsi 		: Menghitung dan menampilkan GLBB
*/

#include <stdio.h>

int main() {

    //kamus

    float v0,t,a,S ;
    
    //algoritma
    printf("Masukkan: \n");
    printf("v0 = ") ;
    scanf("%f", &v0) ;
    printf("t = ") ;
    scanf("%f", &t) ;
    printf("a = ") ;
    scanf("%f", &a) ;

    S = v0*t+0.5*(a*t) ;
    printf("S = %.2f\n", S) ;
    printf("\nJarak yang ditempuh adalah: %.2f meter") ;

    return 0 ;
    
}