/*Nama File 	: FaktorBil*/
/*Deskripsi 	: Menentukan faktor-faktor bilangan dari bilangan integer N sembarang dan menampilkannya ke layar*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 15 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int N;
    
    /*Algoritma*/
    printf("==Program Faktor Bilangan==\n");
    printf("Masukkan bilangan integer positif sembarang N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        for (int i = 1; i <= N; i++)
        {
            if (N % i==0)
            {
                printf("| %i |", i);
            }   
        }
    }
}