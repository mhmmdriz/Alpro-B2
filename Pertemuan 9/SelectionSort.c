/*Nama File 	: SelectionSort*/
/*Deskripsi 	: Mengurutkan elemen array dengan metode selection sort*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 26 April 2022*/

#include <stdio.h>

void Selection_Sort(int A[], int N){
// Kamus Lokal
    int index_min,temp;

// Algoritma
    for (int i = 0; i < N; i++)
    {
        // Menginisialisasi index_min dengan i
        index_min = i;

        // Melakukan looping untuk mencari index yang isinya nilai elemen terkecil array
        for (int j = i+1; j < N; j++)
        {
            // Apabila elemen pada indeks j lebih kecil, maka ubah index_min = j
            if (A[j] < A[index_min])
            {
                index_min = j;
            }
        }
        
        // Jika sudah ditemukan indeks dengan isinya elemen terkecil, maka
        // dilakukan pertukaran antara A[i] dengan A[index_min]
        temp = A[i];
        A[i] = A[index_min];
        A[index_min] = temp;
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

    Selection_Sort(A,N);
    PrintArray(A,N);

    return 0;
}