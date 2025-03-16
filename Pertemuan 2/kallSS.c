/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: kallSS.c
Deskripsi 		: Menerima 2 masukkan bilangan bulat, dan menampilkan operasi aritmatika berdasarkan pilihan operasi
*/

#include <stdio.h>

int main() {

    int x,y;
    char z;
    float h;

    printf("masukan nilai pertama =");
    scanf("%d", &x);
    printf("masukan nilai kedua =");
    scanf("%d", &y);
    printf("masukan hasil operasi yang di inginkan =");
    scanf("\n%c", &z);

    if (z == 'a'){
        //h = x + y;
        printf("%d", x+y);
    }else if (z == 'b'){
        h = x - y;
        printf("%.2f", h);
    }else if (z == 'c'){
        h = x * y;
        printf("%.2f", h);
    }else if (z == 'd'){
        h = (float)x / y;
        printf("%.2f", h);
    }else if (z == 'e'){
        z = x / y;
        printf("%d", z);        
    }else if (z == 'f'){
        h = x % y;
        printf("%.2f", h);
    }else {
        printf("bukan pilihan menu yang benar");
        }
}
