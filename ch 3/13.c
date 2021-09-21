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
    2. menghitung input berupa tahun dalam fungsi populasi
    3. menghitung beda tahun dan jumlah populasi saat  itu sesuai tahun
    4. menampilkan prediksi populasi sesuai tahun yang diinput
    
   Implementation
   
   Untuk mendapat Input berupa tahun dari user digunaakan statment
   sebagai berikut:
            printf("Enter a year after 1990> ");
   		scanf("%d", &year);
    
   Untuk menghitung menghitung beda tahun dan jumlah populasi saat  itu sesuai tahun digunakan formula  
            year_difference = year - initial_year;
	    current_population = initial_population + (population_rate * year_difference);
	    agar lebih mudah maka rumus tersebut dimasukkan dalam fungsi
   Setelah itu maka ditampilkan prediksi penduduk gotham city sesuai tahun yang diinput menggunakan statment 
            printf("Predicted Gotham City population in %i (in thousands) is: %.3lf\n",
         year, population(year));

    */


#include <stdio.h>

double population(int year) {
  const double population_rate = 2.184, initial_population = 52.966;
  const int initial_year = 1990;
  double current_population;
  int year_difference;

  year_difference = year - initial_year;
  current_population = initial_population + (population_rate * year_difference);
  return current_population;
}

int main() {
  int year;
  printf("Enter a year after 1990> ");
  scanf("%d", &year);
  printf("Predicted Gotham City population in %i (in thousands) is: %.3lf\n",
         year, population(year));

  return 0;
}
