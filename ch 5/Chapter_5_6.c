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
Tulis program yang memproses file input data pada carpool yang ada
didata yang tersedia , membuat file output banyak mobil dengan penumpang yang sesuai efisiensi. 

*/

// Analysis
/*
untuk menghitung dan mencari tempat parkir yang sesuai efisiensi penumpang di masukkan input
File input dimulai dengan angka yang merupakan efisiensi penumpang minimum. Setiap carpool diwakili
dibenci oleh baris data yang berisi tiga angka: jumlah orang di
carpool, total jarak perjalanan per lima hari seminggu, dan jumlah
liter bensin yang dikonsumsi dalam seminggu perjalanan. File data diakhiri dengan
garis nol. dengan format yang sesuai 

// Data Requirements
/*
	Problem inputs
	passengers, distance, gasoline	
	
	Problem outputs

	efficiency subs		
	
	relevant formula 
	efficiency = (passengers * distance) / gasoline;
		subs = passengers * distance * SUBS;
*/

// Design
/*
	Initial algorithm
	1. meminta input banyak penumpang, bahan bakar yang dipakai yang jarak.
	2. menghitung dan mengecek efisiensi dan penumpang
	3. data akan dimasukkan dalam fungsi
	4. menampilkan tempat parkir yang sesuai
// Implementations
/*
melakukan perulangan untuk mencari mobil yang sesuai tempat parkir dari data yang di berikan 

	while((input_status = scanf("%d%lf%lf", &passengers, &distance, &gasoline)) != EOF)
	{
		if(passengers == 0)		// jika penumpang 0 berhenti
			break;
		efficiency = (passengers * distance) / gasoline;
		subs = passengers * distance * SUBS;		//mencari subsidi 
		print_chart(passengers, efficiency, gasoline, distance, subs);
	}
	
  	kemudian data tersebut ditampilkan 
	
	print_chart(int passengers, double efficiency, double gasoline, double distance, double subs)
{
	printf("\n%d %15c %.2f %18c %.2f %20c %.2f %20c %.2f", passengers, ' ', distance, ' ', gasoline, ' ', efficiency, ' ', subs);
}
	

	*/
#include "stdio.h"
#define SUBS 0.08
void print_chart(int, double, double, double, double);
void main()
{
	double efficiency, gasoline, distance, subs;
	int passengers, input_status;
	
	printf("%5ctempat parkir minimal efisiensi kendaraan dalam 25km/jam", ' ');
	
	printf("\nPenumpang %3c perjalanan mingguan (km) %3c gasoline yang dikonsumsi(L) %3c Efficsiensi(pass km/L) %3c subsidi mingguan($)", ' ', ' ', ' ', ' ');
	
	while((input_status = scanf("%d%lf%lf", &passengers, &distance, &gasoline)) != EOF)
	{
		if(passengers == 0)
			break;
		efficiency = (passengers * distance) / gasoline;
		subs = passengers * distance * SUBS;
		print_chart(passengers, efficiency, gasoline, distance, subs);
	}
}

void print_chart(int passengers, double efficiency, double gasoline, double distance, double subs)
{
	printf("\n%d %15c %.2f %18c %.2f %20c %.2f %20c %.2f", passengers, ' ', distance, ' ', gasoline, ' ', efficiency, ' ', subs);
}
