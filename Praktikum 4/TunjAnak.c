/*Nama File 	: TunjAnak*/
/*Deskripsi 	: Menghitung dan menampilkan di layar besar tunjangan anak*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 15 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int anak,gaji,tunjangan;

    /*Algoritma*/
    printf("Program perhitungan tunjangan anak\n");
    printf("Masukkan jumlah anak yang dimiliki : ");
    scanf("%i", &anak);
    printf("Masukkan gaji pokok anda : ");
    scanf("%i", &gaji);

    if (gaji > 0)
    {
        if (anak >= 0)
        {
            if(anak < 3){
                tunjangan = anak * (gaji * 10/100);
            }
            else{
                tunjangan = 3 * (gaji * 10/100);
            }
            printf("Tunjangan yang anda dapatkan adalah %i", tunjangan);
        }
        else
        {
            printf("Masukan anak tidak boleh negatif");
        }
    }
    else{
        printf("Masukan gaji harus bilangan positif");
    }
    

    
    

}