/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: JumFrekNiltabel.c
Deskripsi 	    : menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    // Kamus
    int N ; 
    int sum = 0 ; 

    // Algoritma 
    printf("Masukkan panjang array : ") ; 
    scanf("%d" , &N) ; 

    int T[N] ; 
    for(int i = 0 ; i < N ; i++){
        printf("Masukkan nilai elemen : ") ; 
        scanf("%d" , &T[i]) ; 
    }

    for(int i = 0 ; i < N ; i++){
        int l = 0 ; 
        for(int j = i + 1 ; j < N ; j ++ ){
            if(T[i] == T[j]) {
                l += 1 ;
                continue;
            }
            else{
                continue;
            }
        }
        if(l == 1){
            sum += T[i] + T[i] ; 
        }
        else if (l > 1){
            sum += T[i] ; 
        }
    }
    printf("%d" , sum);
return 0;
}