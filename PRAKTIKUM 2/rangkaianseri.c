/*Deskripsi : Menampilkan dan menghitung penjumlahan sebuah 3 buah bilangan positif*/
/*Pembuat   : Adriel SIlaban - 24060120140095*/
/*Tanggal   : Selasa, 30 Mei 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float x;
    float y;
    float z;

    /*Algoritma*/
    printf("============PROGRAM PENGHITUNGAN RANGKAIAN SERI 3 BILANGAN============\n");
    printf("\nMasukkan nilai x = ");
    scanf("%f", &x);
    printf("\nMasukkan nilai y = ");
    scanf("%f", &y);
    printf("\nMasukkan nilai z = ");
    scanf("%f", &z);

    if (x > 0 && y > 0 && z > 0) {
        printf("\n%.2f", x + y + z);
    }
    else {
        printf("\nMasukan tahanan tidak boleh negatif");
    }

    return 0;
}