/*Nama File 	: CountingSort*/
/*Deskripsi 	: Mengurutkan elemen array dengan metode counting sort*/
/*Pembuat   	: 24060121130086-Muhammad Rizki*/
/*Tgl Pembuatan	: Selasa, 26 April 2022*/

#include <stdio.h>

void counting_sort(int A[],int n,int max){
// tidak bisa untuk bilangan negatif
// Kamus lokal
    int count[max + 1],i,j,k;

// Algoritma
    // looping untuk mengeset semua elemen array count dengan nilai 0
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // Menghitung banyaknya masing-masing nilai elemen di array A dan diletakkan di array count.
    // Elemen array A yang dihitung berapa banyak kemunculannya, di representasikan sebagai index pada array count
    // misal elemen 2 pada A itu dijadikan sebagai index array count, dan nilai dari index 2 count
    // tersebut merupakan total banyaknya kemunculan nilai 2 pada array A
    for(i=0;i<n;++i){
        count[A[i]]=count[A[i]]+1;
    }

    // Mengembalikan nilai elemen-elemen array A sesuai dengan index yang ada di array count
    // dimulai dari index array count terkecil, dan banyaknya elemen tersebut sesuai dengan
    // isi dari index count tersebut
    j = 0;
    for(i=0;i<=max;++i){

        // inisialisasi k sebagai banyaknya kemunculan suatu elemen i array A yaitu
        // nilai dari index ke-i dari array count
        k = count[i];

        // kondisi untuk pertukaran posisi elemen array
        while (j < n && k > 0)
        {
            A[j] = i;
            j++;
            k--;
        }
    }
}


void counting_sort_real(int A[],int n,int max, int min){
// Bisa untuk bilangan negatif
// Konsepnya sama dengan counting sort biasa, tetapi disini bisa melakukan
// sorting apabila terdapat bilangan negatif dengan cara masing-masing elemen
// array A nilainya dikurangi dengan nilai elemen terkecil array A. Sehingga
// elemen terkecil pada array A akan berada pada index 0 array count

// Kamus Lokal
    int count[max-min+1],j,k;

// Algoritma
    // looping untuk mengeset semua elemen array count dengan nilai 0
    for (int i = 0; i <= max-min; i++)
    {
        count[i] = 0;
    }

    // Menghitung banyaknya masing-masing nilai elemen di array A dan diletakkan di array count.
    for (int i = 0; i < n; i++)
    {
        count[A[i]-min] = count[A[i]-min] +1;
    }

    // Mengembalikan nilai elemen-elemen array A sesuai dengan index yang ada di array count
    // dan menambahkannya dengan min supaya index count tersebut kembali menjadi
    // elemen A yang sebenarnya.
    j = 0;
    for (int i = 0; i <= max-min; i++)
    {
        k = count[i];
        // kondisi untuk pertukaran posisi elemen array
        while (j<n && k>0)
        {
            A[j] = i + min;
            j++;
            k--;
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

void Max_Array(int A[],int N, int *Max){
    // Fungsi untuk menemukan nilai maks elemen array
    *Max = A[0];
    for (int i = 1; i < N; i++)
    {
        if (*Max < A[i])
        {
            *Max = A[i];
        }
    }
    
}

void Min_Array(int A[],int N, int *Min){
    // Fungsi untuk menemukan nilai minimum elemen array
    *Min = A[0];
    for (int i = 1; i < N; i++)
    {
        if (*Min > A[i])
        {
            *Min = A[i];
        }
    }
}

int main(){
// Kamus
    int N,Max,Min;

// Algoritma
    printf("Masukkan Panjang Array : ");
    scanf("%i", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        printf("Masukkan elemen ke-%i : ", i);
        scanf("%i", &A[i]);
    }

    Max_Array(A, N, &Max);
    Min_Array(A, N, &Min);

    // Comment Salah Satu Fungsi

    // counting_sort(A,N,Max);
    // PrintArray(A,N);

    counting_sort_real(A,N,Max,Min);
    PrintArray(A,N);

    return 0;
}