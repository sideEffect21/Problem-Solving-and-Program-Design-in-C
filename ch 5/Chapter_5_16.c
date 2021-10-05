/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/


// Problem
/*

Tulis program yang menggunakan metode Newton untuk mendekati akar ke-n
dari angka sampai enam tempat desimal.jika x^n = c, Mencari akar dari
persamaan kedua akan memberi n root c
*/

// Analysis
/*
untuk membuat program tberjalan maka kita harus melakukan sesuai dalam rumus yang tersedia 
	
// Data Requirements
/*
	Problem inputs
double n, c,	//input angka

	Problem outputs
double x0,x1, i, temp;	//otput yang keluar dan digunakan dalam memproses angka
	
	relevant formula
x^n = c, x^n − c = 0
*/

// Design
/*
	Initial algorithm
	1. meminta 2 data angka input
	2. menghitung sesuai rumus dalam fungsi 
	3. menghitung kira kira hasil 
	4. melakukan looping paa hasil
	5. menampilkan output 
// Implementations
/*
Digunakan fungsi untuk menyimpan rumus rumus 
double next_approx(double temp, double n, double c) 		//kira kira hasil derivative
{
	double next_approx = temp - (func(temp, n, c) / derivative(temp, n));
	return next_approx;
}

double func(double x, double n, double c)  //x^n − c 
{
	return ((pow(x, n)) - c);
}

double derivative(double x, double n) 
{
	return (x * pow(x, n - 1));
}

	
meminta input angka 
scanf("%lf", &c);
scanf("%lf", &n);

mlakukan perhitungan ssesuai formula dalam fungsi 
x0 = c / 2;
x1 = x0 - (func(x0, n, c) / derivative(x0, n));

dilakukan looping untuk menampilkan hasil
for(i = 0; i < 100; i++)
	{
		printf("\n%.6f \n", x1);
		x1 = next_approx(x1, n, c);
	}
}
	*/
#include "stdio.h"
#include "math.h"
double next_approx(double, double, double);
double func(double, double, double);
double derivative(double, double);
void main()
{
	double x0, n, c, x1, i, temp;
	printf("\nEnter c - ");
	scanf("%lf", &c);
	printf("\nEnter n - ");
	scanf("%lf", &n);
	
	x0 = c / 2;
	x1 = x0 - (func(x0, n, c) / derivative(x0, n));
	
	for(i = 0; i < 100; i++)
	{
		printf("\n%.6f \n", x1);
		x1 = next_approx(x1, n, c);
	}
}

double next_approx(double temp, double n, double c)
{
	double next_approx = temp - (func(temp, n, c) / derivative(temp, n));
	return next_approx;
}

double func(double x, double n, double c)
{
	return ((pow(x, n)) - c);
}

double derivative(double x, double n)
{
	return (x * pow(x, n - 1));
}
