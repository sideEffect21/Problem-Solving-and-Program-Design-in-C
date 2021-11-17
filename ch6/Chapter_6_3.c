/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis

    Tanggal: 19 Oktober 2021
            Pembuatan: 18 Oktober 2021
            Modifikasi 1: 19 Oktober 2021
            
    Problem :
    Memerlukan program untuk menampilkan gambar dan menghitung luas dari suatu bangun datar
	
	Analysis :
	Menampilkan gambar bangun datar sesuai inputan user
	Menghitung luas dari bangun datar yang ditampilkan
	
	Data requirements :
		Problem constant :
		double PI = 3.14159	
		
		Problem inputs :
		int 	n							//angka yang diinput
		double 	base, 
				height, 
				radius, \
				short_base, 
				long_base;
		
		Problem output :
		double *area						
		
		Relevant formulas :
		*area = base * height;
		*area = (base * height) / 2;
		*area = PI * radius * radius;
		
	Design :
		Initial algorithm :
		1. Memasukkan n (angka yang diinput)
		2. Membagi-bagi bilangan n
		3. Menampilkan gambar bangun datar sesuai dengan yang diinginkan user	
		4. User menginput data yang diperlukan untuk menghitung luas area
		5. Menghitung luas bangun datar
		6. Menampilkan hasil luas bangun datar
	
	Step refinement :
		5.1 *area = base * height;
		5.1 *area = (base * height) / 2;
		5.1 *area = PI * radius * radius;
	
	Implementation :
	Untuk mendapatkan n (angka yang diinput) input dari user dengan statement sebagai berikut :
	printf("Enter the number of the problem you wish to solve.\n");
    printf("(1) Area of a parallelogram.\n");
    printf("(2) Area of a triangle.\n");
    printf("(3) Area of a trapezoide.\n");
    printf("(4) Area of a cirlce.\n");
    printf("(5) QUIT\n");
    scanf("%d", &n);
	selanjutnya jika n = 5 maka langsung meninggalkan program (quit)
	Lalu, membuat fungsi void baru dengan nama problem_solve yang membutuhkan inputan berupa x dan *area
	Selanjutnya; menggunakan operasi switch case untuk menentukan pilihan dengan case 5 berupa break
	Setelahnya masuk ke dalam case sesuai inputan user dan menampilkan gambar bangun datar
	Untuk mendapatkan data yang digunakan untuk menghitung luas dibutuhkan input dari user dengan statement sebagai berikut :
	printf("enter base of parallelogram\n"); scanf("%lf", &base); printf("enter height of parallelogram\n"); scanf("%lf", &height);
	atau
	printf("enter base of triangle\n"); scanf("%lf", &base); printf("enter height of triangle\n"); scanf("%lf", &height);
	atau
	printf("enter short base of trapezoide\n"); scanf("%lf", &short_base); printf("enter long base of trapezoide\n"); scanf("%lf", &long_base);
	printf("enter height of trapezoide\n"); scanf("%lf", &height);
	atau
	printf("Enter the radius of the circle\n"); scanf("%lf", &radius);
	Setelah didapatkan data tersebut, program menghitung luas area menggunakan rumus
	*area = base * height;
	atau
	*area = (base * height) / 2;
	atau
	*area = PI * radius * radius;
	Selanjutnya hasil penghitungan luas area ditampilkan dalam statement
	printf("The area is: %lf", area);
*/

#include <stdio.h>
#define PI 3.14159
void problem_solve(int , double*);

int main(){
    int n;
    double area;
    printf("Enter the number of the problem you wish to solve.\n");
    printf("(1) Area of a parallelogram.\n");
    printf("(2) Area of a triangle.\n");
    printf("(3) Area of a trapezoide.\n");
    printf("(4) Area of a cirlce.\n");
    printf("(5) QUIT\n");
    scanf("%d", &n);
    problem_solve(n, &area);
    if(n < 5 && n != 0) printf("The area is: %.2lf", area);

    return 0;
}

void problem_solve(int x, double *area){
    double base, height, radius, short_base, long_base;
    switch(x){
        case 1: {
            printf("   __________\n");
            printf("  /         /\n");
            printf(" /         /\n");
            printf("/_________/\n");
            printf("enter base of parallelogram\n");
            scanf("%lf", &base);
            printf("enter height of parallelogram\n");
            scanf("%lf", &height);
            *area = base * height;
            break;
        }
        case 2: {
            printf("   /\\\n");
            printf("  /  \\\n");
            printf(" /    \\\n");
            printf("/______\\\n");
            printf("enter base of triangle\n");
            scanf("%lf", &base);
            printf("enter height of triangle\n");
            scanf("%lf", &height);
            *area = (base * height) / 2;
            break;
        }
        case 3: {
            printf(" ________\n");
            printf("|        \\\n");
            printf("|         \\\n");
            printf("|__________\\\n");
            printf("enter short base of trapezoide\n");
            scanf("%lf", &short_base);
            printf("enter long base of trapezoide\n");
            scanf("%lf", &long_base);
            printf("enter height of trapezoide\n");
            scanf("%lf", &height);
            base = short_base + long_base;
            *area = (base * height) / 2;
            break;
        }
        case 4: {
            printf("             ******                  \n");
            printf("          ****    ****               \n");
            printf("         ***        ***              \n");
            printf("         ***        ***              \n");
            printf("          ****    ****               \n");
            printf("             ******                  \n");
            printf("Enter the radius of the circle\n");
            scanf("%lf", &radius);
            *area = PI * radius * radius;
            break;
        }
        case 5: break;
    }
}

/*
	Enter the number of the problem you wish to solve.
	(1) Area of a parallelogram.
	(2) Area of a triangle.
	(3) Area of a trapezoide.
	(4) Area of a cirlce.
	(5) QUIT
	1
	   __________
	  /         /
	 /         /
	/_________/
	enter base of parallelogram
	5
	enter height of parallelogram
	3
	The area is: 15.00
	
	Enter the number of the problem you wish to solve.
	(1) Area of a parallelogram.
	(2) Area of a triangle.
	(3) Area of a trapezoide.
	(4) Area of a cirlce.
	(5) QUIT
	2
	   /\
	  /  \
	 /    \
	/______\
	enter base of triangle
	5
	enter height of triangle
	3
	The area is: 7.50
	
	Enter the number of the problem you wish to solve.
	(1) Area of a parallelogram.
	(2) Area of a triangle.
	(3) Area of a trapezoide.
	(4) Area of a cirlce.
	(5) QUIT
	3
	 ________
	|        \
	|         \
	|__________\
	enter short base of trapezoide
	5
	enter long base of trapezoide
	4
	enter height of trapezoide
	3
	The area is: 13.50
	
	Enter the number of the problem you wish to solve.
	(1) Area of a parallelogram.
	(2) Area of a triangle.
	(3) Area of a trapezoide.
	(4) Area of a cirlce.
	(5) QUIT
	4
	             ******                  
	          ****    ****               
	         ***        ***              
	         ***        ***              
	          ****    ****               
	             ******                  
	Enter the radius of the circle
	7
	The area is: 153.94
		
	Enter the number of the problem you wish to solve.
	(1) Area of a parallelogram.
	(2) Area of a triangle.
	(3) Area of a trapezoide.
	(4) Area of a cirlce.
	(5) QUIT
	5
	
	Testing :
	Dalam kasus uji tersebut, dimasukkan data inputan berupa n (angka yang diinput) (dicoba satu-satu)
	Output yang dihasilkan sudah benar yaitu berupa gambar bidang datar beserta luas areanya
	Dengan catatan saat n dinput 5 maka akan keluar dari program
*/
