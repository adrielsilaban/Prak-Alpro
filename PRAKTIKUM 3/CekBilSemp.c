/*Nama File : CekBilSemp.c*/
/*Deskripsi : Menentukan dan mengecek apakah bilangan sempurna beserta faktornya*/
/*Pembuat   : Adriel Silaban - 24060120140095*/
/*Tanggal   : Selasa - 30 Mei 2023*/

#include <stdio.h>

int main() {

    /*Kamus*/
    int N;
    int faktor = 0;

    /*Algoritma*/
    printf("============PROGRAM CEK BILANGAN SEMPURNA============\n");
    printf("\nMasukkan bilangan N: ");
    scanf("%d", &N);
    printf("\nN = %d", N);

    if (N > 0) {
        printf("\nJumlah faktor bilangannya ");
        for (int i = 1; i < N; i++) {
            if (N % i == 0) {
                printf("%d ", i);
                faktor += i;
            }
        }
        if (faktor == N) {
            printf("\nBilangan Sempurna");
        }
        else {
            printf("\nBukan Bilangan Sempurna");
        }
    }
    else {
        printf("\nBilangan integer tidak boleh negatif");
    }

    return 0;
}