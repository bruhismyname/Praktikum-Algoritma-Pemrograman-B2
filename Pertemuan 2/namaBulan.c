/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: namaBulan.c
Deskripsi 		: Menuliskan ke layar nama-nama Bulan dari nomor bulan
*/

#include <stdio.h>

int main(){

    //kamus
    int nama_bulan;

    //algoritma
    printf("Masukkan nama bulan(1-12): ");
    scanf("%d",&nama_bulan);

    if(nama_bulan<1 || nama_bulan>12){
        printf("Masukkan nomor bulan tidak tepat");
    }else if (nama_bulan == 1){
        printf("Januari");
    }else if (nama_bulan == 2){
        printf("Februari");
    }else if (nama_bulan == 3){
        printf("Maret");
    }else if (nama_bulan == 4){
        printf("April");
    }else if (nama_bulan == 5){
        printf("Mei");
    }else if (nama_bulan == 6){
        printf("Juni");
    }else if (nama_bulan == 7){
        printf("Juli");
    }else if (nama_bulan == 8){
        printf("Agustus");
    }else if (nama_bulan == 9){
        printf("September");
    }else if (nama_bulan == 10){
        printf("Oktober");
    }else if (nama_bulan == 11){
        printf("November");
    }else if (nama_bulan == 12){
        printf("Desember");
    }
    
    return 0;

}