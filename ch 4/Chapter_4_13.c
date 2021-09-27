/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/

/* Tanggal
	Pembuatan : 27 September 2021
*/

// Problem
/*
Menulis sebuah program yang meminta pengguna untuk mengamati titik didih suatu zat
dalam °C dan mengidentifikasi zat jika titik didih yang diamati berada dalam 5% dari
titik didih yang diharapkan. Jika input data lebih dari 5% lebih tinggi atau lebih rendah
daripada titik didih mana pun dalam tabel, program akan menampilkan pesan Zat tidak diketahui
*/

// Analysis
/*
pertama, perlu di ketahui tentang titik didik subtansi dalm tabel (derajat c)
Water 100
Mercury 357
Copper 1187
Silver 2193
Gold 2660

jika data yang diinput berada dalam rentang 5% dari titik didih zat maka akan menampilkan zat tersebut,
namun jika lebih rendah dan lebih tinggi dari titik didih zat tersebut maka akan dikeluarkan output tidak 
diketahui.

*/

// Data Requirements
/*
	Problem inputs
	double boiling_point			//dat titik didih 
	
	Problem constant
	Water 100
	Mercury 357
	Copper 1187
	Silver 2193
	Gold 2660
	
	Problem outputs
	
	int within_x_percent(double ref, double data, double x) //Menggunakan fungsi tersebut dengn sttement if else untuk mengeluarkan output
*/

// Design
/*
	Initial algorithm
	1. meminta data titik didih yang di observsi
	2. menghitung berpa persentase 
	3. mengecek apakah data tersebut berada dlam jangkauan konstanta benar atu slaah
	4. mengeluarkan sttement sesuai kondisi
	
*/

// Implementations
/*
	Pertama, kita perlu meminta data berapa derajat titik didih yang diobservasi
	printf("\n Enter observed boiling point of a substance - ");
	scanf("%lf", &boiling_point);
	
	Setelah itu, kita perlu mendefinikan fungsi untuk sebagai parameter referensi 
	nilai referensi, data nilai data, dan nilai persentase.
	int within_x_percent(double ref, double data, double x)
	if(data >= ((ref - ((x/100) * ref))) && (data <= (ref + ((x/100) * ref))))
		return 1;
		
	//jika data berada dalam x% dari ref—yaitu, 
	(ref – x%* ref) data (ref + x% * ref). Kalau tidak, within_x_percent akan kembali nol, yang berarti salah. 
	
	//kemudian untuk mengecek benar  bahwa titik didih tersebut merupakan suatu zat maka di gunkan statement kondisi,
	menampikaan zt jika benar.
	sebagai berikut 
	
	if((within_x_percent(100, boiling_point, 5) == 1))
	{
		printf("\n Water\n");
	}
	else if((within_x_percent(357, boiling_point, 5) == 1))
	{
		printf("\n Mercury\n");
	}
	else if((within_x_percent(1187, boiling_point, 5) == 1))
	{
		printf("\n Copper\n");
	}
	else if((within_x_percent(2193, boiling_point, 5) == 1))
	{
		printf("\n Silver\n");
	}
	else if((within_x_percent(2660, boiling_point, 5) == 1))
	{
		printf("\n Gold\n");
	}
	
	Untuk menyatakan bhw zat terzebut tidak memenuhi katergori titik didih zat dalam tabel
	digunakan statemen 
	else
		printf("\n Substance unknown\n");
		}
		
*/
#include <stdio.h>
int within_x_percent(double, double, double);
void main()
{
	double boiling_point;
	printf("\n Enter observed boiling point of a substance - ");
	scanf("%lf", &boiling_point);
	
	if((within_x_percent(100, boiling_point, 5) == 1))
	{
		printf("\n Water\n");
	}
	else if((within_x_percent(357, boiling_point, 5) == 1))
	{
		printf("\n Mercury\n");
	}
	else if((within_x_percent(1187, boiling_point, 5) == 1))
	{
		printf("\n Copper\n");
	}
	else if((within_x_percent(2193, boiling_point, 5) == 1))
	{
		printf("\n Silver\n");
	}
	else if((within_x_percent(2660, boiling_point, 5) == 1))
	{
		printf("\n Gold\n");
	}
	else
		printf("\n Substance unknown\n");
}

int within_x_percent(double ref, double data, double x)
{
	if(data >= ((ref - ((x/100) * ref))) && (data <= (ref + ((x/100) * ref))))
		return 1;
	return 0;
}
