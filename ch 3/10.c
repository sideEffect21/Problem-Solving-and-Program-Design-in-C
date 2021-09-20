/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/

Tulis program untuk mengambil kedalaman (dalam kilometer) di dalam bumi sebagai data input;
menghitung dan menampilkan suhu pada kedalaman ini dalam derajat Celcius dan
derajat Fahrenheit. Rumus yang relevan adalah Celsius = 10 (kedalaman) + 20 (Suhu Celcius pada kedalaman dalam km) Fahrenheit = 1,8 (Celcius) + 32 Sertakan dua fungsi dalam program Anda. Fungsi celsius_at_depth seharusnya
menghitung dan mengembalikan suhu Celcius pada kedalaman yang diukur dalam kilometer.
Fungsi fahrenheit harus mengubah suhu Celcius ke Fahrenheit.


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

// 1. create function celcius that requires depth as its argument
// 2. calculate the temperature using the formula and return
//    the result
double celcius_at_depth(double depth) {
  return (10 * depth) + 20;
}

// 3. create fahrenheit formula that purpose is to convert the
//    celcius temperature into fahrenheit, so it requires celcius
//    as argument
double fahrenheit(double celcius_degree) {
  return (1.8 * celcius_degree) + 32;
}

// 4. create a main function and prompt user to input depth in km
int main() {
  double depth, celcius_degree;

  printf("enter depth (km) > ");
  scanf("%lf", &depth);

  // 5. call celcius and fahrenheit function and print the result out
  celcius_degree = celcius_at_depth(depth);

  printf("it's %.2lf°C or %.2lf°F on the depth of %.2lfkm\n",
      celcius_degree, fahrenheit(celcius_degree), depth);

  return 0;
}
