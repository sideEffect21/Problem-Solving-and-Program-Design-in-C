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
            Program mampu menghitung dan menampilkan suhu pada kedalaman ini dalam derajat Celcius dan 
	    derajat Fahrenheit berdasarkan kedalaman bumi (km)
    Analysis:
            untuk mengitung derajat celcius dan fahrenheit diperlukan data kedalam bumi. Setelah mendapatkan data
	    kedalaman bumi maka, dibutukan vormula untuk mengkonversikan berapa derajat suhunya. dibutuhkan dua 
	    fungsi masing masing derajat celcius dan fahrenheit. dan harus menampilkan dua hasil tersebut di output
            
    
    Data Requirement:
    
  double celcius_at_depth(double depth) 		//fungsi untuk derajat celcius
  
  double fahrenheit(double celcius_degree) 		//fungsi untuk derajat fahrenheit
  
            Problem Inputs:		
            double depth 				//jarak kedalaman bumi (km)
            
            Problem Outputs:
	    double celcius_degree;			//derajat celcius dari hasil konvert
	
	    
            Relevant Formulas:
            return (10 * depth) + 20;			//untuk menghitung derajat celcius sesuai kedalaman
	    return (1.8 * celcius_degree) + 32;		//konversi dari celsius ke fahrenheit
	    

*/
/*  Initial Algoritm:
    1. menampilkan apa yang harus diinput  
    2. memasukkan jarak kedalaman bumi (km)
    3. menghitung derajat celsius menggunakan kedalaman
    4. mengkonversi derajat celsius dengan fahrenheit
    5. menampilkan hasil derajat celcius dan fahrenheit
    
   Implementation
   
dibentuk dua fungsi untuk formula
  	 double celcius_at_depth(double depth) {
	 return (10 * depth) + 20;}

	 double fahrenheit(double celcius_degree) {
  	 return (1.8 * celcius_degree) + 32;}
   
   Untuk mendapat data kedalaman bumi di gunakan statment 
             printf("enter depth (km) > ");
 	scanf("%lf", &depth);

   Untuk mendapatkan informasi derajat celcius sesuai kedalaman di gunakan 
     celcius_degree = celcius_at_depth(depth);
   Untuk menampikan output berupa derajat celcius dan fahrenheit digunakan statment
   	 	printf("it's %.2lf°C or %.2lf°F on the depth of %.2lfkm\n",
		celcius_degree, fahrenheit(celcius_degree), depth);

    */

#include <stdio.h>

double celcius_at_depth(double depth) {
  return (10 * depth) + 20;
}

double fahrenheit(double celcius_degree) {
  return (1.8 * celcius_degree) + 32;
}

int main() {
  double depth, celcius_degree;

  printf("enter depth (km) > ");
  scanf("%lf", &depth);

  celcius_degree = celcius_at_depth(depth);

  printf("it's %.2lf°C or %.2lf°F on the depth of %.2lfkm\n",
      celcius_degree, fahrenheit(celcius_degree), depth);

  return 0;
}
