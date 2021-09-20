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
            Dibutuhkan program untuk menghitung total luas permukaan kerucut melingkar kanan 
            dan menampilkannya kembali kepada pengguna.
    Analysis:
            Untuk menghitung total luas permukaan kerucut melingkar maka diperlukan formula persamaan lingkaran
	    dengan menggunakan phi di dalamnya. input berupa jari-jari alas lingkaran,
	    kerucut dan tinggi kemiringan kerucut.

    Data Requirement:
    	
	PI 3.14159265					//konstanta PHI
	double surface_area(double slant_height, double radius) 		//membuat fungsi tambahan sebagai tempat untuk rumus
	double area;
            
	    Problem Inputs:		
	    double slant_height;			//tinggi kemiringan kerucut
	    double radius;				// jari jari alas kerucut
	   
            Problem Outputs:
	    double surface;				//luas permukaan kerucut
	    
            Relevant Formulas:
            area = PI * radius * (radius + slant_height);  //rumus untuk menghitung luas kerucut
*/
/*  Initial Algoritm:
    1. menampilkan apa yang harus diinput  
    2. memasukkan input berupa erupa jari-jari alas lingkaran kerucut dan tinggi kemiringan kerucut.
    3. menghitung luas permukaan kerucut
    4. menampilkan hasil 
   
    
   Implementation
   
   Untuk mendapat data jari-jari alas lingkaran kerucut dan tinggi kemiringan kerucut.
   sebagai berikut:
  	printf("Masukkan jari jari alas lingkaran kerucut (cm) = ");
  	scanf("%lf", &radius);

  	printf("masukkan tinggi kemiringan (cm) = ");
  	scanf("%lf", &slant_height);
    
   Untuk menghitung luas permukaan kerucut menggunakan formula digunakan statment 
             area = PI * radius * (radius + slant_height);
   Setelah untuk menampilkan  luas permukaan kerucut digunakan statment 
            	surface = surface_area(slant_height, radius);
		printf("luas permukaan kerucut adalah: %.2lf cm²\n", surface);
    */
#include <stdio.h>
#include <stdio.h>

#define PI 3.14159265

double surface_area(double slant_height, double radius) {
  double area;
  area = PI * radius * (radius + slant_height);

  return area;
}

int main() {
  double slant_height, radius, surface;

  printf("Masukkan jari jari alas lingkaran kerucut (cm) = ");
  scanf("%lf", &radius);

  printf("masukkan tinggi kemiringan (cm) = ");
  scanf("%lf", &slant_height);

  surface = surface_area(slant_height, radius);
	printf("luas permukaan kerucut adalah: %.2lf cm²\n", surface);

  return 0;
}
