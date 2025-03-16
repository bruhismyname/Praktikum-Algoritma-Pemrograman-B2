/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: hitungTahanan.c
Deskripsi 		: Menampilkan 3 buah tahanan yang dimasukan menggunakan keyboard dan menghasilkan total tahanan jika dirangkai seri
*/

#include <stdio.h>

int main(){

    //kamus
    int tahanan1, tahanan2, tahanan3,total_tahanan;

    //algoritma
    printf("Masukkan tahanan1: ");
    scanf("%d",&tahanan1);
    printf("Masukkan tahanan2: ");
    scanf("%d",&tahanan2);
    printf("Masukkan tahanan3: ");
    scanf("%d",&tahanan3);

    if (tahanan1<0 || tahanan2<0 || tahanan3<0){
        printf("Masukkan tahanan tidak boleh negatif");
    }else {
        total_tahanan = tahanan1+tahanan2+tahanan3 ;
        printf("Total tahanan adalah %d tahanan", total_tahanan);
    }

    return 0;
}