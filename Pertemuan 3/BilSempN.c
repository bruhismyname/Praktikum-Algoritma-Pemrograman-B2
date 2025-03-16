/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: BilSempN.c
Deskripsi 		: Mencetak bilangan sempurna sampai dengan bilangan integer sembarang N
*/


#include <stdio.h>

int main() {
    //Kamus
    int i, N, f, total;

    //Algoritma
    printf("Masukkan batas maksimal bilangan sempurna yang akan dicetak: ");
    scanf("%d", &N);

    if (N<=5) {
        printf("Tidak ada bilangan sempurna dengan batas maksimal yang diberikan");
    }

    else {
        for (i=6; i<=N; i++) {
            total = 0;

            for (f=1; f<i; f++) {
                if (i % f == 0) {
                    total += f;
                }
            }

            if (i == total){
                printf("%d ", i);
            } 
        }
    }
    return 0;
}