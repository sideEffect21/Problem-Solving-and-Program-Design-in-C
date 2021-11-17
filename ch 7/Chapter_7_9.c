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
	Pembuatan : 18 oktober 2021
*/

// Problem
/*
	Membuat program yang dapat menjalankan game interaktif hangman. Pada dasarnya,
	game ini merupakan game tebak kata yang dapat dijawab dengan menebak satu 
	per satu huruf yang ada dalam kata tersebut. Game ini juga akan mengeluarkan
	gambar orang digantung bagian per bagian setiap pemain salah menjawab.
*/

// Analysis
/*
	Pertama, kita memerlukan variabel tipe array char untuk menyimpan kata yang 
	menjadi soal pada permainan. Selain itu, kita juga memerlukan satu variabel
	array char lagi untuk menyimpan huruf yang diinput oleh pemain. Selain itu,
	kita juga memerlukan fungsi void untuk menampilkan gambar hangman.
*/

// Data Requirements
/*
	Problem constant
	TOTAL_GUESS 15
	MAX 8
	
	Problem inputs
	char guess[]
	
	problem outputs
	char temp[]
	
	Additional variable
	int i;
	int j
	int size
	int salah
	int benar
*/

// Design
/*
	Initial algorithm
	1. Inisialisasi kata kunci yang akan dijadikan soal
	2. Menerima input huruf yang merupakan jawaban dari pemain
	3. Cek apakah huruf yang diinput ada di kata kunci
	4. Tampilkan output berupa hangman dan huruf yang telah terjawab
	5. Ulangi langkah diatas hingga selesai
	
	Refinement
	3.1 Jika tidak ada, satu bagian hangman akan bertambah
	3.2 Jika ada, bagian hangman tetap
	5.1 Jika salah hingga 7 kali, permainan selesai dan pemain kalah (output berupa YOU LOSE)
	5.2 Jika berhasil menebak semua huruf, permainan selesai dan pemain menang (outbput berupa YOU WIN)
*/

#include <stdio.h>
#define TOTAL_GUESS 15
#define MAX 8

void display(int);

int main()
{
	char words[] = {'D', 'A', 'S', 'P', 'R', 'O', 'G'}, guess[TOTAL_GUESS];
	char temp[] = {'_', '_', '_', '_', '_', '_', '_'};
	int i, j;
	int size = 0;
	int salah = -1;
	int benar = 0;
	
	for(i=0; i<MAX; i++)
	{
		if(words[i] != '\0')
			size+=1;
		else
			continue;
	}
	
	for(i=0; i<=TOTAL_GUESS; i++)
	{
		guess[i] = '*';
	}
	
	for(i=0; i<TOTAL_GUESS; i++)
	{
		scanf("%s", &guess);
		for(j=0; j<size+1; j++)
		{
			if(guess[0] == words[j])
			{
				benar += 1;
				temp[j] = guess[0];
			}
			else
				continue;
		}

		if(benar)
			size-=1;
		else
			salah+=1;
			
		if(!benar)
		{
			display(salah);
		}
		for(j=0; j<7; j++)
		{
			printf("%c", temp[j]);
		}
		printf("\n");
		benar = 0;
		if(size == 0)
		{
			printf("-----YOU WIN-----");
			break;
		}
		else if(salah==6)
		{
			printf("-----YOU LOSE-----");
			break;
		}
	}
	
	return 0;
}

void
display(int n)
{
	if(n+1 == 0)
		printf("");
	else if (n+1==1)
	{
		printf("_________\n");
		printf("    |    \n");
		printf("    |    \n");
		printf("         \n");
		printf("         \n");
		printf("         \n");	
		printf("         \n");
		printf("         \n");
		printf("         \n");
		printf("         \n");
	}
	else if (n+1==2)
	{
		printf("_________\n");
		printf("    |    \n");
		printf("    |    \n");
		printf("    *    \n");
		printf("  *   *  \n");
		printf("   * *   \n");	
		printf("         \n");
		printf("         \n");
		printf("         \n");
		printf("         \n");
	}
	else if (n+1==3)
	{
		printf("_________\n");
		printf("    |    \n");
		printf("    |    \n");
		printf("    *    \n");
		printf("  *   *  \n");
		printf("   * *   \n");	
		printf("    |    \n");
		printf("    |    \n");
		printf("    |    \n");
		printf("         \n");
	}
	else 
	{
		printf("_________\n");
		printf("    |    \n");
		printf("    |    \n");
		printf("    *    \n");
		printf("  *   *  \n");
		printf("   * *   \n");
		if(n+1 == 4)
		{
			printf("    |    \n");
			printf("   /|    \n");
			printf("    |    \n");
			printf("         \n");
		}
		else if(n+1 == 5)
		{
			printf("    |    \n");
			printf("   /|\\  \n");
			printf("    |    \n");
			printf("         \n");
		}
		else if(n+1 ==6)
		{
			printf("    |    \n");
			printf("   /|\\  \n");
			printf("    |    \n");
			printf("   /     \n");
		}
		else
		{
			printf("    |    \n");
			printf("   /|\\  \n");
			printf("    |    \n");
			printf("   / \\  \n");
		}
	}
}
	/*printf("_________\n");
	printf("    |    \n");
	printf("    |    \n");
	printf("    *    \n");
	printf("  *   *  \n");
	printf("   * *   \n");
	printf("    |    \n");
	printf("   /|\\  \n");
	printf("    |    \n");
	printf("   / \\  \n");*/
/*
_________
    |
    |
	* 
  *   *
   * *
    |
   /|\
	|
   / \ 
*/ 
