/*Nama File 	: CekSempurna*/
/*Deskripsi 	: Mengecek apakah sebuah bilangan integer N sembarang merupakan bilangan sempurna atau bukan dan menampilkannya di layar*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 23 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int N, Total_Faktor;

    /*Algoritma*/
    printf("Program Cek Bilangan Sempurna\n");
    printf("Masukkan bilangan integer positif N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        for (int i = 1; i < N; i++)
        {
            if (N % i==0)
            {
                Total_Faktor += i;
            }
        }

        if (Total_Faktor == N)
        {
            printf("Merupakan Bilangan Sempurna");
        }
        else{
            printf("Bukan Merupakan Bilangan Sempurna");
        }
    }
}