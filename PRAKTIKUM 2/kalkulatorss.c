/*Deskripsi : Menghitung operasi aritmatika dua bilangan berdasarkan inputan */
/*Pembuat   : Adriel SIlaban - 24060120140095*/
/*Tanggal   : Selasa, 30 Mei 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int A;
    int B;
    char operasi;

    /*Algoritma*/
    printf("============PROGRAM KALKULATOR SUPER SEDERHANA(SS)============\n");
    printf("\nMasukkan operasi = ");
    scanf("%c", &operasi);
    printf("\nMasukkan nilai A = ");
    scanf("%d", &A);
    printf("\nMasukkan nilai B = ");
    scanf("%d", &B);

    if (operasi != 'a' && operasi != 'b' && operasi != 'c' && operasi != 'd' && operasi != 'e' && operasi != 'f') {
        printf("\nBukan pilihan menu yang benar");
    }
    else {
        if (operasi == 'a') {
            printf("\n%d", A + B);
        }
        else if (operasi == 'b') {
            printf("\n%d", A - B);
        }
        else if (operasi == 'c') {
            printf("\n%d", A * B);
        }
        else if (operasi == 'd') {
            printf("\n%.2f", (float)A / B);
        }
        else if (operasi == 'e') {
            printf("\n%d", div(A, B));
        }
        else if (operasi == 'f') {
            printf("\n%d", A % B);
        }
    }

    return 0;
}