/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/

/* Tanggal:
        	Pembuatan: 17 oktober 2021
        	Modifikasi: 17 oktober 2021
*/

// Problem : Bagaimana membuat program interaktif dan memanggil fungsi untuk menghitung dan mengembalikan nilai? Program juga 
// 			 harus memanggil fungsi secara berulang kali dan menampilkan tabel menunjukkan gaya untuk bentuk input untuk rentang 
//           kecepatan dari 0 m/s sampai 40 m/s dengan kenaikan 5 m/s.

/* Analisis :
 * Memasukkan pengertian rumus yang ada pada soal sebagai berikut :
     1. F adalah gaya (dalam newton)
     2. CD adalah koefisien hambatan 
     3. A adalah luas proyeksi kendaraan yang tegak lurus terhadap vektor kecepatan (dalam m2)
     4. p (rho) adalah kerapatan gas atau cairan yang dilalui benda (kg/m3)
     5. V adalah kecepatan tubuh benda
     6. RHD adalah udara di permukaan laut (dimana = 1,23 kg/m3)
 * Asumsikan kendaraan penumpang yang ramping bergerak di udara di permukaan laut (dimana = 1,23 kg/m3).  
 * Untuk mobil, kisarannya adalah dari sekitar 0,2 (untuk kendaraan yang sangat ramping) hingga sekitar 0,5
*/

/* Data Requirements :
	Problem Inputs :
	double A                              // luas proyeksi kendaraan yang tegak lurus terhadap vektor kecepatan
	double CD	     					  // koefisien hambatan
	Define RHD                            // Kerapatan udara di permukaan laut
	
	Problem Outputs :
	Double V                              // kecepatan tubuh benda
	Double F                              // gaya (dalam newton) / Force (paksaan)
	Judul
	
	Relevant formulas :
	F = 1/2 * CD * A * p(rho) * V^2
*/

/* Design :
 * Memasukkan luas proyeksi kendaraan yang tegak lurus terhadap vektor kecepatan
 * Mmeasukkan besar koefisien hambatan 
 * Men define RHD yang mempunyai nilai 1.23
 * Mengitung relevant formula 
*/

/* Implementation :

#include <stdio.h>
#include <math.h>
#define p 1.3

void Rumus_soal(double*, double, double, double);
int main(void){
	int V = 0; //Menggunakan variabel int karena syarat dari pow nantinya
	double A, F, CD; // Inisialisasi variabel yang akan menjadi sebuah pecahan
	
	printf("Masukkan Luas proyeksi > "); // Perintah Memasukkan luas proyeksi 
	scanf("%lf", &A); // Memasukkan luas proyeksi 
	
	printf("Masukkan koefisien hambatan yang terjadi > "); // Perintah Memasukkan Koefisien hambatan 
	scanf("%lf", &CD); // Memasukkan koefisien gesekan
	
	printf("\n\nKecepatan %7c Gaya yang terjadi(N))", ' '); // Mengeluarkan Kepala pada tabel dengan bantuan ' ' 
	
	while(V <= 40){
		Rumus_soal(&F, CD, A, V); // Menggunakan function yang didalamnya terdapat &F yaitu menunjukkan alamat yang berasal dari F itu sendiri
		printf("\n %d m/s %14c %.2f N", V, ' ', F); // Mengeluarkan hasil dari operasi Rumus_soal 
		V += 5; // V diperlakukan kelipatan 5 sesuai dengan perintah soal
	}
	printf("\n"); // Membuat newline
	return 0; // Me return fungsi diata karena menggunakan int main
}

void Rumus_soal(double *F, double CD, double A, double V)
{
	*F = 0.5 * CD * A * p * pow(V, 2); // Rumus yang ada pada soal
}
*/
 

#include <stdio.h>
#include <math.h>
#define p 1.3

void Rumus_soal(double*, double, double, double);
int main(void){
	int V = 0; //Menggunakan variabel int karena syarat dari pow nantinya
	double A, F, CD; // Inisialisasi variabel yang akan menjadi sebuah pecahan
	
	printf("Masukkan Luas proyeksi > "); // Perintah Memasukkan luas proyeksi 
	scanf("%lf", &A); // Memasukkan luas proyeksi 
	
	printf("Masukkan koefisien hambatan yang terjadi > "); // Perintah Memasukkan Koefisien hambatan 
	scanf("%lf", &CD); // Memasukkan koefisien gesekan
	
	printf("\n\nKecepatan %7c Gaya yang terjadi(N))", ' '); // Mengeluarkan Kepala pada tabel dengan bantuan ' ' 
	
	while(V <= 40){
		Rumus_soal(&F, CD, A, V); // Menggunakan function yang didalamnya terdapat &F yaitu menunjukkan alamat yang berasal dari F itu sendiri
		printf("\n %d m/s %14c %.2f N", V, ' ', F); // Mengeluarkan hasil dari operasi Rumus_soal 
		V += 5; // V diperlakukan kelipatan 5 sesuai dengan perintah soal
	}
	printf("\n"); // Membuat newline
	return 0; // Me return fungsi diata karena menggunakan int main
}

void Rumus_soal(double *F, double CD, double A, double V)
{
	*F = 0.5 * CD * A * p * pow(V, 2); // Rumus yang ada pada soal
}

/* Outputs :
Masukkan Luas proyeksi > 5
Masukkan koefisien hambatan yang terjadi > 12


Kecepatan         Gaya yang terjadi(N))
 0 m/s                   0.00 N
 5 m/s                  975.00 N
 10 m/s                3900.00 N
 15 m/s                8775.00 N
 20 m/s                15600.00 N
 25 m/s                24375.00 N
 30 m/s                35100.00 N
 35 m/s                47775.00 N
 40 m/s                62400.00 N
*/ 


 	
	
	
	
 	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
