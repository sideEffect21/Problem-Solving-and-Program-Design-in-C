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
Klub Kesadaran Lingkungan BigCorp International mengusulkan
bahwa perusahaan mensubsidi $0,08 per penumpang-kilometer perjalanan
biaya karyawan yang membentuk carpools yang memenuhi minimum yang ditentukan
efisiensi pembangkit. Efisiensi penumpang P (dalam penumpang-kilometer per liter) adalah
didefinisikan sebagai
P 5ns
aku
 di mana n adalah jumlah penumpang, s adalah jarak yang ditempuh dalam kilometer,
dan l adalah jumlah liter bensin yang digunakan. Tulis program yang memproses file input data pada carpool yang ada
(carpool.txt), membuat file output effic.txt yang berisi tabel semua
carpools yang memenuhi minimum efisiensi penumpang. File input dimulai
dengan angka yang merupakan efisiensi penumpang minimum. Setiap carpool diwakili
dibenci oleh baris data yang berisi tiga angka: jumlah orang di
carpool, total jarak perjalanan per lima hari seminggu, dan jumlah
liter bensin yang dikonsumsi dalam seminggu perjalanan. File data diakhiri dengan
garis nol. Tulis hasil Anda dengan format ini:

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
#define SUBS 0.08
void print_chart(int, double, double, double, double);
void main()
{
	double efficiency, gasoline, distance, subs;
	int passengers, input_status;
	
	printf("%5cCARPOOLS MEETING MINIMUM PASSENGER EFFICIENCY OF 25 PASSENGER KM/L", ' ');
	
	printf("\nPassengers %3c Weekly Commute (km) %3c Gasoline Consumption(L) %3c Efficiency (pass km/L) %3c Weekly Subsidy($)", ' ', ' ', ' ', ' ');
	
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
