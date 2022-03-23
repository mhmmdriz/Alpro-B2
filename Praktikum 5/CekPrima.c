/*Nama File 	: CekPrima*/
/*Deskripsi 	: Mengecek apakah bilangan integer N sembarang merupakan bilangan prima atau bukan dan menampilkannya di layar*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 23 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int N, BanyFaktor;
    
    /*Algoritma*/
    printf("==Program Cek Bilangan Prima==\n");
    printf("Masukkan bilangan integer positif sembarang : ");
    scanf("%i", &N);
    
    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        for (int i = 1; i <= N; i++)
        {
            int a = N % i;
            if (a==0)
            {
                BanyFaktor++;
            } 
        }
    
        if (BanyFaktor == 2)
        {
            printf("Merupakan bilangan prima");
        }
        else{
            printf("Bukan merupakan bilangan prima");
        }
    }
    return 0;
}