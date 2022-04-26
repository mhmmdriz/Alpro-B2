/*Nama File 	: InsertionSort*/
/*Deskripsi 	: Mengurutkan elemen array dengan metode insertion sort*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 26 April 2022*/

#include <stdio.h>

void Insertion_Sort(int A[], int N){
// Kamus Lokal
    int temp,j;

// Algoritma
    // Looping untuk insert setiap elemen array ke bagian array
    // yang sudah terurut
    // i disini sebagai penanda antara elemen array yang sudah terurut dikiri
    // dengan elemen array yang belum terurut di kanan
    for (int i = 1; i < N; i++){
        {
            j = i; // inisialisasi j

            // looping untuk membandingkan elemen array yang belum terurut yang ingin dimasukkan
            // ke bagian array yang sudah terurut apakah lebih kecil atau tidak
            // ke masing-masing elemen array yang sudah terurut
            while (j > 0 && (A[j-1] > A[j]))
            {
                // Jika lebih kecil maka ditukar posisinya
                temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;

                // decrement j
                j--;
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

    Insertion_Sort(A,N);
    PrintArray(A,N);

    return 0;
}