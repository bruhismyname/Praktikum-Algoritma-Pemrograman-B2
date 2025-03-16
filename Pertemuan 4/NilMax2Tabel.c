/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: NilMax2Tabel.c
Deskripsi 		: Menampilkan nilai maksimum kedua dari sebuah inputan tabel
*/

#include <stdio.h>

int main(){

    // kamus
    int N;
    int i;
    int Max1 = 0;
    int Max2 = 0;

    //algoritma
    int TabelNilai[N];
    printf("Masukkan jumlah elemen: ");
    scanf("%d",&N);

    printf("Masukkan elemen: \n");
    for (i = 0;i < N;i++){
        scanf("%d",&TabelNilai[i]);
    }

    for (i = 0; i < N; i++) {
        if (TabelNilai[i] > Max1) {
            Max2 = Max1;
            Max1 = TabelNilai[i];
        } else if (TabelNilai[i] > Max2 && TabelNilai[i] < Max1){
            Max2 = TabelNilai[i];
        }
    }
    printf("Nilai maksimum ke-2 adalah: %d\n", Max2);

    return 0;
}