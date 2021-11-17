/*	
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/
 
/* Tanggal:
        	Pembuatan: 		18 Oktober 2021
*/ 

/* 	Problem: InternetLite Corporation adalah penyedia layanan Internet 
			 yang membebankan tarif tetap kepada pelanggan sebesar $7,99 
			 untuk waktu koneksi hingga 10 jam. Jam tambahan dikenakan biaya masing-masing $1,99. 
			 Tulis biaya fungsi yang menghitung total biaya untuk pelanggan 
			 berdasarkan jumlah jam waktu koneksi yang digunakan dalam sebulan. 
			 Fungsi tersebut juga harus menghitung biaya rata-rata per jam dari waktu yang digunakan 
			 (dibulatkan ke sen terdekat), jadi gunakan dua parameter output untuk mengirim kembali hasil ini. 
			 Tulis fungsi kedua round_money yang mengambil bilangan real sebagai argumen input 
			 dan mengembalikannya sebagai nilai fungsi yang dibulatkan ke dua tempat desimal. 
			 Tulis fungsi utama yang mengambil data dari file input usage.txt 
			 dan menghasilkan file output charge.txt Format file datanya adalah sebagai berikut:
				 Baris 1: bulan dan tahun saat ini sebagai dua bilangan bulat
			 	Baris lain: nomor pelanggan (nomor lima digit) dan jumlah jam yang digunakan
*/
 	
/* 	Analysis: Untuk mendapatkan data, program harus membaca file usage.txt. Setelah
			  membaca usage.txt, program dapat melakukan loop untuk menginput data.
			  lalu program menghitung rata2 pembayaran per jam dan mengoutputkannya
			  dalam bentuk file bernama charges.txt
*/

/* Data Requirements :

	Problem Inputs: 
	month				//bulan penggunaan
	year				//tahun penggunaan
	customer_id			//nomer id pelanggan
	hours				//jam penggunaan pelanggan
	
	Problem Outputs:
	charge				//harga penggunaan pelayanan
	average				//rata-rata harga penggunaan per jam
*/

/*DESIGN
/*	Initial Algorithm:
	1. Membuka file
	2. Memasukkan dan menampilkan nilai month dan year
	3. Membuat tabel nomer pelanggan, jam, harga, dan rata-rata harga
	4. Me-loop untuk memasukkan dan menampilkan isi tabel
	5. Menutup file
*/

/*IMPLEMENTATION
	untuk memasukkan data bulan dan tahun, dan menampilkannya dengan tabel,
	dapat menggunakan perintah:
	fscanf(input, "%d %d", &month, &year);
	fprintf(output, "Charges for %d/%d\n", month, year);
	fprintf(output,"\nCustomer\tHours used\tCharge per hour\t\tAverage cost\n");
	setelah itu, loop dapat dibuat untuk memasukkan, menghitung, dan menampilkan
	id pelanggan, jam, harga, dan harga rata-rata per jam dengan algoritma:
	while(fscanf(input, "%d", &customer_id) != EOF)
	{
		fscanf(input, "%lf", &hours);
		charges(hours, &charge, &average);
		fprintf(output,"%d\t\t%.1f\t\t%.2f\t\t\t%.2f\n", customer_id, hours, charge, average);
	}
	lalu membuat fungsi-fungsi pendukung:
	void charges(double hours, double* charge, double* average)
	{
		if (hours <= 10)
			*charge = 7.99;
		else
			*charge = 7.99 + (1.99  * (ceil(hours) - 10)); 
		
		*average = *charge / hours;
		
		*charge = round_money(*charge);
		*average = round_money(*average);
	}	
	double round_money(double num)
	{
		int value = (num * 100 + 0.5);
		return (double)value/100;
	}

*/

#include <stdio.h>
#include <math.h>


void charges(double, double*, double*);
double round_money(double);

int main() 
{
	//membuka file
	FILE *input = fopen("usage.txt", "r"), 
		 *output = fopen("charges.txt", "w");
	
	//deklarasi variabel	 
	int month, year, customer_id, n;
	double hours, charge, average;
	
	//memasukkan bulan dan tahun penggunaan
	fscanf(input, "%d %d", &month, &year);
	
	//mengeluarkan bulan, tahun, dan header tabel
	fprintf(output, "Charges for %d/%d\n", month, year);
	fprintf(output,"\nCustomer\tHours used\tCharge per hour\t\tAverage cost\n");
	
	//melakukan perulangan pemasukan, perhitungan, dan penampilan data
	while(fscanf(input, "%d", &customer_id) != EOF)
	{
		fscanf(input, "%lf", &hours);
		charges(hours, &charge, &average);
		fprintf(output,"%d\t\t%.1f\t\t%.2f\t\t\t%.2f\n", customer_id, hours, charge, average);
	}
	
	//menutup file
	fclose(input);
	fclose(output);
	
	return 0;
}

//fungsi untuk menghitung harga dan rata-rata harga per jam
void charges(double hours, double* charge, double* average)
{
	if (hours <= 10)
		*charge = 7.99;
	else
		*charge = 7.99 + (1.99  * (ceil(hours) - 10)); 
	
	*average = *charge / hours;
	
	*charge = round_money(*charge);
	*average = round_money(*average);
}	

//fungsi untuk membulatkan bilangan ke 2 angka di belakang nol
double round_money(double num)
{
	int value = (num * 100 + 0.5);
	return (double)value/100;
}

