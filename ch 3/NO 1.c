/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/


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
    2. memasukkan input berupa harga pembelian, uang muka pembayaran, tingkat bunga tahunan, dan jumlah pembayaran.
    3. menghitung bunga bulanan
    4. menghitung jumlah uang yang dipinjam
    5. menghitung pembayaran perbulan
    6. menampilkan jumlah pinjaman dan pembayaran perbulan
   
    
 Implementation
   
   Untuk menggunakan fungsi matematika pow() maka digunakan fungsi <math.h>
   Membuat fungsi tambahan untuk menggunkan rumus payment(double P, double i, int n) {
   return ((i * P) / (1 - pow(1 + i, -1 * (double)n)));
   
   didalam fungsi utama 
   Untuk mendapat harga pembelian, uang muka pembayaran, tingkat bunga tahunan, dan jumlah pembayaran,maka perlu statement sebagai berikut:
  
  printf("Enter purchase price ($) > ");
  scanf("%lf", &purchase_price);

  printf("Enter the amount of down payment ($) > ");
  scanf("%lf", &down_payment);

  printf("Enter annual interest rate > ");
  scanf("%lf", &annual_interest_rate);

  printf("Enter total number of payment (usually 36, 48, or 60) > ");
  scanf("%d", &total_num_of_payments);
    
Untuk menghitung bunga bulanan digunakan statment:
            double monthly_interest_rate = annual_interest_rate / 12;
Untuk menghitung jumlah uang yang dipinjam digunakan statment:
   	    amount_borrowed = purchase_price - down_payment
Untuk menghitung jpembayaran perbulan digunakan statment:
   	    double monthly_payment = payment(amount_borrowed, monthly_interest_rate, total_num_of_payments);
Untuk menampilkan jumlah pinjaman dan pembayaran perbulan digunakan statement:
        printf("The amount borrowed is $%.2lf\n", amount_borrowed);
  	printf("And your monthly payment will be $%.2lf\n", monthly_payment);;
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

