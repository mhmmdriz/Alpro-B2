/*Nama File 	: HitungKata*/
/*Deskripsi 	: Mesin abstrak untuk menghitung kata dalam sebuah pita*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Kamis, 12 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    char Kata[50];
    int Count_Kata,Banyak_Char,i;

/*Algoritma*/
    printf("===Mesin Penghitung Kata===\n");
    Banyak_Char = HitungChar();
    
    START();
    i=0;
    while(!EOP()){
        Kata[i] = CC;
        ADV();
        i++;
    }
    Kata[i]='.';

    printf("Pita = ");
    for (int i = 0; i <= Banyak_Char; i++)
    {
        printf("%c", Kata[i]);
    }
    printf("\n");

    for (int i = 1; i <= Banyak_Char; i++)
    {
        if ((IsHuruf(Kata[i-1])&&Kata[i]==' ')||(IsHuruf(Kata[i-1])&&Kata[i]=='.'))
        {
            Count_Kata+=1;
        }
    }
    
    printf("Kata dalam pita berjumlah = %i", Count_Kata);
    getch();
    return 0;
}