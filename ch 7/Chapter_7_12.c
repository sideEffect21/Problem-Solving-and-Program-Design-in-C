/*
	Ditulis oleh: M Naufal Badruttamam
	Nrp: 5025211240
	Nama: Naufal

	Nrp: 5025211234
	Nama: Rafi Aliefian Putra Ramadhani

	Nrp: 5025211204
	Nama: Meyroja Jovancha Firoos
*/

/* Tanggal:
        	Pembuatan: 01 November 2021
        	Modifikasi: 01 November 2021
*/

// Problem : Bagaimana cara menemukan biner ada diurutan keberapa / binary search ? 

/* Analisis :
 * Pertama input berapa elemen yang ingin dicari 
 * Masukkan bilangan berapapun sesuai dengan jumlah elemen yang telah dimasukkan sebelumnya
 * inisialisasi pertama adalah nol karena indeks array pertama adalah nol
 * inisialisasi terakhir adalah n - 1 karena indeks array terakhir adalah n - 1
 * cari nilai tengah dengan menjumlahkan indeks pertama dan terakhir lalu dibagi 2
 */ 

/* Data Requirements :
	Problem Inputs :
	int arr[1000]                         // Mendaklarasikan indeks dalam array sebanyak 1000
	int pertama   						  // inisialisasi indeks pertama array
	int terakhir						  // inisialisasi indeks terakhir array
	
	Problem Outputs :
	int n 								  // Mengeluarkan berapa banyak bilangan yang akan dilanjutan ke dala for
	int i 								  // untuk kerja looping 
	int cariBiner						  // Untuk mencari biner dan mengoutputka	n hasil yang diperoleh
	
	Relevant formulas :
	cariBiner(a, x + 1, akhir, d);
	cariBiner(a, awal, x - 1, d);
*/

/* Design :
 * Buatlah prototipe fungsi
 * Memasukkan banyak bilangan ke-n yang akan di input selanjutnya
 * Mmeasukkan angka binary yang akan di cari urutan letaknya
 * Mencari nilai biner dengan bantuan fungsi rekursif
 * Mengoutputkan hasil yang telah diproses sebelumnya
 * Akan mengeluarkan angka dan tata letaknya
*/

/* Implementaton : 
#include <stdio.h>

int cariBiner(int [], int, int, int);

int main()
{
	int i, pertama, terakhir;
	int n, caribiner, arr[1000], index;
	
	printf("Masukkan banyak elemen yang ingin dicari : \n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Masukkan nilai biner yang ingin dicari (Harus ada dalam input) \n");
	scanf("%d", &caribiner);
	
	pertama = 0; // Indeks pertama array adalah nol
	terakhir = n - 1; // Indeks terakhir biner
	
	index = cariBiner(arr, pertama, terakhir, caribiner);
	
	if(index < 0)
	{
		printf("Tidak ditemukan! Masukkan bilangan lebih dari 0");
	}
	else
	{
		printf("%d Berada di Lokasi %d", caribiner, index + 1); // Maksud indeks + 1 disini adalah karena indeks array dimulai dari angka nol
	}
	return 0;
}

int cariBiner(int a[], int awal, int akhir, int d)
{	
	int x;
	if(awal > akhir) return -1;
	x = (awal + akhir) / 2;
	
	if(a[x] == d) return x;
	else if(d > a[x]) 
	{
		return cariBiner(a, x + 1, akhir, d);
	}
	else
	{
		return cariBiner(a, awal, x - 1, d);
	}
} */

#include <stdio.h>

int cariBiner(int [], int, int, int);

int main()
{
	int i, pertama, terakhir;
	int n, caribiner, arr[1000], index;
	
	printf("Masukkan banyak elemen yang ingin dicari : \n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Masukkan nilai binary yang ingin dicari (Harus ada dalam input) \n");
	scanf("%d", &caribiner);
	
	pertama = 0; // Indeks pertama array adalah nol
	terakhir = n - 1; // Indeks terakhir biner
	
	index = cariBiner(arr, pertama, terakhir, caribiner);
	
	if(index < 0)
	{
		printf("Tidak ditemukan! Masukkan bilangan lebih dari 0");
	}
	else
	{
		printf("%d Berada di Lokasi %d", caribiner, index + 1); // Maksud indeks + 1 disini adalah karena indeks array dimulai dari angka nol
	}
	return 0;
}

int cariBiner(int a[], int awal, int akhir, int d)
{	
	int x;
	if(awal > akhir) return -1;
	x = (awal + akhir) / 2;
	
	if(a[x] == d) return x;
	else if(d > a[x]) 
	{
		return cariBiner(a, x + 1, akhir, d);
	}
	else
	{
		return cariBiner(a, awal, x - 1, d);
	}
}

/* Output :
Masukkan banyak elemen yang ingin dicari :
7
3
4
2
5
6
7
8
Masukkan nilai binary yang ingin dicari (Harus ada dalam input)
4
4 Berada di Lokasi 2

Testing :
Dalam uji coba kasus diatas kita mengerjakan soal yang berhubungan dengan binarysearch atau biasa dikenal dengan
mencari posisi bilangan yang sudah di inputkan dalam format diatas, kita menggunakan bantuan array untuk mencari
lokasi tersebut. sehingga saat menginputkan angka 7 awal, lalu memasukkan 7 bilangan, lalu memasukkan angka yang 
ingin dicari lokasi nya yaitu angka 4, dan angka 4 berada di posisi 2.
*/
