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
	pertama, perlu di ketahui 
*/

// Data Requirements
/*
	Problem inputs
	int weekday			//total penggunaan Chatflow Wireless saat weekday
	int night;			//total penggunaan Chatflow Wireless saat jam malam
	int weekend;		//total penggunaan Chatflow Wireless saat weekend
	
	Problem constant
	#define TAXES 0.0525 //Pajak
	
	Problem outputs
	double bill			//biaya setelah dan sebelum pajak
	double avg				//rata2 biaya per menit
*/

// Design
/*
	Initial algorithm
	1. meminta data penggunaan telepon pada hari biasa, jam malam, dan akhir pekan
	2. menghitung total biaya sebelum terkena pajak
	3. menghitung rata-rata biaya per menit
	4. menghitung total biaya setelah terkena pajak
	
	Refinement
	2.1 Jika penggunaan pada hari biasa kurang dari 600 menit, 
	    total biaya = $39.99
	2.2 Jika penggunaan pada hari biasa lebih dari 600 menit,
		total biaya = 39.99 + (menit pada hari biasa - 600) * 0.4
*/

// Implementations
/*
	Pertama, kita perlu meminta data penggunaan telepon dengan memberi statement
	printf("Enter the number of weekday minute>> ");
	scanf("%d", &weekday);
	printf("Enter the number of night minute>> ");
	scanf("%d", &night);
	printf("Enter the number of weekend minute>> ");
	scanf("%d", &weekend);
	
	Setelah itu, total biaya dan rata-rata per menit sebelum terkena pajak bisa
	didapatkan dengan
	if(weekday <= 600)
		bill = 39.99;
	else if (weekday > 600)
		bill = 39.99 + (weekday - 600) * 0.4;
	avg = bill / (weekday + night + weekend);

	Karena terdapat pajak sebesar 5.25%, total biaya perlu diolah kembali dengan
	menggunakan statement sebagai berikut :
	bill = bill * (1 - TAXES);
	
	Pada bagian terakhir, kita tinggal menampilkan data-data yang telah diperoleh
	dengan memberi statement
	printf("Pretax bill : $%lf \nAverage cost : %lf per minute", bill, avg);
	printf("\nTaxes : 0.0525 \nTotal bill : %lf", bill);
*/
#include "stdio.h"
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
