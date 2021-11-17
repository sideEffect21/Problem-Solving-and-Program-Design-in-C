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
        	Pembuatan: 17 Oktober 2021
    
*/ 

/* 	PROBLEM:  */ 
/*	Guru dan siswanya ingin mengetahui bagaimana konversi persamaan kemiringan garis berdasarkan nilai yang diketahui ke persamaan slope-intercept.
    Beberapa dari mereka ada yang hanya tahu 2 titik dari sebuah garis (two-point), dan beberapa hanya tahu nilai gradien dan satu titik saja (point-slope).
    Oleh karena itu dia memerlukan sebuah program untuk mengonversi persamaan yang mereka ketahui ke persamaan slope-intercept. 
*/
 	
	 
/* 	ANALYSIS:  */
/*	Rumus persamaan yang berlaku: 							    y2 - y1
	.							  (1) Two-point form       : m = ---------		-->		(x1,y1),(x2,y2) 
	.															x2 - x1 
	.							  (2) Point-slope form     : y - y1 = m(x - x1)	-->		m, (x1,y1)
	.							  (3) Slope-intercept form : y = mx + b			-->		m, b
	Pengonversian dapat dilakukan dengan cara mencari komponen-komponen yang dibutuhkan untuk membuat slope-intercept yaitu 'm' dan 'b'.
    Komponen m dan b didapatkan dengan meminta user untuk memasukkan data yang diketahui untuk membuat persamaan awalnya (Two-point atau Point-slope).
    Sebelumnya user diminta memilih apa yang dia ketahui dari sebuah garis 1. Two-point (jika tahu 2 titik) atau 2. Point-slope (jika tahu gradien dan 1 titik).
	Untuk mendapatkan persamaan awal dibuatkan fungsi yang dapat mengambil data dari user dan fungsi yang dapat merubah data itu menjadi persamaan awalnya.
	Setelah didapatkan persamaan awal (Two-point atau Point-slope), dibuatkan 2 fungsi (untuk Two-point dan Point-slope) yang bisa mengonversi ke Slope-intercept. 
	Fungsi pertama (untuk Two-point) akan menghasilkan nilai m dengan memasukkan input dari 2 titik ke rumus (1); dan nilai b dengan algoritma b = y1 - (m * x1).
	Pada Point-slope sudah ada nilai m sehingga fungsi kedua (untuk Point-slope) ini hanya mengembalikan nilai yang akan menjadi nilai b dengan b = y - (m * x).
	Setelah semua komponen dari Slope-intercept didapatkan, pengonversian dapat dilakukan dan dibuat fungsi terakhir untuk menampilkan hasil konversi tersebut.
*/



/* DATA REQUIREMENTS : */
/*	Problem Input    : int get_problem              //pilihan sesuai yang diketahui
					   char chosen                  //pilihan (mengulang atau selesai)
					   double *x1                   //nilai x1 pada fungsi two-point
					   double *y1                   //nilai y1 pada fungsi two-point
					   double *x2                   //nilai x2 pada fungsi two-point
					   double *y2                   //nilai y2 pada fungsi two-point
					   double *x                    //nilai x pada fungsi point-slope
					   double *y                    //nilai y pada fungsi point-slope
					   double *slope                //nilai m pada fungsi point-slope
    Problem Outputs  : double x1                    //nilai x1 pada "two-point form" 
					   double y1                    //nilai y1 pada "two-point form" 
					   double x2                    //nilai x2 pada "two-point form" 
					   double y2                    //nilai y2 pada "two-point form" 
					   double x                     //nilai x pada "point-slope form"
					   double y                     //nilai y pada "point-slope form"
					   double slope                 //nilai m pada "point-slope dan slope-intercept form"
					   double b                     //nilai b pada "slope-intercept form"
*/

