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
Tulis program untuk memproses kartu waktu karyawan mingguan untuk semua karyawan
sebuah organisasi. Hitung gaji total karyawan

*/

// Analysis
/*
Setiap karyawan akan memiliki tiga item data: identifikasi
jumlah, tingkat upah per jam, dan jumlah jam kerja selama
pekan. Setiap karyawan harus dibayar setengah jam untuk semua jam kerja
40. Akan dipotong pajak sebesar 3,625% dari gaji kotor. Program keluar-
put harus menunjukkan nomor karyawan dan gaji bersih. Tampilkan total gaji
dan jumlah rata-rata yang dibayarkan pada akhir perjalanan
	
// Data Requirements
/*
	Problem inputs
  employe,  ,id number 	//input yang digunakan
	double wage_rate, hours_worked, 
  
	Problem outputs
 total_payroll, avg	//otput yang keluar
	
*/

// Design
/*
	Initial algorithm
	1. meminta data jumlah employe, id number, tingkat upah per jam jam kerja selama minggu 
	2. mengecek jam kerja  kurang atau lebih dari 40j
	3. menghitung grosspay 
	4. menghitung harga setelah dipotong pajak
  5. menampilkan pembayaran dan rata rata
// Implementations
/*
	Pertama, kita perlu meminta input bnyk employe
  printf("\nEnter number of employees - ");
    scanf("%d", &employees);
  
	Setelah itu, mengambil banyak input sesuai banyak employe
	for(i = 0; i < employees; i++)      //dilakukan looping sesuai banyak employe
    {
        printf("\nEnter employee ID number - ");
        scanf("%d", &id_number);
        printf("\nEnter hourly wage rate - ");
        scanf("%lf", &wage_rate);
        printf("\nEnter hours worked - ");
        scanf("%lf", &hours_worked);
        
mengecek lama waktu bekerja 
    if (hours_worked <= 40)
		{
			grosspay = hours_worked * wage_rate; //langsung dihitung grosspay
      
 jika lama waktu lebih dari 40 jam 
 if (hours_worked > 40)
		{
			overtime_wage = 1.5 * wage_rate;
			overtimepay = (hours_worked - 40) * overtime_wage;
			overtime = hours_worked - 40;
			grosspay = ((hours_worked - overtime) * wage_rate) + overtimepay;
      
  Untuk menampilkan hasil setelah dipotong pajak dan
  sesuai id 
netpay = grosspay - (grosspay * (TAX / 100));
			total_payroll += netpay;
			printf("\nEmployee ID - %d", id_number);
			printf("\nNet pay - %.2f", netpay);
      
   Untuk menghitung rata rata dan total pembayaran
     avg = total_payroll / employees;
    printf("\nTotal payroll - %.2f", total_payroll);
    printf("\nAverage amount paid - %.2f\n", avg);
}
}
	*/
#include "stdio.h"
#define TAX 3.625
void main()
{
    int i, id_number, employees;
    double wage_rate, overtime_wage, hours_worked, overtime, grosspay, netpay, overtimepay, total_payroll = 0, avg;
    printf("\nEnter number of employees - ");
    scanf("%d", &employees);
    
    for(i = 0; i < employees; i++)
    {
        printf("\nEnter employee ID number - ");
        scanf("%d", &id_number);
        printf("\nEnter hourly wage rate - ");
        scanf("%lf", &wage_rate);
        printf("\nEnter hours worked - ");
        scanf("%lf", &hours_worked);
        
        if (hours_worked <= 40)
		{
			grosspay = hours_worked * wage_rate;
		}
		if (hours_worked > 40)
		{
			overtime_wage = 1.5 * wage_rate;
			overtimepay = (hours_worked - 40) * overtime_wage;
			overtime = hours_worked - 40;
			grosspay = ((hours_worked - overtime) * wage_rate) + overtimepay;
		}
			netpay = grosspay - (grosspay * (TAX / 100));
			total_payroll += netpay;
			printf("\nEmployee ID - %d", id_number);
			printf("\nNet pay - %.2f", netpay);
    }
    
    avg = total_payroll / employees;
    printf("\nTotal payroll - %.2f", total_payroll);
    printf("\nAverage amount paid - %.2f\n", avg);
}
