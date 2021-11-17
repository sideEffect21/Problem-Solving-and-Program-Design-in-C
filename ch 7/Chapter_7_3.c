/*
Ditulis oleh:
Nama	:Umar Hanif Abdul Aziz	(5025211106)
		 Moch. Taslam Gustino P.(5025211011)
		 Sekar Ambar Arum		(5025211041)
Tanggal	:02/11/2021
*/
/*
Problem	:Menghitung pusat massa

Analysis:Mengalikan massa pada koordinat masing-masing, menjumlahkan titik koordinat sesuai dengan letaknya,
lalu membagi dengan jumlah total massa
*/
/*
Data requirements :
		Problem input		:	int n					//banyak data
								int point_matrix		//titik koordinat
								int masses				//massa
		Problem output		:	double center_of_gravity//pusat massa
								int n					//banyak data
								int point_matrix		//titik koordinat
								int masses				//massa
		Program variables	:	double sum_of_masses 	//jumlah massa
								double sum_of_point		//jumlah koordinat
		Relevant formulas	:	
			jumlah massa		= sigma massa
			jumlah koordinat	= sigma koordinat x,sigma koordinat y, dan sigma koordinat z
			pusat massa			= jumlah koordinat : jumlah massa
*/
/*
Design:
	Initial algorithm :
	1.Membuka file Point mass sebagai input
	2.Memasukkan titik koordinat
	3.Memasukkan massa
	4.Menghitung jumlah massa
	5.Menghitung jumlah koordinat
	6.Menghitung pusat massa
	7.Menampilkan pusat massa pada terminal
	8.Menampilkan titik koordinat, massa, dan banyak data pada file output
	9.Menutup file Point masss
*/
/*
Refinement:
	1.point_matrix[i][j]*=masses[i];
	2.sum_of_point[i]+=point_matrix[j][i];
	3.center_of_gravity[i]=sum_of_point[i]/sum_of_masses;
*/
/*
Implementation:
	Untuk mendapatkan banyak data, titik koordinat, dan massa maka perlu ada input 
	dari file dengan statement sebagai berikut:
	
	fscanf(input, "%d", &n);
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < COORDINATES; j++)
		{
			fscanf(input, "%d", &point_matrix[i][j]);
		}
		fscanf(input, "%d", &masses[i]);
	}
	 
	Lalu, statement :
		sum_of_masses += masses[i];
		point_matrix[i][j]*=masses[i];
		sum_of_point[i]+=point_matrix[j][i];
		
	untuk menghitung jumlah massa dan jumlah koordinat
	
	Langkah selanjutnya jalankan algoritma:
	center_of_gravity[i]=sum_of_point[i]/sum_of_masses;

	Setelah didapat pusat massa, lalu ditampilkan kepada user:
	printf("%.2f, ",center_of_gravity[i]);
	
	Juga menampilkan output pada file berupa titik koordinat, massa, dan banyak data dengan statement:
	fprintf(output, "%8c %4d ", ' ', point_matrix[i][j]);
	fprintf(output, "\n %2c %d", ' ', masses[i]);
	fprintf(output, "\n\nn - %d", n);
	
*/
#include <stdio.h>
#define COORDINATES 3
void fget_point_mass(int, int[][COORDINATES], int[], FILE*);	//fungsi input titik koordinat dan massa
void center_grav(int[][COORDINATES], int[], int);				//fungsi menghitung dan menampilkkan pusat massa
void fwrite_point_mass(int, int[][COORDINATES], int[], FILE*);	//fungsi output pada file

int main()
{
	FILE *input = fopen("Point mass.txt", "r"), //Membuka file untuk input
	*output = fopen("output.txt", "w");;		//Membuka file untuk output
	int n, 										//Input jumlah data
	i;
	
	//file memasukkan jumlah data
	fscanf(input, "%d", &n);
	
	int point_matrix[n][COORDINATES],	//variable titik koordinat
	masses[n];							//variable massa
	
	//memanggil fungsi fget_point_mass
	fget_point_mass(n, point_matrix, masses, input);
	
	//memanggil fungsi fwrite_point_mass
	fwrite_point_mass(n, point_matrix, masses, output);
	
	//memanggil fungsi center_grav
	center_grav(point_matrix, masses, n);
	
	//menutup file
	fclose(input);
	fclose(output);
	
	return 0;
}

void fget_point_mass(int n, int point_matrix[][COORDINATES], int masses[], FILE *input)
{
	int i, j;
	
	//input titik koordinat dan massa
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < COORDINATES; j++)
		{
			fscanf(input, "%d", &point_matrix[i][j]);
		}
		fscanf(input, "%d", &masses[i]);
	}
}

void center_grav(int point_matrix[][COORDINATES], int masses[], int n)
{
	int i, j;
	double sum_of_masses, center_of_gravity[3], sum_of_point[3];
	
	//menghitung jumlah massa
	for(i = 0; i < n; i++)
	{
		sum_of_masses += masses[i];
	}
	
	//menghitung titik koordinat pada setiap massa
	for(i = 0; i < n; i++)
	{
		for(j=0;j<3;j++)
		{
			point_matrix[i][j]*=masses[i];
		}
	}
	
	for(i=0;i<3;i++)
	{
		sum_of_point[i]=0;
		
		//menghitung jumlah koordinat
		for(j=0;j<n;j++)
		{
			sum_of_point[i]+=point_matrix[j][i];
		}
		//menghitung pusat massa
		center_of_gravity[i]=sum_of_point[i]/sum_of_masses;
	}
	
	//menampilkan pusat massa
	printf("\nCenter of gravity in point\n\n");
	printf("   ( ");
	for(i=0;i<3;i++)
	{
		printf("%.2f, ",center_of_gravity[i]);
	}
	printf("\b\b )");
}

void fwrite_point_mass(int n, int point_matrix[][COORDINATES], int masses[], FILE *output)
{
	int i, j;
	
	fprintf(output, "location");
	
	//menamiplkan titik koordinat pada file
	for(i = 0; i < n; i++)
	{
		fprintf(output, "\n");
		for(j = 0; j < COORDINATES; j++)
		{
			fprintf(output, "%8c %4d ", ' ', point_matrix[i][j]);
		}
	}
	
	//menampilkan massa pada file
	fprintf(output, "\n\nmass");
	for(i = 0; i < n; i++)
	{
		fprintf(output, "\n %2c %d", ' ', masses[i]);
	}
	
	//menampilkan jumlah data pada file
	fprintf(output, "\n\nn - %d", n);
}


