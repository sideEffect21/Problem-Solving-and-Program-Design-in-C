/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/

Anda telah menghemat $500 untuk digunakan sebagai uang muka mobil. Sebelum memulai
belanja mobil Anda, Anda memutuskan untuk menulis program untuk membantu Anda mencari tahu apa
pembayaran bulanan Anda akan, mengingat harga pembelian mobil, bulanan
tingkat bunga, dan jangka waktu di mana Anda akan membayar kembali pinjaman. NS
rumus untuk menghitung pembayaran Anda adalah

P = pokok (jumlah yang Anda pinjam)
i = tingkat bunga bulanan (112 dari tingkat tahunan)
n = jumlah total pembayaran
Program Anda harus meminta pengguna untuk harga pembelian, uang muka
pembayaran, tingkat bunga tahunan, dan jumlah pembayaran (biasanya 36,
48, atau 60). Ini kemudian harus menampilkan jumlah yang dipinjam dan pembayaran bulanan-
termasuk tanda dolar dan dua tempat desimal.


/*  Problem: 
            Dibutuhkan program untuk memprediksi jumlah yang dipinjam dan pembayaran bulanan dan jumlah uang yang dipinjam, dengan memasukkan input 
	    berupa harga harga pembelian, uang muka pembayaran, tingkat bunga tahunan, dan jumlah pembayaran (biasanya 36, 48, atau 60)
    Analysis:
            Dengan menggunakan rumus yang tersedia dimana (P) adalah jumlah yang dipinjam, dan (i) tingkat bunga tahunan, (n) jumlah total pembayaran.
	    maka kita dapat menemukan pembayaran. Dibutuhkan input harga harga pembelian, uang muka pembayaran, tingkat bunga tahunan, dan jumlah pembayaran.
	    Dibutuhkan output berupa jumlah uang yang dipinjam dan pembayaran bulanan.
            
    
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
#include <math.h>

double payment(double P, double i, int n) {
  return ((i * P) / (1 - pow(1 + i, -1 * (double)n)));
}

int main() {
  double purchase_price, down_payment, annual_interest_rate;
  int total_num_of_payments;

  printf("Enter purchase price ($) > ");
  scanf("%lf", &purchase_price);

  printf("Enter the amount of down payment ($) > ");
  scanf("%lf", &down_payment);

  printf("Enter annual interest rate > ");
  scanf("%lf", &annual_interest_rate);

  printf("Enter total number of payment (usually 36, 48, or 60) > ");
  scanf("%d", &total_num_of_payments);
	
  double monthly_interest_rate = annual_interest_rate / 12;
	
  double amount_borrowed = purchase_price - down_payment;

  double monthly_payment = payment(amount_borrowed, monthly_interest_rate, total_num_of_payments);

  printf("The amount borrowed is $%.2lf\n", amount_borrowed);
  printf("And your monthly payment will be $%.2lf\n", monthly_payment);

  return 0;
}

