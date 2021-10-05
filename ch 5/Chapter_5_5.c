/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/


// Problem
/*
Buatlah program yang memasukkan dua bilangan dan mengimplementasikan
pendekatan berikut untuk menemukan gcd contoh menggunakan nomor
-252 dan 735.

*/

// Analysis
/*
untuk membuat program tersebut kita harus mengecek angka tersebut dengan pembagi nol
kemudian hitung sisa pembagi lama dibagi sisanya ditemukan. ulangi proses ini sampai sisanya nol
	
// Data Requirements
/*
	Problem inputs
	int a, b;			//input angka
	
	
	Problem outputs
int	r, g;		//otput yang keluar
	
*/

// Design
/*
	Initial algorithm
	1. meminta 2 data angka 
	2. mengecek kedua input 
	3. mengecek apakah bilangan tersebut dibagi sisanya nol atau tidak
	4. jika tidak program tersebut akan mengulang dan membagi sampai nol
// Implementations
/*
	Pertama, kita perlu meminta input berupa input
  printf("\ngcd(a, b)");
	printf("\nEnter a - ");
	scanf("%d", &a);
	printf("\nEnter b - ");
	scanf("%d", &b);
  
	Setelah itu, menggunakan staement if untuk mengecek angkanya
	if((a % b) == 0)
		g = b;
	
jika bernulai false maka akan dilakukan perulangan
 else
	{	
		r = a % b;
		while(r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
		g = b;
	}
  
  untuk menampilkan hasil 
  printf("\ngcd(a, b) - %d\n", g);
}
	*/
#include "stdio.h"
void main()
{
	int a, b, r, g;
	printf("\ngcd(a, b)");
	printf("\nEnter a - ");
	scanf("%d", &a);
	printf("\nEnter b - ");
	scanf("%d", &b);
	if(a < b)
	{
		int t = a;
		a = b;
		b = t;
	}
	
	if((a % b) == 0)
		g = b;
	else
	{	
		r = a % b;
		while(r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
		g = b;
	}
	
	printf("\ngcd(a, b) - %d\n", g);
}
