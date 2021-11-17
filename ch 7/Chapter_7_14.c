/* 	
	Ditulis oleh: 
	Nrp: 
	Nama: 
*/
 
/* Tanggal: 
        	Pembuatan: 01/11/2021
        	
/*
PROBLEM
Tulis program yang memasukkan polinomial dengan derajat maksimum 8 dan kemudian
mengevaluasi polinomial pada berbagai nilai x

INPUT
derajat polinomial
nilai pada posisi suatu polinomial
OUTPUT
 Persamaan  yang sudah dievaluasi
IMPLEMENTATION
1. buatlah prototype function
2. buatlah fungsi untuk mendapatkan x sebagai nilai input dan nilai untuk nilai persamaan akhir
3. buatlah fungsi get_poly untuk mendapakan nilai dan derajat polinomial
4. buatlah fungsi eval_poly untuk mengevaluasi nilai polinomial
5.print hasilnya 
*/

#include<stdio.h>

//function prototypes

void get_poly(double coeff[],int* degreep);

double eval_poly(const double coeff[], int degree, double x);

int main(){

               

                double coeff[9]; //array untuk menyimpan koefisien

                int degree;
               

                //panggil fungsi get_poly

                get_poly(coeff,&degree);

               

                //x untuk nilai input dan nilai untuk nilai persamaan akhir

                double x, value;

                //dapatkan nilai x

                printf("Enter value to evaluate equation at: ");

                scanf("%lf",&x);

                //panggil fungsi eval_poly

                value = eval_poly(coeff,degree,x);

                //print nilai persamaan nya
                printf("\n\nEquation evaluated at %lf is %lf",x,value);

               

                return 0;

}

void get_poly(double coeff[],int* degreep){

                //dapatkan derajat polinomial dan evaluasi
                while(1){

                                *degreep = printf("Input degree of polynomial: ");

                                scanf("%d",degreep);

                                //jika invalid print : 

                                if(*degreep<0 | *degreep>8){

                                                printf("\n\nWrong degree for polynomial. Enter a number in range 0-8.\n");

                                }

                                //jika benar break loopnya

                                else{

                                                break;

                                }             

                }

                //print degree

                printf("\nDegree is: %d\n\n",*degreep);

               

                int i;//untuk mengulangi

                //dari 0 hingga derajat dapatkan setiap nilai posisi

                for(i=0;i<=*degreep;i++){

                                printf("Enter value for position %d: ",i);

                                scanf("%lf",&coeff[i]);

                                printf("\n\n");

                }

}

double eval_poly(const double coeff[], int degree, double x){

                int i;//untuk mengulangi

                double power = 1; //untuk menyimpan x pangkat derajat. 

                double value = 0; //untuk menyimpan nilai persamaan

                for(i=0;i<=degree;i++){

                                
								//tambahkan coeff[i]*power ke variabel nilai

                                value = value + coeff[i]*power;

                                //increment power dari x

                                power = power*x;

                }

                //return nilai persamaan akhir

                return value;

}
