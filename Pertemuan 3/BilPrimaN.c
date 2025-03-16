/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: BilPrimaN.c
Deskripsi 		: Mencetak bilangan prima sampai dengan bilangan integer sembarang N
*/

#include <stdio.h>                                                                  

int main() {
    //Kamus
    int i, N, f, cek;

    //Algoritma
    printf("Masukkan batas maksimal bilangan prima yang ingin dicetak: ");
    scanf("%d", &N);

    if (N<=1) {
        printf("Tidak ada bilangan prima sampai bilangan tersebut");
    }

    else {
        for (i=2; i<=N; i++){
            for (f=2; f<=i/2; f++){
                if (i % f == 0){
                    cek = 0;
                    break;
                }

                else{
                    cek = 1;
                }
            }
        
            if (cek){
                printf("%d ", i);
            }
        }
    }

    return 0;
}