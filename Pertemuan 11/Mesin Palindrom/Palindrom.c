/*Nama File 	: Palindrom*/
/*Deskripsi 	: Mesin abstrak untuk mengecek kata dalam pita apakah merupakan palindrom/bukan*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Jum'at, 13 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    char Kata[50];
    int Panjang_Pita;
    int i;
    int cek;

/*Algoritma*/
    printf("==Mesin Pengecek Palindrom==\n");
    printf("Pita = ");
    Panjang_Pita = HitungChar();

    START();
    i=0;
    while(!EOP()){
        Kata[i] = CC;
        ADV();
        i++;
    }  

    // Menampilkan pita
    for (int i = 0; i < Panjang_Pita; i++)
    {
        printf("%c", Kata[i]);
    }

    cek = Palindrom(Kata);
    printf("\nPalindrom? = ");
    if (cek == 1)
    {
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
    
    getch();
    return 0;
}