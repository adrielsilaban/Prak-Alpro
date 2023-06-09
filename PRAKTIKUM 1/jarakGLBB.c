/*Nama File : jarakGLBB.c*/
/*Deskripsi : Menghitung dan menampilkan GLBB terhadap benda*/
/*Pembuat   : Adriel Silaban - 24060120140095 */
/*Tanggal   : Selasa, 30 Mei 2023, 10;40*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float s; //jarak
    float t; //waktu
    float v0; //kecepatan awal
    float a; //percepatan

    /*Algoritma*/;
    printf("============PROGRAM MENGHITUNG JARAK GLBB BENDA============\n");
    printf("\nMasukkan nilai jarak (s) = ");
    scanf("%f", &s);
    printf("Jarak (s) = %.1f meter", s);
    printf("\n");
    printf("\nMasukkan nilai waktu (t) = ");
    scanf("%f", &t);
    printf("Waktu (t) = %.1f detik", t);

    v0 = s / t;
    a = s / (t * t);
    s = v0 * t + 0.5 * (a * (t * t)); //proses menghitung GLBB benda

    printf("\n");
    printf("\nHasil GLBB benda sebesar %.1f meter", s); //menampilkan hasil GLBB benda

    return 0;
}