/*Nama File 	: CekSeriPositif*/
/*Deskripsi 	: Menerima 3 buah tahanan yang tidak boleh negatif dan menghasilkan total tahanan tersebut, kemudian ditampilkan di layar*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Rabu, 9 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
    /*Kamus*/
    float x,y,z;
    float hasil;

    /*Algoritma*/
    printf("Program total tahanan positif\n");
    printf("Masukkan tahanan 1 : ");
    scanf("%f", &x);
    printf("Masukkan tahanan 2 : ");
    scanf("%f", &y);
    printf("Masukkan tahanan 3 : ");
    scanf("%f", &z);

    if((x>0) && (y>0) && (z>0)){
        hasil = x + y + z;
        printf("Total tahanan adalah = %.2f", hasil);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
