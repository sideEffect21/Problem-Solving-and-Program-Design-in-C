/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/

Tulis program yang meminta pengguna untuk memasukkan jari-jari alas lingkaran
kerucut dan tinggi kemiringan kerucut. Program harus menghitung total
luas permukaan kerucut melingkar kanan dan menampilkannya kembali kepada pengguna. (Petunjuk: p akan
digunakan dalam persamaan untuk menghitung luas permukaan total dan karenanya, Anda dapat:
harus menggunakan nilai yang sesuai untuk itu.
/*  Problem: 
            Dibutuhkan program untuk menghitung total luas permukaan kerucut melingkar 
            dan menampilkannya kembali kepada pengguna.
    Analysis:
            Untuk menghitung total luas permukaan kerucut melingkar maka diperlukan

    Data Requirement:
    
            Problem Inputs:		
            int total_num_of_payments	// jumlah pembayaran
	    double purchase_price	// harga pembelian
	    double down_payment		// uang muka
	    double annual_interest_rate		// bunga tahunan
	    double principle
	 
            
            Problem Outputs:
	    
	    double amount_borrowed	// uang yang dipinjam
	    double monthly_payment       // pembayaran bulanan
	    
            Relevant Formulas:
            payment(double P, double i, int n) {			//fungsi dari rumus untuk menghitung pembayaran
	    return ((i * P) / (1 - pow(1 + i, -1 * (double)n))););
	    
	    monthly_interest_rate = annual_interest_rate / 12;  //  bunga bulanan
	    amount_borrowed = purchase_price - down_payment;   // menghitung uang yang dipinjam
	
*/
/*  Initial Algoritm:
    1. menampilkan apa yang harus diinput  
    2. memasukkan input berupa harga harga pembelian, uang muka pembayaran, tingkat bunga tahunan, dan jumlah pembayaran.
    3. menghitung bunga bulanan
    4. menghitung jumlah uanng yang dipinjam
    5. menghitung pembayaran perbulan
   
    
   Implementation
   
   Untuk mendapat data banyak siswa yang terdaftar, maka perlu Input dari user
   sebagai berikut:
            printf("Enter the number of students enrolled: ");
            scanf("%d", &peserta_terdaftar);
    
   Untuk menghitung bagian yang diperlukan dan jumlah siswa yang tersisa digunakan statment 
            bagian_diperlukan = peserta_terdaftar/ SISWA_TIAP_BAGIAN ;
            siswa_yang_tersisa = peserta_terdaftar % SISWA_TIAP_BAGIAN ;
   Setelah itu maka ditampilkan jumlah siswa yang terdaftar, bagian yang diperlukan, dan jumlah siswa yang tersisa:
            printf("Dengan %d Siswa terdaftar, Bagian yang diperlukan: %d\nSiswa yang tersisa: %d\n",
            peserta_terdaftar ,bagian_diperlukan, siswa_yang_tersisa);
    */
#include <stdio.h>
#include <stdio.h>

// 1. define pi as it's a constant
#define PI 3.14159265

// 2. create a function named surface_area() the takes slant_height and
//    radius of the base as the arguments
double surface_area(double slant_height, double radius) {
  double area;

  // 3. plug all the arguments into the mentioned formula and return the result
  area = PI * radius * (radius + slant_height);

  return area;
}

// 4. create a main function that prompts user to enter slant height and
//    radius
int main() {
  double slant_height, radius, surface;

  printf("enter radius of a cone's circular base (cm) => ");
  scanf("%lf", &radius);

  printf("enter slant height of a cone (cm) => ");
  scanf("%lf", &slant_height);

  // 5. call the surface_area() with the entered values and print
  //    the result out
  surface = surface_area(slant_height, radius);

  printf("surface area of the cone is: %.2lf cm²\n", surface);

  return 0;
}
