/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: JumBarKolMat.c
Deskripsi 		: Menjumlahkan semua elemen pada baris dan kolomnya
*/

#include<stdlib.h>
#include<stdio.h>

int main()
{

    // Kamus 
    int N ; 
    int M ; 
    
    // Algoritma 
    printf("Masukkan banyak baris : ") ; 
    scanf("%d" , &N) ; 
    
    printf("Masukkan banyak kolom : ") ; 
    scanf("%d" , &M) ; 

    int T[N][M] ; 

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            printf("Masukkan baris %d kolom %d : " , i+1 , j+1) ; 
            scanf("%d" , &T[i][j]) ; 
            continue;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    // Untk penjumlahan baris 
    for(int i = 0 ; i < N ; i++){
        int sum = 0 ; 
        for(int j = 0 ; j < N ; j++){
            sum += T[i][j] ; 
        }
        printf("Jumlah dari baris %d : " , i+1 ) ;
        printf("%d\n" , sum) ; 
    }

    // untuk penjumlahan kolom
    for(int i = 0 ; i < M ; i ++){
        int sum = 0 ; 
        for(int j = 0 ; j < N ; j++){
            sum += T[j][i] ; 
        }
        printf("Jumlah dari kolom %d : " , i+1) ;
        printf("%d\n" , sum);
        }
return 0;

}