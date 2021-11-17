/*	Ditulis oleh:
	Nama	:- Afiq Fawwaz Haidar (5025211246)
			 - Melanie Sayyidina Sabrina Refman (5025211029)
			 - Mohammad Kamal (5025211180)

	Tanggal Pembuatan: 2 November 2021

	Problem:
		Membuat program untuk menilai n-pertanyaan ujian pilihan ganda dan berikan umpan
	balik tentang pertanyaan yang paling sering terlewatkan.
	
	Analysis:
		Dalam kasus ini diminta untuk mengambil data dari file examdat.txt yang pada
	baris pertama berisi jumlah pertanyaan pada ujian yang diikuti dengan spasi dan
	kemudian string n-karakter dari jawaban yang benar. Kemudian, program ini menghasilkan
	file output, report.txt, yang berisi kunci jawaban, ID setiap siswa, dan skor stiap
	siswa sebagai persentase, dan jumlah siswa yang melewatkan setiap pertanyaan.
	
	Data Requirement:
	Problem Input:	FILE *input = fopen("examdat.txt", "r"); //input file examdat.txt
	Problem Output:	fgetAnswers(answers, n, input); //output file report.txt
	
	Design:
	Initial Alogrithm:
		1.	Mendeklarasi fungsi yang akan dibuat
		2.	Membuat parameter dan pendefinisian fungsi
		3.	Membuat fungsi utama
		4.	Memanggil fungsi yang telah didefinisikan
	
	Implementation:
*/

#include <stdio.h>
void fgetAnswers(char[], int, FILE*);
void main()
{
	FILE *input = fopen("examdat.txt", "r");
	int n, i;

	char answers[20], space;
	
	fscanf(input, "%d", &n);
	fscanf(input, "%c", &space);
	
	for(i = 0; i < n ; i++)
	{
		fscanf(input, "%c", &answers[i]);
	}
	
	fgetAnswers(answers, n, input);
	
	fclose(input);
}	

void fgetAnswers(char answers[], int n, FILE *input)
{
	FILE *output = fopen("report.txt", "w");
	
	int missed[n], i, id, correct;
	char choice;
	
	for(i = 0; i < n; i++)
	{
		missed[i] = 0;
	}
	
	fprintf(output, "%10c Exam Report %2c", ' ', ' ');
	fprintf(output, "\nQuestion %2c", ' ');

	for(i = 0; i < n ; i++)
	{
		fprintf(output, "%d ", i);
	}

	fprintf(output,"\nAnswer %3c", ' ');
	
	for(i = 0; i < n ; i++)
	{
		fprintf(output, "%c ", answers[i]);
	}
	
	fprintf(output, "\n\nID %2c Score(%%)\n", ' ');
	
	while(fscanf(input, "%d", &id) != EOF)
	{
		correct = 0;
		fprintf(output, "%d %2c", id, ' ');
		fscanf(input, "%c", &choice);
		
		for(i = 0; i < n ; i++)
		{
			fscanf(input, "%c", &choice);
			
			if(choice == answers[i])
				correct++;
			else
				missed[i]++;
		}
		fprintf(output, "%d\n", (correct * 100) / n);
	}

	fprintf(output, "\nQuestion %2c", ' ');
	
	for(i = 0; i < n ; i++)
	{
		fprintf(output, "%d ", i);
	}

	fprintf(output, "\nMissed by %2c", ' ');

	for(i = 0; i < n ; i++)
	{
		fprintf(output, "%d ", missed[i]);
	}
	
	fclose(output);
}

/*	Testing:
		Dalam uji kasus tersebut, program yang dijalankan benar menampilkan file 
	report.txt yang berisi kunci jawaban, ID setiap siswa, skor setiap siswa sebagai 
	persentase, dan jumlah siswa yang melewatkan setiap pertanyaan dalam satu folder.
*/
