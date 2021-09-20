/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/
Setelah mempelajari pertumbuhan penduduk Kota Gotham dalam dekade terakhir tahun
Abad ke-20, kita telah memodelkan fungsi populasi Gotham sebagai
P(t) =52.966 + 2.184t dimana t adalah tahun setelah tahun 1990, dan P adalah populasi dalam ribuan. Jadi, P(0) rep-
membenci jumlah penduduk pada tahun 1990, yaitu 52.966 ribu orang. Menulis sebuah
program yang mendefinisikan fungsi bernama populasi yang memprediksi Gotham's
populasi pada tahun yang diberikan sebagai argumen masukan. Buatlah program yang
memanggil fungsi dan berinteraksi dengan pengguna sebagai berikut:
Masukkan tahun setelah 1990> 2015
Prediksi penduduk Kota Gotham untuk tahun 2015 (dalam ribuan):
107.566


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

// 1. create a function called 'population()' that requires year as its argument
double population(int year) {
  // 2. create some constant for population rate, initial population,
  //    and initial year
  const double population_rate = 2.184, initial_population = 52.966;
  const int initial_year = 1990;
  double current_population;
  int year_difference;

  // 3. substract the year by initial year (1990) and use the result in the
  //    formula
  year_difference = year - initial_year;
  current_population = initial_population + (population_rate * year_difference);

  // 5. return the result
  return current_population;
}

// 6. now create a main function that prompts user for year after 1990
int main() {
  int year;

  printf("Enter a year after 1990> ");
  scanf("%d", &year);

  // 7. call the population() function with the entered year
  // 8. finally, print out the result
  printf("Predicted Gotham City population in %i (in thousands) is: %.3lf\n",
         year, population(year));

  return 0;
}
