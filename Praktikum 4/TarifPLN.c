/*Nama File 	: TarifPLN*/
/*Deskripsi 	: Menghitung besarnya tarif pemakaian listrik dan menampilkannya di layar*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 15 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int gol,daya,tarif;

    /*Algoritma*/
    printf("Program Perhitungan Tarif PLN\n");
    printf("Masukkan golongan anda : ");
    scanf("%i", &gol);
    printf("Masukkan daya listrik anda : ");
    scanf("%i", &daya);

    if((gol==1) || (gol==2)){
        if (daya>0)
        {
            if(daya>=100){
                if(daya < 1000){
                    tarif = daya * gol * 1000;
                }
                else{
                    tarif = (daya*gol*1000)*1.1;
                }
                printf("Tarif listrik yang dikenakan adalah = %i", tarif);
            }
            else{
                printf("Minimal pembayaran 100 kWH!");
            }
        }
        else{
            printf("Masukan daya harus bilangan positif");
        }
    }
    else{
        printf("Golongan yang tersedia hanya 1 dan 2!");
    }
}