/* 	
	Ditulis oleh:
	Nrp: 	
	Nama: 
*/
 
/* Tanggal:
        	Pembuatan: 30 oktober 2021
        	Modifikasi 1:
        	Modifikasi 2:
        	........
*/ 

/* 	Problem:
/*	Terdapat sebaris angka acak, yang harus diurutkan dari kiri yang terkecil hingga kanan yang terbesar
*/
 	
	 
/* 	Analysis:
/*	mengurutkan sebaris angka acak bisa menggunakan metode selection sort ; yaitu metode pengurutan angka acak
*/

/* Data Requirements : sebaris angka acak oleh si pembuat kode*/
/*	
	Problem Constant: 
	
	Problem Inputs: 
	arr[] // menampung beberapa n angka inputan
	int i // variabel yang menampung angka acak
	int j // variabel yang menampung angka acak
	int left // menampung angka paling kiri
	int right // menampung angka paling kanan
	int n // menampung angka inputan	
*/


/*Design*/
/*Initial Algorithm
1. menyusun desain algoritma program
2. Menyusun angka secara acak
3. Memanggil fungsi secara berulang untuk memudahkan penyelesaian masalah
4. Menampilkan hasil urutan angka yang benar
*/

/* Pseudocode Algoritma Selection Sort
1. Cari nilai yang terkecil dari n gerbong
2. Swap nilai terkecil dan gerbong 0
3. Ulangi langkah 1 dan 2 dengan n++ tiap kali berulang
*/

/*Implementation
#include<stdio.h> //header file

void swap(int arr[], int i, int j) { //fungsi yang digunakan untuk mempermudah menampung angka yang akan ditukar
    int temp;                        //variabel yang digunakan untuk menampung angka acak sementara
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int getSmallest(int arr[], int left, int right) { //fungsi untuk mengurutkan letak suatu angka acak entah paling kanan atau paling kiri,
                                                  dengan keterangan kiri yang paling kecil diiringi dengan angka setelahnya
    int small = left;
    int i;
    for(i = left+1; i <= right; i++) {
        if(arr[i] < arr[small])
            small = i;
    }
    return small;
}

void selectionSort(int arr[], int n) {  //fungsi yang hanya bisa digunakan dalam metode selection sort
    int i;                                berfungsi mengurutkan angka yang acak dengam memanggil fungsi pendukung seperti swap dan getsmallest
    for(i = 0; i < n; i++) {
        int smallest = getSmallest(arr, i, n-1);
        swap(arr, smallest, i);int arr[] = {8, 45, 95, 13, 5, 64, 25, 46};
    }
}

int main() {                  //fungsi main untuk memanggil fungsi selection
    int arr[] = {8, 45, 95, 13, 5, 64, 25, 46};   //mendeklarasikan angka acak
    int n = 8; // size of array arr[]
    selectionSort(arr, n);
    
    int i;
    for(i = 0; i < 8; i++)
        printf("%d ", arr[i]);

    return 0;
} 
*/


#include<stdio.h>

void swap(int arr[], int i, int j) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int getSmallest(int arr[], int left, int right) {
    int small = left;
    int i;
    for(i = left+1; i <= right; i++) {
        if(arr[i] < arr[small])
            small = i;
    }
    return small;
}

void selectionSort(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        int smallest = getSmallest(arr, i, n-1);
        swap(arr, smallest, i);int arr[] = {8, 45, 95, 13, 5, 64, 25, 46};
    }
}

int main() {
    int arr[] = {8, 45, 95, 13, 5, 64, 25, 46};
    int n = 8; // size of array arr[]
    selectionSort(arr, n);
    
    int i;
    for(i = 0; i < 8; i++)
        printf("%d ", arr[i]);

    return 0;
}
/* testing:
	urutan angka acak semula berupa 8, 45, 95, 13, 5, 64, 25, 46
	diurutkan menjadi 5, 8, 13, 25, 45, 46, 64, 95
*/


