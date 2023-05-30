/*Deskripsi : Mengecek sebuah input bilangan apakah bilangan integer atau bukan*/
/*Pembuat   : Adriel SIlaban - 24060120140095*/
/*Tanggal   : Selasa, 30 Mei 2023*/

#include <stdio.h>

int main()
{
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("============PROGRAM MENGECEK INPUT BILANGAN INTEGER============\n");
    printf("\nMasukkan nilai i = ");
    if (scanf("%d", &i))
    {
        printf("\n%d", i);
    }
    else
    {
        printf("\nBukan termasuk sebuah bilangan");
    }

    return 0;
}