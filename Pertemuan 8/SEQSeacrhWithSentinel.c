/*
Nama    		: Rajwaa Muflihul Aufaa
NIM     		: 24060123140189
Nama Program 	: SEQSearchWithSentinel.c
*/

#include<stdio.h>
#include<stdlib.h>

void SEQSearchWithSentinel(int T[], int N, int X) {
    int i, IX;
    T[N+1] = X;
    i = 1;
    while (T[i-1] != X) {
        i++;
    }
    if (i < N) {
        IX = i;
    }
    else {
        IX = 0;
    }
    printf("IX = %d \n", IX);
}

int main() {
    int N, X1, X2;
    int T[] = {19,1,28,5,20,15,52,13,16,29};
    N = 10;
    X1 = 52;
    printf ("1.a) ");
    SEQSearchWithSentinel(T,N,X1);
    X2 = 10;
    printf ("  b) ");
    SEQSearchWithSentinel(T,N,X2);
}
