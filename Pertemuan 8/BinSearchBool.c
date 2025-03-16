/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: BinSearchBool.c
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void BinSearch1(int T[], int N, int X) {
    int Atas, Bawah, Tengah;
    Atas = 1;
    Bawah = N;
    bool Found = false;
    while (Atas <= Bawah && !Found) {
        Tengah = (Atas + Bawah) / 2;
        if (X == T[Tengah - 1]) {
            Found = true;
            break;
        }
        else if (X < T[Tengah - 1]) {
            Bawah = Tengah - 1;
        }
        else {
            Atas = Tengah + 1;
        }
    }
    if (Found) {
        printf("True");
    }
    else {
        printf("False");
    }
}
int main()
{
    int N, X;
    /*2*/
    printf("2.");
    int T2[] = {1,4,6,7,10,12,18,21,29,30,41,44,47};
    N= 13;
    /*a*/
    printf("a) ");
    X = 41;
    BinSearch1(T2,N,X);
    /*b*/
    printf("\n  b) ");
    X = 8;
    BinSearch1(T2,N,X);
}