/* 	
	Ditulis oleh: 
	        Nrp : 5025211035	
	        Nama: Abdullah Yasykur Bifadhlil Midror (Fadhly)
*/
 
/* Tanggal:
        	Pembuatan: 2 November 2021
        	…………….
*/ 

/* 	PROBLEM:  */ 
/*	Ada kepentingan yang sangat mendesak karena masalah yang menimpa pemerintah Amerika Serikat.
	Sangat diperlukan mengetahui berapa lama harapan hidup wanita kulit hitam dan kulit putih 
	dibandingkan pria dari ras yang sama pada setiap dekade dari tahun 1950 hingga tahun 2000
    Pemerintah mempunyai data "Harapan Hidup Amerika Serikat saat Lahir menurut Jenis Kelamin dan Ras".
    Oleh karena itu dia membutuhkan sebuah program untuk membandingkan data harapan hidup tersebut.
*/
 	
	 
/* 	ANALYSIS:  */
/*	Data-data yang akan digunakan:		   Female							|							    Male
	.						        Year   Black   White 					|				    	Year   Black   White
	.								1950    62.9    72.2 					|						1950    59.1    66.5
	.								1960    66.3    74.1 					|						1960    61.1    67.4
	.								1970    68.3    75.6 					|						1970    60.0    68.0
	.								1980    72.5    78.1 					|						1980    63.8    70.7
	.								1990    73.6    79.4 					|						1990    64.5    72.7
	.								2000    75.2    80.1 					|						2000    68.3    74.9
	Pembandingan dapat dilakukan dengan cara mengurangi komponen data pada dari data yang telah diketahui dan telah tersedia dalam sebuah file yang terpisah.
    Kedua data didapatkan dengan memasukkan file dari data tersebut ke dalam variabel tujuan pada program yang akan dijalankan tanpa perlu input dari user.
    Kedua data tersebut dimasukkan kedalam variabel berupa bentuk matriks agar dapat mengoperasikan komponen datanya antara satu dengan yang lain.
	Setelah itu, baru masing-masing komponen dari kedua matriks tersebut dikurangkan sehingga ditemukan selisih dari nilai-nilai komponen tersebut.
	Selisih yang ditemukan merupakan perbandingan harapan hidup perempuan dan laki-laki sehingga nilai itulah yang akan ditampilkan kepada user.  
*/



/* DATA REQUIREMENTS : */
/*	Problem Constants: ROW 6											//batasan untuk baris matriks
					   COL 2											//batasan untuk kolom matriks
	Problem Input    : FILE *male = fopen("male.txt", "r")				//sumber file data untuk laki-laki 	   
					   FILE *female = fopen("female.txt", "r")			//sumber file data untuk perempuan
					   double MALE_MAT[ROW][COL]						//tempat menyimpan data laki-laki
					   double FEMALE_MAT[ROW][COL]						//tempat menyimpan data perempuan
    Problem Outputs  : double DIFF_MAT[ROW][COL]						//tempat menyimpan hasil perbandingan
    Program Variables: int i											//variabel loop untuk baris
    				   int j											//variabel loop untuk kolom
*/

/*  DESIGN  */
/*	Initial Algorithm:
	1. Mengambil file data dari laki-laki dan perempuan
	2. Memasukkan ke dalam variabel tujuan dalam matriks 
	3. Mengurangkan kedua matriks untuk perbandingan
	4. Menampilkan matriks hasil perbandingan
*/

