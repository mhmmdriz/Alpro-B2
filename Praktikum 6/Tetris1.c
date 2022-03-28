/*Nama File 	: Tetris1*/
/*Deskripsi 	: Menampilkan susunan karakter '*' sesuai masukkan N*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Senin, 28 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int N, i, j;

/*Algoritma*/
    printf("Program Tetris\n");
    printf("Masukkan banyaknya baris : ");
    scanf("%i", &N); /*Input*/

    if (N <= 0)
    {
        printf("Masukan N harus positif!");
    }
    else{
        for (i = N; i >= 1; i--) /*Looping baris*/
        {
            for (j = i; j >= 1; j--) /*Looping kolom*/
            {
                printf("*");         /*Output bintang*/
            }
            printf(" --%i\n", i);    /*Output Nomor Baris dan melakukan new line*/
        }   
    }
    return 0;
}
