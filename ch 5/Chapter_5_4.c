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
-Buatlah program untuk mengecek bilangan ganjil dan bilangan
nilai genap dalam kumpulan N angka. 
 
*/

// Analysis
/* untuk mengecek bilangan tersebut maka digunakan statement if 
dan digunakan kondisi for agar perulangan pertanyaan tidak berhenti
	
// Data Requirements
/*
	Problem inputs
	n;			//input banyak angka yang akan dihitung 
	
	
	Problem outputs
	n is odd  			//bilangan genap atau genjil
	n is even 
*/

// Design
/*
	Initial algorithm
	1. meminta data input berupa angka  
	2. mengecek angka tersebut genap atau ganjil 
	3. menampilkan output berupa odd tau even
	4. mengulang kembali jika statement benar

// Implementations
/*
untuk mendapatkan input digunakan statement
for (;;) {  		//digunakan for untuk mengulang kembali program tersebut
    printf("\nEnter a number that you want to check: ");
    if (scanf("%d",&n) != 1) break;  //jika input bukan bilakan maka program akan berhenti
    if((n%2)==0)      // mengecek bilangfan itu genap
      printf("%d is even.",n);
  jika statemennya masih false maka akan memproses bilangan itu mjd ganjil
   else
      printf("%d is odd.",n);
*/
#include <stdio.h>
int main(void) {
  int n;

  for (;;) {  
    printf("\nEnter a number that you want to check: ");		//dapat diisi banyak angka (lebih dari 1)
    if (scanf("%d",&n) != 1) break;
    if((n%2)==0)      
      printf("%d is even.",n);
    else
      printf("%d is odd.",n);
  }
  return 0;
}
