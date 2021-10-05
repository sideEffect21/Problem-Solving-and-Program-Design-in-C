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

Misalkan Anda memiliki distributor bir yang menjual Piels (nomor ID 1), Coors
(Nomor ID 2), Bud (Nomor ID 3), dan Iron City (Nomor ID 4) berdasarkan kasus.
Tulis program untuk
A. Dapatkan inventaris kasus untuk setiap merek untuk awal minggu.
B. Memproses semua catatan penjualan dan pembelian mingguan untuk setiap merek.
C. Menampilkan inventaris akhir. Setiap transaksi akan terdiri dari dua item data. Item pertama akan menjadi merek

*/

// Analysis
/*
dalam kasus ini sudah diketahui bahwa untuk menjawab pertanyaan a,b,dan c
Nomor ID (bilangan bulat). Yang kedua adalah jumlah yang dibeli (positif
nilai integer) atau jumlah yang terjual (nilai integer negatif). 
Entri data Anda harus dimulai dengan empat nilai  mewakili inventaris kasus, 
diikuti dengan nilai transaksi

	
// Data Requirements
/*
	brand_id	//input brand id number dan banyak
	amount
	
	Problem outputs
	final_inventory	//output yang keluar yang tersedia
*/

// Design
/*
	Initial algorithm
	1. meminta input berupa ID brand hingga sampai dengan 4
	2. mengecek ketersediaan beer sesuai id dalam inventory
	3. menampilkan inventaris sesuai id brand 
	4. menampilkan penjualan 
	5. Menampilkan invontaris akhir 
// Implementations
/*
	Pertama, ID brand yang tersedia karena hanya sampai 4 maka dilakukan perulangan 
	while(i < 4)
	{
		temp = brand_id;
		printf("\nEnter Brand ID Number - ");
		scanf("%d", &brand_id);				// mendapatkan input ID beer yang akan dicari
	
  	dilakukan pengecekan bila bernilai benar
	if(temp != brand_id)
			{
		printf("\nEnter Amount Purchased/Sold - ");
		scanf("%d", &amount);					// untuk mendapatkan banyak penjualan
		final_inventory += process_sales(brand_id, amount);	// memprosesnya ke dalam inventori akhir
		i++;
			}
jika tidak sesuai 
else
				printf("\nAlready Entered enter a different brand ID\n"); //kempali ke input kan ID

dilakukan perhitungan didalam inventaris dimana beer id itu sesuai 

int process_sales(int brand_id, int amount)
{
	int inventory = 0, i; 
	inventory += amount; //inventaris akan bertambah sesuai banyaknya permintaan
	
	printf("\nInventory for ID Number %d - %d\n", brand_id, inventory); //menampilkan inventaris yang sesuai dengan id
	

	*/
#include "stdio.h"
int process_sales(int, int);
void main()
{
	int i = 0, brand_id, amount, final_inventory = 0, temp;

		while(i < 4)
		{
			temp = brand_id;
			printf("\nEnter Brand ID Number - ");
			scanf("%d", &brand_id);
			if(temp != brand_id)
			{
				printf("\nEnter Amount Purchased/Sold - ");
				scanf("%d", &amount);
				final_inventory += process_sales(brand_id, amount);
				i++;
			}
			else
				printf("\nAlready Entered enter a different brand ID\n");
			}
	printf("\nFinal Inventory - %d \n", final_inventory);
}

int process_sales(int brand_id, int amount)
{
	int inventory = 0, i;
	inventory += amount;
	
	printf("\nInventory for ID Number %d - %d\n", brand_id, inventory);
	
	return inventory;
}
