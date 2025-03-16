/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: CekBilSemp.c
Deskripsi 		: Mengecek bilangan tersebut bilangan sempurna atau bukan
*/

#include <stdio.h>

int main(){

    //kamus

    int n, i, sum = 0;

    //algoritma
    printf("Masukkan nilai n: ");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i == 0){
            sum += i;
        }
    }
    if (sum == n){
        printf("%d adalah bilangan sempurna.\n",n);
    } else {
        printf("%d bukan bilangan sempurna.\n",n);
    }
    return 0;
}