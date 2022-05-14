/*Nama File 	: InversPita*/
/*Deskripsi 	: Mesin abstrak untuk menampilkan kalimat dalam sebuah pita dalam keadaan terbalik(invers)*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Kamis, 12 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int Panjang_Pita;
    char Pita[50];
    int i;

/*Algoritma*/
    Panjang_Pita = HitungChar();

    printf("===Mesin Inverse Pita===\n");

    if (Panjang_Pita >= 50)
    {
        printf("karakter dalam pita maksimal 50 termasuk titik");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            Pita[i] = CC;
            ADV();
            i++;
        }

        printf("Pita dibaca = ");
        for (int i = 0; i < Panjang_Pita; i++)
        {
            printf("%c", Pita[i]);
        }
        
        printf("\nPita inverse = ");
        // melakukan inverse kata
        for (int i = Panjang_Pita-1; i >= 0; i--)
        {
            printf("%c", Pita[i]);
        }
        
    }

    getch();
    return 0;
}