/*Nama File 	: BubbleSort*/
/*Deskripsi 	: Mengurutkan elemen array dengan metode bubble sort*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 26 April 2022*/

#include <stdio.h>

void Bubble_Sort(int A[], int N){
// Kamus lokal
    int temp;

// Algoritma
    // Looping untuk membandingkan 2 elemen secara terus menerus dari awal
    // sampai akhir. i disini sebagai pembatas elemen array yang sudah terurut dengan yang belum
    // atau sebagai batas dari nilai j. Nilai i akan selalu bertambah, artinya elemen yang sudah 
    // terurut di belakang akan terus bertambah dan elemen array yang belum terurut berkurang.
    for (int i = 0; i < N; i++)
    {
        // looping untuk membandingkan 2 elemen array
        // elemen dengan nilai terbesar dari elemen yang belum terurut akan dibawa
        // ke indeks terakhir dari elemen yang belum terurut
        for (int j = 1; j < N-i; j++)
        {
            // kondisi untuk pertukaran posisi elemen
            if (A[j-1] > A[j])
            {
                temp = A[j-1];
                A[j-1] = A[j];
                A[j] = temp;
            } 
        }
    }
}

void PrintArray(int A[],int N){
    // Fungsi untuk menampilkan array
    printf("\nArray setelah diurutkan : \n");
    for (int i = 0; i < N; i++)
        {
            printf("%i ", A[i]);
        }
    printf("\n");
}

int main(){
// Kamus
    int N;

// Algoritma
    printf("Masukkan Panjang Array : ");
    scanf("%i", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        printf("Masukkan elemen ke-%i : ", i);
        scanf("%i", &A[i]);
    }

    Bubble_Sort(A,N);
    PrintArray(A,N);

    return 0;
}
