/*
Nama    		    : Rajwaa Muflihul Aufaa
NIM     		    : 24060123140189
Nama Program 	  : FrekNilTabel.c
Deskripsi 	    : Menampilkan nilai elemen T yang muncul lebih dari satu kali
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
  int i, j; 
  int n; 
  int T[] = {7,4,5,7,6,5,3,5,1,4}; 
  int count; 
    
    //Algoritma 
  n = sizeof(T)/sizeof(T[0]); 
  for (i = 0; i < n; i++){
    count = 1;
    for (j = i + 1; j < n; j++){
      if( T[i] == T[j] ){ 
        count++; 
        T[j] = 0;
      }
    }
    if (count > 1 && T[i] != 0) { 
      printf("%d ", T[i]); 
    }
  }
  
  return 0;
}