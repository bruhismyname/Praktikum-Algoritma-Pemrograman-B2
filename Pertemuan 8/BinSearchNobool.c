/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: BinSearchNobool.c
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void BinSearch2(int T[], int N, int X) {
    int Atas, Bawah, Tengah, IX;
    Atas = 1;
    Bawah = N;
    Tengah = (Atas + Bawah) / 2;
    while (Atas < Bawah && X != T[Tengah - 1]) {
        if(X < T[Tengah - 1]) {
            Bawah = Tengah - 1;
        }
        else if (X > T[Tengah - 1]) {
            Atas = Tengah + 1;
        }
        Tengah = (Atas + Bawah) / 2;
    }
    if(X == T[Tengah-1]) {
        printf("True");   
        IX = Tengah;  
    }
    else {
        printf("False");   
        IX = 0;
    }
    printf("; IX = %d", IX); 
}

int main() {
    int N, X;
    int T2[] = {1,4,6,7,10,12,18,21,29,30,41,44,47};
    N = 13;
    /*3*/
    printf("3.");
    /*a*/
    printf("a) ");
    X = 41;
    BinSearch2(T2,N,X);
    /*b*/
    printf("\n  b) ");
    X = 8;
    BinSearch2(T2,N,X);
}