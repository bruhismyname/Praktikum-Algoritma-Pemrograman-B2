/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: CekBilPrima.c
Deskripsi 		: Mengecek bilangan tersebut prima atau bukan
*/

#include <stdio.h>

int main(){

    //kamus
    int n, i, prima = 0;

    //algoritma
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        if (n%i == 0){
            prima++;
        }
    }

    if (prima == 2) {
        printf("%d adalah bilangan prima.\n",n);
    } else {
        printf("%d bukan bilangan prima.\n",n);
    }
    return 0;   
}