/*  IMPLEMENTATION  */
/*	#include <stdio.h>
	#define ROW 6
	#define COL 2

	// membuat prototype function //
	void matrix_diff(double[][COL], double[][COL], double[][COL]);
	void display(double[][COL]);
	
	// fungsi main //
	void main()
	{
		FILE *male = fopen("male.txt", "r"), *female = fopen("female.txt", "r");
		double MALE_MAT[ROW][COL], FEMALE_MAT[ROW][COL], DIFF_MAT[ROW][COL];
		int i, j;
		
		while(!feof(male))
		{
			for(i = 0; i < ROW; i++)
				for(j = 0; j < COL; j++)
					fscanf(male, "%lf", &MALE_MAT[i][j]);
		}
		
		while(!feof(female))
		{
			for(i = 0; i < ROW; i++)
				for(j = 0; j < COL; j++)
					fscanf(female, "%lf", &FEMALE_MAT[i][j]);
		}
		
		matrix_diff(MALE_MAT, FEMALE_MAT, DIFF_MAT);
		
		printf("\n\tMale");
		display(MALE_MAT);
		
		printf("\n\n\tFemale");
		display(FEMALE_MAT);
		
		matrix_diff(FEMALE_MAT, MALE_MAT, DIFF_MAT);
		
		printf("\n\n\tDifference");
	    display(DIFF_MAT);
		
		fclose(male);
		fclose(female);
	}
	
	//fungsi untuk mengurangkan 2 matriks
	void matrix_diff(double A[][COL], double B[][COL], double C[][COL])
	{
		int i, j;
		
		for(i = 0; i < ROW;i++)
		{
			for(j = 0; j < COL; j++)
			{
				C[i][j] = A[i][j] - B[i][j];
			}
		}
		
	}
	
	//fungsi untuk menampilkan hasil perhitungan matriks
	void display(double A[][COL])
	{
		int i, j, year = 1950;
		printf("\nYear %3c Black %3c White\n", ' ', ' ');
		for(i = 0; i < ROW; i++)
		{
			printf("\n%d %2c", year, ' ');
			for(j = 0; j < COL; j++)
			{
				printf("   %.1f   ", A[i][j]);
			}
			year += 10;
		}
	}

*/

#include <stdio.h>
#define ROW 6
#define COL 2

// membuat prorttotype function
void matrix_diff(double[][COL], double[][COL], double[][COL]);
void display(double[][COL]);
void main()
{
	FILE *male = fopen("male.txt", "r"), *female = fopen("female.txt", "r");
	double MALE_MAT[ROW][COL], FEMALE_MAT[ROW][COL], DIFF_MAT[ROW][COL];
	int i, j;
	
	while(!feof(male))
	{
		for(i = 0; i < ROW; i++)
			for(j = 0; j < COL; j++)
				fscanf(male, "%lf", &MALE_MAT[i][j]);
	}
	
	while(!feof(female))
	{
		for(i = 0; i < ROW; i++)
			for(j = 0; j < COL; j++)
				fscanf(female, "%lf", &FEMALE_MAT[i][j]);
	}
	
	matrix_diff(MALE_MAT, FEMALE_MAT, DIFF_MAT);
	
	printf("\n\tMale");
	display(MALE_MAT);
	
	printf("\n\n\tFemale");
	display(FEMALE_MAT);
	
	matrix_diff(FEMALE_MAT, MALE_MAT, DIFF_MAT);
	
	printf("\n\n\tDifference");
    display(DIFF_MAT);
	
	fclose(male);
	fclose(female);
}

//fungsi untuk mengurangkan 2 matriks
void matrix_diff(double A[][COL], double B[][COL], double C[][COL])
{
	int i, j;
	
	for(i = 0; i < ROW;i++)
	{
		for(j = 0; j < COL; j++)
		{
			C[i][j] = A[i][j] - B[i][j];
		}
	}
	
}

//fungsi untuk menampilkan hasil perhitungan matriks
void display(double A[][COL])
{
	int i, j, year = 1950;
	printf("\nYear %3c Black %3c White\n", ' ', ' ');
	for(i = 0; i < ROW; i++)
	{
		printf("\n%d %2c", year, ' ');
		for(j = 0; j < COL; j++)
		{
			printf("   %.1f   ", A[i][j]);
		}
		year += 10;
	}
}

/* Output :

        Male
Year     Black     White

1950      59.1      66.5
1960      61.1      67.4
1970      60.0      68.0
1980      63.8      70.7
1990      64.5      72.7
2000      68.3      74.9

        Female
Year     Black     White

1950      62.9      72.2
1960      66.3      74.1
1970      68.3      75.6
1980      72.5      78.1
1990      73.6      79.4
2000      75.2      80.1

        Difference
Year     Black     White

1950      3.8      5.7
1960      5.2      6.7
1970      8.3      7.6
1980      8.7      7.4
1990      9.1      6.7
2000      6.9      5.2
*/

