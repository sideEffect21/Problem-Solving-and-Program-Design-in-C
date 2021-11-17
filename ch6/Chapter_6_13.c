/* 	
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/

/* Tanggal pembuatan : 16-10-2021 */

/* Problem :
	Diminta untuk membuat program yang dapat membedakan identifier dengan number
	yang dipisahkan dengan spasi
*/

/* Analysis : 
	Kita dapat mengecek karakter string yang di input user dengan menggunakan 
	loop
*/

/* Problem Requirement :


	Problem inputs :
	char[str]					//menyimpan string
	

	Problem output : 
	printf langsung
	
	Temporary variabel :
	int i						//digunakan sebagai pengontrol loop
	int count					//menghitung posisi string

	
*/

// DESIGN
/* Initial Algorithm :
	1. Meminta pengguna memasukkan string
	2. Mengecek string dan menampilkan kata jika bukan spasi
	3. Menampilkan apakah string tersebut identifier atau number
	4. Proses diulang sampai titik ditemukan
*/

// Implementation
/* 
	Untuk mendapatkan string kita gunakan : 
	
	gets(str);
	
	Gunakan for loop untuk mengulang proses : 
	for(i = 0; i < strlen(str); i++){}
	
	Kemudian kita cek string dengan menggunakan if else : 
	
	if(str[i] == '.')
		{
			if(str[i-count] <= 57 && str[i-count] >= 48 )
			{
				printf(" - Number\n");
			}
			else
			{
				printf(" - Identifier\n");
			}
			break;
		}
		else if(str[i] != ' ')
		{
			printf("%c", str[i]);
			count++;
		}
		else if(str[i] == ' ' && str[i-1] != ' ')
		{
			if(str[i-count] <= 57 && str[i-count] >= 48 )
			{
				printf(" - Number\n");
			}
			else
			{
				printf(" - Identifier\n");
			}
			count = 0;
		}
	
	
	
*/



#include <stdio.h>
#include <string.h>

int main()
{
	int i, count = 0;
	char str[200];
	gets(str);
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] == '.')
		{
			if(str[i-count] <= 57 && str[i-count] >= 48 )
			{
				printf(" - Number\n");
			}
			else
			{
				printf(" - Identifier\n");
			}
			break;
		}
		else if(str[i] != ' ')
		{
			printf("%c", str[i]);
			count++;
		}
		else if(str[i] == ' ' && str[i-1] != ' ')
		{
			if(str[i-count] <= 57 && str[i-count] >= 48 )
			{
				printf(" - Number\n");
			}
			else
			{
				printf(" - Identifier\n");
			}
			count = 0;
		}
		
	}
	
	
	return 0;
}

/*
	rate R2D2 48 2 time 555666.
	rate - Identifier
	R2D2 - Identifier
	48 - Number
	2 - Number
	time - Identifier
	555666 - Number                
	
	TESTING 
	Dalam kasus uji tersebut kita memasukkan beberapa kata yang akan diuji. Selagi kata
	yang dimasukkan tidak diawali dengan nomor, identifier akan ditampilkan di samping kata. 
	Sebaliknya jika dimulai dengan nomor, number akan ditampilkan.
	
*/


