/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: SimetriTabel.c
Deskripsi 	    : Menentukan apakah array ini simetri atau tidak
*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    // Kamus
    int N ; 
    int M ; 

    // Algoritma 
    printf("Panjang dari array 1 : ") ; 
    scanf("%d" , &N) ; 
    
    printf("Panjang dari array 2 : ") ; 
    scanf("%d" , &M) ; 

    int T[N] ; 
    int A[M] ; 

    for(int i = 0 ; i < N ; i++){
        printf("Masukkan elemen array 1 : ") ; 
        scanf("%d" , &T[i]) ;
    }

    for(int i = 0 ; i < M ; i++){
        printf("Masukkan elemen array 2 : ") ; 
        scanf("%d" , &A[i]) ;
    }
    
    if(M == N){
        for(int i = 0 ; i < N ; i++){
            if(T[i] == A[i]){
                if(i == N - 1){
                    printf("Array simetri") ;
                }
                else{
                    continue;
                }
            }
            else{
                printf("Array tidak simetri") ; 
                break;
            }
        }
    }
    else{
        printf("Array tidak simetri");
        }

return 0;
}