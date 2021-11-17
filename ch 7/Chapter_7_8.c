/*	
	Ditulis oleh:
	Nrp: 5025211082
	Nama: Charles
	
	Nrp: 5025211112
	Nama: Java Kanaya Prada
	
	Nrp:  5025211005
	Nama: Muhammad Daffa Harits
*/
 
/* Tanggal:
        	Pembuatan:	31 Oktober 2021
        	Modifikasi : 2 November 2021
*/ 

/* 	Problem:
	Diminta untuk menampilkan tabel yang berisi jumlah hujan yang terjadi perbulan, dan juga
	menampilkan rata-rata hujan dan total hujan. Tabel harus menampilkan hujan tahun lalu dan
	tahun ini.
*/
 	
/* 	Analysis: 
	Kita dapat meminta user untuk memasukkan hujan selama 12 bulan pada tahun lalu dan tahun ini.
	Kemudian kita dapat membuat function yang bisa mengukur rata-rata hujan dan jumlah hujan. Terakhir kita
	hanya perlu menampilkan tabel yang berisi input dari user, dan rata-rata hujan serta total hujan.
*/

/* Data Requirements :

	Problem Inputs : 
	double this_year[12]		//untuk mengisi data hujan tahun ini
	double last_year[12]		//untuk mengisi data hujan tahun lalu
	
	Problem Outputs :
	display_table(const double arr_1[], const double arr_2[], int arr_size)		//untuk menampilkan tabel dan lainnya

	Program Variables :
	double sum					//sebagai variabel sementara dalam function
	int i						//sebagai pengontrol loop
	
	Problem Functions :
	double sum_arr(const double arr[], int arr_size)	//menghitung total hujan
	double avg_arr(const double arr[], int arr_size)	//menghitung rata-rata hujan
*/

/*DESIGN
/*
	Initial Algorithm:
	1. Meminta user untuk memasukan input berupa data hujan tahun lalu dan tahun ini
	2. Menghitung jumlah dan rata-rata hujan untuk masing-masing tahunnya
	3. Menampilkan tabel, jumlah, dan rata-rata hujan tahun lalu dan tahun ini
*/

/*IMPLEMENTATION
/*
	Pertama kita membuat fungsi untuk menghitung jumlah hujan
	double sum_arr(const double arr[], int arr_size)
	{
		double sum = 0;
		int i;
		for (i =  0; i < arr_size; i++)
		sum += arr[i];
		return sum;
	}

	Setelah itu kita buat lagi function untuk menghitung rata-rata hujan
	double avg_arr(const double arr[], int arr_size)
	{
		double sum = sum_arr(arr, arr_size) ;
		return sum / arr_size;
	}
	
	Kemudian kita bisa buat function yang akan menggunakan function-function sebelumnya
	dan menampilkan data dari input user beserta hasil dari function.
	void display_table(const double arr_1[], const double arr_2[], int arr_size)
	{
		int i;
		printf("\t\t\t\tTable of monthly rainfall");
		printf("\n\t\tJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec");
		printf("\nThis year\t");
		for(i = 0; i < arr_size; i++)
			printf("%.1f\t", arr_1[i]);
		printf("\nLast year\t");
		for(i = 0; i < arr_size; i++)
			printf("%.1f\t", arr_2[i]);
		printf("\nTotal rainfall this year:\t %.1f", sum_arr(arr_1, arr_size));
		printf("\nTotal rainfall last year:\t %.1f", sum_arr(arr_2, arr_size));
		printf("\nAverage monthly rainfall for this year:\t %.1f", avg_arr(arr_1, arr_size));
		printf("\nAverage monthly rainfall for last year:\t %.1f", avg_arr(arr_2, arr_size));
	}	
	
	Terakhir, kita tinggal menulis function di main yang meminta user untuk memasukkan input
	dan kita tinggal memanggil function yang menampilkan hasil data yang telah di olah dari
	input user tersebut.
	double this_year[12];
	double last_year[12];
	int i;
	for (i = 0; i < 12; i++)
		scanf("%lf %lf", &this_year[i], &last_year[i]);
	display_table(this_year, last_year, 12);
	return 0;

*/
#include <stdio.h>
#include <stdlib.h>

//ngitung jumlah
double sum_arr(const double arr[], int arr_size)
{
	double sum = 0;
	int i;
	for (i =  0; i < arr_size; i++)
		sum += arr[i];
	return sum;
}
//ngitung rata-rata
double avg_arr(const double arr[], int arr_size)
{
	double sum = sum_arr(arr, arr_size) ;
	return sum / arr_size;
}
//nampilin hasil
void display_table(const double arr_1[], const double arr_2[], int arr_size)
{
	int i;
	printf("\t\t\t\tTable of monthly rainfall");
	printf("\n\t\tJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec");
	printf("\nThis year\t");
	for(i = 0; i < arr_size; i++)
		printf("%.1f\t", arr_1[i]);
	printf("\nLast year\t");
	for(i = 0; i < arr_size; i++)
		printf("%.1f\t", arr_2[i]);
	printf("\nTotal rainfall this year:\t %.1f", sum_arr(arr_1, arr_size));
	printf("\nTotal rainfall last year:\t %.1f", sum_arr(arr_2, arr_size));
	printf("\nAverage monthly rainfall for this year:\t %.1f", avg_arr(arr_1, arr_size));
	printf("\nAverage monthly rainfall for last year:\t %.1f", avg_arr(arr_2, arr_size));
}

int main()
{
	double this_year[12];
	double last_year[12];
	int i;
	for (i = 0; i < 12; i++)
		scanf("%lf %lf", &this_year[i], &last_year[i]);
	display_table(this_year, last_year, 12);
	return 0;
}

/*
	2.5 6
	3.2 1
	1 6.7
	6 8.9
	2.2 3.2
	7.8 2.1
	2.5 6.5
	6.3 4.2
	9.2 4.8
	3.1 7.8
	6.7 7.6
	4.5 6.7
 	                               Table of monthly rainfall
	                Jan     Feb     Mar     Apr     May     Jun     Jul     Aug     Sep     Oct     Nov     Dec
	This year       2.5     3.2     1.0     6.0     2.2     7.8     2.5     6.3     9.2     3.1     6.7     4.5
	Last year       6.0     1.0     6.7     8.9     3.2     2.1     6.5     4.2     4.8     7.8     7.6     6.7
	Total rainfall this year:        55.0
	Total rainfall last year:        65.5
	Average monthly rainfall for this year:  4.6
	Average monthly rainfall for last year:  5.5

	Testing : 
	Dalam uji coba program, kita berhasil menampilkan data berdasarkan input yang dimasukkan user.
	Karena ada 12 bulan dalam setahun, jadi input yang dimasukkan ada 24 data hujan yang merupakan
	data dari tahun lalu dan tahun ini. Program berhasil menampilkan input yang dimasukkan oleh user 
	dalam bentuk tabel dan dibandingkan yang mana hujan tahun ini dan yang mana tahun lalu. Program juga
	berhasil menampilkan data total hujan dan rata-rata hujan.

*/