/*DESIGN*/
/*	Initial Algorithm:
	1.  Memasukkan pilihan yang diketahui
	-	Jika pilihan 1 (two-point form), maka:
	2.  Memasukkan koordinat titik pertama (x1,y1)
	3.  Memasukkan koordinat titik kedua (x2,y2)
	4.  Mencari nilai m dan b dari input 2 titik
	5.  Menampilkan persamaan awal (two-point form)
	-   Jika pilihan 2 (point-slope form), maka:
	6.  Memasukkan nilai gradien (m) garis
	7.  Memasukkan koordinat titik (x,y)
	8.  Mencari nilai b dari input x dan y
	9.  Menampilkan persamaan awal (point-slope form)
	-   Setelah didapat nilai m dan b
	10. Mengambil hasil nilai m dan b, untuk kemudian
	11. Menampilkan persamaan hasil (slope-intercept form)
*/

/*IMPLEMENTATION*/

#include <stdio.h>

//Prototipe fungsi yang akan digunakan

void get2_pt(double*, double*, double*, double*);                     
void get_pt_slope(double*, double*, double*);
void slope_intcpt_from2_pt(double, double, double, double, double*, double*);
double intcpt_from_pt_slope(double, double, double);
void display2_pt(double, double, double, double);
void display_pt_slope(double, double, double);
void display_slope_intcpt(double, double);

//Fungsi utama tempat pemanggilan fungsi

int main()
{
	char chosen;
	do{
		int get_problem;
		printf("\nPilih formula yang ingin anda konversikan ke formula slope-intercept  :\n");
		printf("1) Formula two-point (anda tahu dua titik pada garis)\n");
		printf("2) Formula point-slope (anda tahu gradien garisnya dan satu titik pada garis)\n=> ");
		scanf("%d", &get_problem);
		
		if(get_problem == 1){
			double x1, y1, x2, y2, slope, b;
			get2_pt(&x1, &y1, &x2, &y2);
			display2_pt(x1, y1, x2, y2);
			slope_intcpt_from2_pt(x1, y1, x2, y2, &slope, &b);
			display_slope_intcpt(slope, b);
			printf("\n");
			printf("\nLakukan konversi lagi (Y atau N): ");
			scanf(" %c", &chosen);
		}
		else if(get_problem == 2){
			double x, y, slope, b;
			get_pt_slope(&x, &y, &slope);
			display_pt_slope(x, y, slope);
			b = intcpt_from_pt_slope(x, y, slope);
			display_slope_intcpt(slope, b);
			printf("\n");
			printf("\nLakukan konversi lagi (Y atau N): ");
			scanf(" %c", &chosen);
		}
	}
	while(chosen != 78);
	return 0;
}

//Definisi fungsi yang digunakan

void get2_pt(double *x1, double *y1, double *x2, double *y2)
{
	printf("\nMasukkan koordinat x-y dari titik pertama (dipisah dengan spasi) => ");
	scanf("%lf", &*x1);
	scanf("%lf", &*y1);
	printf("\nMasukkan koordinat x-y dari titik kedua (dipisah dengan spasi) => ");
	scanf("%lf", &*x2);
	scanf("%lf", &*y2);
}

void get_pt_slope(double *x, double *y, double *slope)
{
	printf("\nMasukkan gradien => ");
	scanf("%lf", &*slope);
	printf("\nMasukkan koordinat x-y dari satu titik (dipisah dengan spasi) => ");
	scanf("%lf", &*x);
	scanf("%lf", &*y);
}

void slope_intcpt_from2_pt(double x1, double y1, double x2, double y2, double *slope, double *b)
{
	*slope = ((y2 - y1) / (x2 - x1));
	*b = y1 - (*slope * x1);
}

double intcpt_from_pt_slope(double x, double y, double slope)
{
	return (y - (slope * x));
}

void display2_pt(double x1, double y1, double x2, double y2)
{
	printf("\nTwo-point form");
	printf("\n %3c (%.2f - %.2f)", ' ', y2, y1);
	printf("\nm = --------------");
	printf("\n %3c (%.2f - %.2f)", ' ', x2, x1);
}

void display_pt_slope(double x, double y, double slope)
{
	printf("\nPoint-slope form");
	printf("\ny - %.2f = %.2f(x - %.2f)", y, slope, x);
}

void display_slope_intcpt(double slope, double b)
{
	printf("\n");
	printf("\nSlope-intercept form");
	printf("\ny = %.2fx + %.2f", slope, b);
}
