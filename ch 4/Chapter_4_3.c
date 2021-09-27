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
program C yang mendemonstrasikan evaluasi hubung singkat C dari
&& dan || operator. 
*/

// Analysis
/*
	Untuk mendemonstrasikan evaluasi hubung singkat C dari && dan || operator.
	Input berupa char "T" DAN "F"sesuai program jika pengguna menginput nilai T maka return 1
	jika dinput nilai F maka return 0 di fungsi int fun1() Fungsi utama harus mencakup dua pernyataan kondisional: satu yang menampilkan
	“Test of && complete” jika && dipanggil fungsi ke fun1 dan funTesting ||Uji || selesai” jika
	|| panggilan fungsi ke fun1 dan fun2 benar karena adanya return 1. Sebelum syarat pertama
	pernyataan, tampilkan "Test of &&," dan sebelum input kedua, tampilkan "Testing ||."
	

// Data Requirements
/*
	Problem inputs
	char input;			//input karakter "T" dan "F"
	
	
	Problem outputs
	(fun1() || fun2()) 		//kondisi untuk mengecek nilai benear atau salah
	(fun1() && fun2()
*/

// Design
/*
	Initial algorithm
	1. meminta data input berupa char T atau F 
	2. mengecek kedua input, menampilkan maasing masing statementnya 
	3. mengecek bhwa kedua input tersebut menggunakan fungsi && ||
	4. mengeluarkan output fun2 executed,Test of && complete, Test of || complete

// Implementations
/*
	Pertama, kita perlu meminta input berupa T atau F dengan statement fungsi fun1()
 	 scanf(" %c", &input); 
	Setelah itu, menggunakan kondisi jika input == T maka langsung di return 1
	jika bukan T maka return 0
	if (input == 'T') {
  	  return 1;
  	} else if (input == 'F') {
	    return 0;
 	 }
 	 return 0;
	}

	Untuk fun2() 
	int fun2() {
  	printf("fun2 executed\n");
  	return 1;
	
Pada fungsi utama akan di cek && menampilkan kondisi &&
printf("Testing &&\n");
  if (fun1() && fun2()) {
    printf("Test of && complete\n");
  }
Dan untuk || menggunakan
printf("Testing ||\n");
  if (fun1() || fun2()) {
    printf("Test of || complete\n");
  }

*/
#include <stdio.h>

int fun1() {
  char input;

  scanf(" %c", &input);

  if (input == 'T') {
    return 1;
  } else if (input == 'F') {
    return 0;
  }

  return 0;
}

int fun2() {
  printf("fun2 executed\n");
  return 1;
}

int main() {
  printf("Testing &&\n");
  if (fun1() && fun2()) {
    printf("Test of && complete\n");
  }

  printf("Testing ||\n");
  if (fun1() || fun2()) {
    printf("Test of || complete\n");
  }

  return 0;
}
