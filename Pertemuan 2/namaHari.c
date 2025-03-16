/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: namaHari.c
Deskripsi 		: Menuliskan ke layar nama-nama Hari dari nomor hari
*/

#include <stdio.h>

int main(){

    //kamus
    int nama_hari ;

    //algoritma
    printf("Masukkan nama hari(1-7): ");
    scanf("%d", &nama_hari);

    if (nama_hari<1 || nama_hari>7){
        printf("Masukkan nomor hari tidak tepat", nama_hari);
    }else if (nama_hari == 1){
        printf("Senin");
    }else if (nama_hari == 2){
        printf("Selasa");
    }else if (nama_hari == 3){
        printf("Rabu");
    }else if (nama_hari == 4){
        printf("Kamis");
    }else if (nama_hari == 5){
        printf("Jumat");
    }else if (nama_hari == 6){
        printf("Sabtu");
    }else if (nama_hari == 7){
        printf("Minggu");
    }
    
    return 0;
}