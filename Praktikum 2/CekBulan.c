/*Nama File 	: CekBulan*/
/*Deskripsi 	: Menampilkan nama bulan ke layar dari inputan bilangan 1-12*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Rabu, 9 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int b;

    /*Algoritma*/
    printf("Program menampilkan nama bulan\n");
    printf("Masukkan nomor bulan : ");
    scanf("%i", &b);

    if((b >= 1) & (b<= 12)){
        switch (b)
        {
        case 1:
            printf("Merupakan bulan Januari");
            break;
        case 2:
            printf("Merupakan bulan Februari");
            break;
        case 3:
            printf("Merupakan bulan Maret");
            break;
        case 4:
            printf("Merupakan bulan April");
            break;
        case 5:
            printf("Merupakan bulan Mei");
            break;
        case 6:
            printf("Merupakan bulan Juni");
            break;
        case 7:
            printf("Merupakan bulan Juli");
            break;
        case 8:
            printf("Merupakan bulan Agustus");
            break;
        case 9:
            printf("Merupakan bulan September");
            break;
        case 10:
            printf("Merupakan bulan Oktober");
            break;
        case 11:
            printf("Merupakan bulan November");
            break;
        case 12:
            printf("Merupakan bulan Desember");
            break;
        default:
            break;
        }
    }
    else{
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}