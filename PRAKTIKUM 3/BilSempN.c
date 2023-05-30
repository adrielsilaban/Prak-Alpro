/*Nama File : BilSempN.c*/
/*Deskripsi : Mencetak bilangan sempurna dengan batas dari input bilangan N*/
/*Pembuat   : Adriel Silaban - 24060120140095*/
/*Tanggal   : Selasa - 30 Mei 2023*/

#include <stdio.h>

int main() {
    
    /*Kamus*/
    int N;
    int i;
    int j;
    int total;

    /*Algoritma*/
    printf("============PROGRAM CETAK BILANGAN SEMPURNA============\n");
    printf("\nMasukkan bilangan N: ");
    scanf("%d", &N);
    printf("\nN = %d", N);
    printf("\n");

    if (N > 0) {
        printf("Bilangan Sempurnanya adalah ");
        for (i = 1; i <= N; i++) {
            total = 0;
            for (j = 1; j <= i / 2; j++) {
                if (i % j == 0) {
                    total += j;
                }
            }
            if (total == i) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("Bilangan integer tidak boleh negatif");
    }

    return 0;
}