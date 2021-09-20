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
P(t) =52.966 + 2.184t dimana t adalah tahun setelah tahun 1990, dan P adalah populasi dalam ribuan. Jadi, P(0) 
ME WAKILI jumlah penduduk pada tahun 1990, yaitu 52.966 ribu orang. Menulis sebuah
program yang mendefinisikan fungsi bernama populasi yang memprediksi Gotham's
populasi pada tahun yang diberikan sebagai argumen masukan. Buatlah program yang
memanggil fungsi dan berinteraksi dengan pengguna sebagai berikut:
Masukkan tahun setelah 1990> 2015
Prediksi penduduk Kota Gotham untuk tahun 2015 (dalam ribuan):
107.566


/*  Problem: 
            Dibutuhkan program untuk memprediksi jumlah populasi gotham pada tahun setelah 1990 dengan fungsi memodelkan fungsi populasi Gotham sebagai
	    P(t) =52.966 + 2.184t dimana t adalah tahun setelah tahun 1990, dan P adalah populasi dalam ribuan. 
	    P() mewakili jumlah penduduk pada tahun 1990 yaitu52.966.
    Analysis:
            Dengan menggunakan rumus yang tersedia P(t) =52.966 + 2.184t dimana t adalah tahun setelah tahun 1990, 
	    dan P adalah populasi dalam ribuan. P() mewakili jumlah penduduk pada tahun 1990 yaitu
	    52.966. maka kita dapat memprediksi populasi setelah tahun 1990. diperlukan input berupa tahun yang akan diprediksi populasinya. m
	    untuk mengetahui perbedaan tahun dan menghitung populasi yang ada.
            
    
    Data Requirement:
 		
            const double population_rate = 2.184;		//konstanta tingkat populasi
	    const initial_population = 52.966;			//konstanta populasi yang ada tahun 1990
	    int initial_year = 1990;				//konnstanta tahun 1990
            double current_population; 				//populasi saat ini
	    int year_difference;				//perbedaan tahun
	    
	    
            Problem Inputs:
	    int year;						//tahun yang akan dihitung jumlah populasinya
            
            Problem Outputs:
	    population(year)					//populasi sesuai tahun tersebut
	    
            Relevant Formulas:
            year_difference = year - initial_year;		//perbedaan tahun antara 1990
	    current_population = initial_population + (population_rate * year_difference);		//menghitung populasi saat ini berdasar tahun
	    

	
*/
/*  Initial Algoritm:
    1. menampilkan apa yang harus diinput  populasi setelah 1990
    2. 
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
