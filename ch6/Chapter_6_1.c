/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
Tanggal	:18/10/2021
*/
/*
Problem		: menghitung banyaknya angka ganjil dan angka genap pada sebuah bilangan bulat.

Analysis	: untuk memnentukan banyaknya angka ganjil dan genap pada sebuah bilangan bulat dapat dilakukan dengan mod 10 bilangan input untuk mendapat sisa.
*/
/*
Data requirements :
		Problem input		:	int num		//input bilangan bulat
		Problem output		:	int odd		//banyaknya bilangan ganjil
								int even	//banyaknya bilangan genap
*/
/*
Design:
	Initial algorithm :
	1.	Memasukkan bilangan bulat
	2.	Mengerjakan if, else untuk pengelompokkan bilangan ganjil dang genap
	3.	Menampilkan bilangan ganjil dang genap
*/
/*
Implementation:
	Untuk menghitung banyaknya angka ganjil dan angka genap pada sebuah bilangan bulat,
	maka perlu ada input dari user dengan statement sebagai berikut:
    printf("Enter the number:");
    scanf("%d",&num);

	Setelah didapat banyaknya angka ganjil dan angka genap pada sebuah bilangan bulat, nilai ini ditampilkan kepada user:
    printf("Number of even digits = %d\n",even);
    printf("Number of odd digits = %d",odd);
*/

#include<stdio.h>
int main()
{
    int num;											//input bilangan bulat
    printf("Enter the number : ");						//perintah memasukkan bilangan butat 
    scanf("%d",&num);									//memasukkan bilangan bulat
    int odd=0,even=0;									//sebagai outpul bilangan ganjil genap
    while(num!=0)									
    {
        int sisa=num%10;								//untuk pengelompokkan bilangan ganjil genap
        if(sisa%2==1)									//pengelompokkan bilangan ganjil
            odd++;
        else											//pengelompokkan bilangan genap
            even++;
        num/=10;
    }
    printf("Number of even digits = %d\n",even);		//output banyaknya bilangan genap
    printf("Number of odd digits = %d",odd);			//output banyaknya bilangan ganjil
}
/* Outputs :
Enter the number :
Number of even digits = 
Number of odd digits = 

Exaple :
Enter the number : 1234
Number of even digits = 2
Number of odd digits = 2
*/ 
