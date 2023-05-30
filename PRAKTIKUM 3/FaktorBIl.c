/*Nama File : FaktorBil.c*/
/*Deskripsi : Menentukan faktor bilangan dari input bilangan integer sembarang N*/
/*Pembuat   : Adriel Silaban - 24060120140095*/
/*Tanggal   : Selasa - 30 Mei 2023*/

#include <stdio.h>

int main() {

    /*Kamus*/
    int N;
    int total = 0;

    /*Algoritma*/
    printf("============PROGRAM FAKTOR BILANGAN INTEGER SEMBARANG N============\n");
    printf("\nMasukkan bilangan N: ");
    scanf("%d", &N);
    printf("\nN = %d", N);

    if (N > 0) {
        printf("\nFaktor bilangannya adalah ");
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d " , i);
            }
        }
    }
    else {
        printf("\nBilangan integer tidak boleh negatif");
    }

    return 0;
}