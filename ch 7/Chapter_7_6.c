/* 	
Anggota kel. 1 Dasar Pemrograman
1. Katarina Inezita Prambudi 		5025211148
2. Arif Nugraha Santosa 			5025211048
3. Laurivasya Gadhing Syahafidh 	5025211136
*/
 
/* Tanggal: 1 November 2021
*/

/* 	Problem: */
/*	Membuat program dengan output tabel perkalian 6 hingga 10. Contohnya:
        6       7       8       9       10
6       36      42      48      54      60
7       42      49      56      63      70
8       48      56      64      72      80
9       54      63      72      81      90
10      60      70      80      90      100

*/

/*	Analysis :
	Untuk menghitung perkalian tersebut, kita dapat menyimpan nilai bilangan awal dengan array yang bernilai 6,7,8,9, dan 10.
	Kemudian gunakan loop untuk melakukan print pada baris pertama.
	Setelah itu buatlah nested loop untuk mengalikan bilangan bilangan tersebut dan outputkan hasilnya.
*/

/* Data Requirements Fungsi Main: /*
	
	Problem Constant:
	-
	
	Problem Inputs: 
	-
	
	Program Variables:
	int angka[5] = {6,7,8,9,10}; 			//Nilai dari bilangan yang akan dijadikan
	int i = 0; 								//Untuk melakukan loop
	int j = 0; 								//Untuk melakukan loop
	
	Problem Outputs:
	int angka[array ke n]					//Untuk menampilkan hasil dari perkalian
	
	Relevant Formulas:
	Tabel perkalian dapat dibuat dengan mengalikan bilangan i1 dengan j1 kemudian i1 x i2
	misal: 6 x 6 = 36, 6 x 7 = 42.
	
*/
/*DESIGN*/
/*	Initial Algorithm:
	1. Membuat array untuk menyimpan nilai 6, 7, 8, 9, dan 10
	2. Melakukan print array pada bilangan tersebut
	3. Melakukan perhitungan untuk menghasilkan tabel perkalian
	4. Menampilkan hasil kepada user
    
    Step refinements :
    3.1 Tiap nilai dari tabel perkalian dapat dicari dengan mengalikan array ke i dengan array ke j.
    
/*IMPLEMENTATION
	
	Buatlah array untuk menyimpan nilai yang akan dioutputkan dengan statement
  	int angka[5] = {6,7,8,9,10};
  	Setelah itu deklarasikan variabel untuk melakukan loop dengan statement
  	int i = 0;
	int j = 0;
	
	Kemudian lakukan print pada baris pertama tabel perkalian tersebut dengan statement
		for( i = 0; i < 5; i++){
		printf("\t%d", angka[i]);	
	}
	
	Setelah itu buatlah nested loop untuk menghitung tiap angka dari tabel perkalian dengan statement
		for( i = 0; i < 5; i++){
		printf("\n%d", angka[i]);
		for( j = 0; j < 5; j++){
			printf("\t%d", angka[i]*angka[j]);
		}
	}
	
*/


#include <stdio.h>

int main(){
	
	int angka[5] = {6,7,8,9,10}; //Program Variables - Nilai dari bilangan yang akan dijadikan
	int i = 0; //Program Variables -  Untuk melakukan loop
	int j = 0; //Program Variables -  Untuk melakukan loop
	
	for( i = 0; i < 5; i++){ // Loop untuk mengeprint barisan pertama dari tabel perkalian
		printf("\t%d", angka[i]); // Akan menghasilkan		6	7	8	9	10	
	}
	
	for( i = 0; i < 5; i++){//Loop untuk menghitung bilangan array ke i dengan bilangan ke j sehingga akan terbentuk tabel perkalian.
		printf("\n%d", angka[i]);
		for( j = 0; j < 5; j++){
			printf("\t%d", angka[i]*angka[j]);//Menampilkan hasil dari tabel perkalian
		}
	}

	return 0;
}

/*
TESTING

 		6       7       8       9       10
6       36      42      48      54      60
7       42      49      56      63      70
8       48      56      64      72      80
9       54      63      72      81      90
10      60      70      80      90      100

Dalam uji kasus ini, program tersebut telah menghasilkan output sesuai dengan permintaan pada soal.
Dalam array ke 0, ia menyimpan nilai 6. Salah satu contoh perhitungannya adalah pada saat baris ke dua kolom ke tiga
menghasilkan nilai 42 dari hasil perkalian 6 dan 7, caranya adalah dengan mengalikan array ke 0 dengan array ke 1
Untuk memanggil nilai dari array ke-n dapat menggunakan nested loops.

*/
