/*
    Ditulis oleh : Kelompok 3
    Nama / NRP : 
    Made Nanda Wija Vahindra (5025211160)
    Tsabita Putri Ramadhany (5025211130)
    Dilla Wahdana (5025211060)

    Tanggal: 
            Pembuatan: 2 November 2021
            Modifikasi 1: 2 November 2021

    Problem : Membuat program yang berisi fungsi untuk menggabungkan isi dari 2 array terurut dengan tipe double
    dan dalam array hasil tidak mengandung nilai yang sama dan nilainya naik(ascending).
    
    Analisis: user menginput 2 array double kemudian dibuat fungsi untuk mengabungkan 2 array tersebut menjadi 1 array
    tetapi tidak dengan nilai duplikat. kemudian ditampilkan array hasil dari input.

Data Requirements :

        Problem Constant : -
        Problem input:
            int m
            int n
            double arr1[]
            double arr2[]

        Problem output:
            double result[]

        Relevant Formulas: 
            -
        
Desain:
    Initial Algorithm:
    1. membuat input size dari kedua array
    2. membuat input elemen dari masing masing array dengan size yang telah ditentukan
    3. membuat fungsi merge untuk menggabungkan dan mengiriskan 2 array secara tersortir
    4. membuat fungsi perulangan untuk menampilkan array hasil

IMPLEMENTATION
    untuk mendapatkan data input array dari user digunakan statement:
        int m, n;
        printf("Enter the size of first array: ");
        scanf("%d", &m);
        printf("Enter the size of second array: ");
        scanf("%d", &n);
        double arr1[m];
        double arr2[n];
        double temp[m+n];
        double result[m+n];
        int i;
        int k;
        printf("Enter an ascending first array elements:\n");
        for(i=0;i<m;i++)
        {
            scanf("%lf", &arr1[i]);
        }
        printf("Enter an ascending second array elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%lf", &arr2[i]);
        }
    lalu membuat fungsi merge dengan statment:
    void merge(int m, int n, const double arr1[],const double arr2[], double arr3[], double result[], int *z)
    {
    int i=0,j=0,k=0;

    while (i < m && j < n)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    i=0;
    j=0;
    while(i<(m+n))
    {
        if(arr3[i] != arr3[i+1])
        {
            result[j] = arr3[i];
            j++;
        }
        i++;
    }
    *z = j;
    }
    kemudian memanggil fungsi merge pada fungsi main dengan statement:
    merge(m, n, arr1, arr2, temp, result, &k);
    lalu menampilkan array hasil dengan perulangan:
    for(i=0;i<k;i++){
        printf("%.1lf", result[i]);
        if(i != (k-1)){
            printf(", ");
        }
    }
*/
#include <stdio.h>

void merge(int, int, const double* , const double* , double* , double*, int*);

int main()
{
    int m, n;
    printf("Enter the size of first array: ");
    scanf("%d", &m);
    printf("Enter the size of second array: ");
    scanf("%d", &n);
    double arr1[m];
    double arr2[n];
    double temp[m+n];
    double result[m+n];
    int i;
    int k;
    printf("Enter an ascending first array elements:\n");
    for(i=0;i<m;i++)
    {
        scanf("%lf", &arr1[i]);
    }
    printf("Enter an ascending second array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%lf", &arr2[i]);
    }
    merge(m, n, arr1, arr2, temp, result, &k);
    for(i=0;i<k;i++){
        printf("%.1lf", result[i]);
        if(i != (k-1)){
            printf(", ");
        }
    }
    return 0;
}

void merge(int m, int n, const double arr1[],const double arr2[], double arr3[], double result[], int *z)
{
    int i=0,j=0,k=0;

    while (i < m && j < n)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    i=0;
    j=0;
    while(i<(m+n))
    {
        if(arr3[i] != arr3[i+1])
        {
            result[j] = arr3[i];
            j++;
        }
        i++;
    }
    *z = j;
}
/*
	Input
	Enter the size of first array: 5
	Enter the size of second array: 3
	Enter an ascending first array elements:
	-10.5, -1.8, 3.5, 6.3, 7.2
	Enter an ascending second array elements:
	-1.8, 3.1, 6.3
	
	TESTING:
	Dalam kasus uji tersebut dimasukkan input yang telah terurai di atas
	kemudian hasil yang dikeluarkan sudah benar yaitu 
	-10.5, -1.8, 3.1, 3.5, 6.3, 7.2
*/
