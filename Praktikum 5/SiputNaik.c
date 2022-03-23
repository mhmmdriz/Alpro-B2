/*Nama File 	: SiputNaik*/
/*Deskripsi 	: Menentukan jumlah hari yang dibutuhkan siput untuk mencapai ujung lubang dengan kedalaman N meter*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 23 Maret 2022*/

#include <stdio.h>

int main(){
    /*Kamus*/
    float N,i;
    int hari;

    /*Algoritma*/
    printf("==Program Siput Naik==\n");
    printf("Masukkan kedalaman lubang :");
    scanf("%f", &N);

    hari = 0;
    i = 0;
    while (i < N-0.1)
    {
        hari = hari + 1;
        i = i + 0.2;
    }
    printf("Siput membutuhkan %i hari untuk mencapai ujung lubang", hari);
}