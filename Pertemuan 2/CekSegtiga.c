/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: CekSegitiga.c
Deskripsi 		: Menampilkan ke layar dari ke-3 inputan tersebut termasuk Segitiga Sama Sisi, atau Segitiga Sama Kaki, atau Segitiga Sembarang
*/

#include <stdio.h>

int main(){

    //kamus
    int sisi1, sisi2, sisi3 ;

    // algoritma
    printf("Masukkan nilai sisi1: ");
    scanf("%d",&sisi1);
    printf("Masukkan nilai sisi2: ");
    scanf("%d",&sisi2);
    printf("Masukkan nilai sisi3: ");
    scanf("%d",&sisi3);

    if(sisi1<0 || sisi2<0 || sisi3<0){
        printf("Terdapat nilai yang tidak sesuai");
    }else if (sisi1 == sisi2 && sisi2 == sisi3){
        printf("Segitiga sama sisi");
    }else if (sisi1 == sisi2 || sisi1 == sisi3 || sisi2 == sisi3){
        printf("Segitiga sama kaki");
    }else {
        printf("Segitiga sembarang");
    }

    return 0;
}