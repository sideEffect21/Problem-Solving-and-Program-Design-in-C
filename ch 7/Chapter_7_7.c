/*
Ditulis oleh:
Nama	:Umar Hanif Abdul Aziz	(5025211106)
		 Moch. Taslam Gustino P.(5025211011)
		 Sekar Ambar Arum		(5025211041)
Tanggal	:31/10/2021
*/
/* 	Problem: Kita harus membuat program untuk membantu State Justice Department dalam
			 menghitung recidivism rate.	
/* 	Analysis: Recidivism rate diperoleh dari jumlah tahanan yang ditangkap kembali dalam
			  kurun waktu 3 tahun setelah dibebaskan, lalu dibagi dengan jumlah total tahanan
			  dan dikalikan dengan 100%.
*/
/* 
Data Requirements :
	Problem Inputs: 	int id				//id tahanan
						int mrel[7]			//bulan dilepaskan
						int yrel[7]			//tahun dilepaskan
						int mrea[7]			//bulan ditangkap kembali
						int yrea[7]			//tahun ditangkap kembali
	Problem Outputs:	double rate			//recidivism rate
*/
/*
Design:
	Initial algorithm:
	1. Membuka file
	2. Memasukkan nilai-nilai id tahanan, bulan dan tahun dilepaskan,
	   bulan dan tahun ditangkap kembali
	3. Menghitung recidivism rate
	4. Menampilkan nilai recidivism rate
	5. Menutup file
*/
/*
Implementation:
	untuk memasukkan data bulan dan tahun dilepaskan, serta bulan dan tahun
	ditangkap kembali dapat menggunakan perintah loop:
	while(fscanf(input, "%d", &id) != EOF){
		fscanf(input, "%d %d %d %d", &mrel[i], &yrel[i], &mrea[i], &yrea[i]);
		i++;
	}
	lalu membuat fungsi untuk menghitung recivisim rate
	double recidivism(int mrel[], int yrel[], int mrea[], int yrea[])
	{
		int i, sum = 0;
		for(i=0; i<7; i++){
			if(yrea[i] - yrel[i] > 3){
				continue;
			}
			else if(yrea[i] == 0){
				continue;
			}
			else if(yrea[i] - yrel[i] == 3){
				if(mrea[i] - mrel[i] > 0){
					continue;
				}
				else if(mrea[i] - mrel[i] <= 0){
					sum += 1;
				}
			}
			else if(yrea[i] - yrel[i] < 3){
				sum += 1;
			}	
		}
		return sum;	
	}
	setelah itu fungsi dikalikan 100 dan di-assign ke variabel rate
	rate = (recidivism(mrel, yrel, mrea, yrea) / 7) * 100;
	menampilkan nilai recidivism rate
	printf("The recidivism rate is: %.1f%%", rate);
	menutup file
	fclose(input);
*/


#include<stdio.h>

//fungsi recidivism rate
double recidivism(int mrel[], int yrel[], int mrea[], int yrea[])
{
	//deklarasi variabel
	int i, sum = 0;
	//loop
	for(i=0; i<7; i++){
		//kasus-kasus
		if(yrea[i] - yrel[i] > 3){
			continue;
		}
		else if(yrea[i] == 0){
			continue;
		}
		else if(yrea[i] - yrel[i] == 3){
			if(mrea[i] - mrel[i] > 0){
				continue;
			}
			else if(mrea[i] - mrel[i] <= 0){
				sum += 1;
			}
		}
		else if(yrea[i] - yrel[i] < 3){
			sum += 1;
		}	
	}
	
	return sum;	
}


int main() 
{
	//membuka file
	FILE *input = fopen("input.txt", "r");
		 
	//deklarasi variabel
	int i;
	double rate;
	int id, mrel[7], yrel[7], mrea[7], yrea[7];
	//loop untuk memasukkan bulan dan tahun dilepaskan dan ditangkap kembali
	while(fscanf(input, "%d", &id) != EOF){
		fscanf(input, "%d %d %d %d", &mrel[i], &yrel[i], &mrea[i], &yrea[i]);
		i++;
	}
	//assign fungsi ke variabel rate
	rate = (recidivism(mrel, yrel, mrea, yrea) / 7) * 100;
	
	//menampilkan hasil
	printf("The recidivism rate is: %.1f%%", rate);
	//menutup file
	fclose(input);
	
	return 0;
}
/* 
	Outputs :
	The recidivism rate is: 14.3% 

	Testing :
	output yang dikeluarkan sudah benar, karena 1 dari 7 tahanan yang ditangkap kembali dalam
	kurun waktu 3 tahun.
*/ 
