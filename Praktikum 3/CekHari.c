/*Nama File 	: CekHari*/
/*Deskripsi 	: Menuliskan nama hari ke layar dari inputan bilangan 1-7*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 8 Maret 2022*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main(){ 
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("Program Menampilkan Nama Hari\n");
    printf("Masukkan nomor hari = ");
    scanf("%i", &i);

    if((i >= 1) & (i <= 7)){
        switch (i)
        {
        case 1:
            printf("Merupakan hari Senin");
            break;
        case 2:
            printf("Merupakan hari Selasa");
            break;
        case 3:
            printf("Merupakan hari Rabu");
            break;
        case 4:
            printf("Merupakan hari Kamis");
            break;
        case 5:
            printf("Merupakan hari Jumat");
            break;
        case 6:
            printf("Merupakan hari Sabtu");
            break;
        case 7:
            printf("Merupakan hari Minggu");
            break;
        default:
            break;
        }
    }
    else{
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}