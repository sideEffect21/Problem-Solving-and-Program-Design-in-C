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
        	Pembuatan: 16/10/2021
        	/*
PROBLEM
Buatlah program yang mengevaluasi ekspresi (2x+1/2x-1)^2 dengan 
x= 1,2,3 dan seterusnya
INPUT
> nilai dari  x
OUTPUT
  > perkiraan nilai e, nilai e sebenarnya, dan nilai akhir dari x

IMPLEMENTATION
1. buatlah fungsi untuk mengembalikan nilai mutlak
2.buatlah fungsi untuk menghitung nilai x dan merubahnya menjadi y
3.looping selama perbedaan mutlak dari perkiraan e dan nilai
asli e tidak kurang dari TOL
4. setelah loop selesai, tampilkan perkiraan nilai e dan nilai x akhir
*/
#include<stdio.h>

//buatlah fungsi mengembalikan nilai mutlak  dari suatu angka 
//(akan menghilangkan tanda negatif)
float absval(float a){
        return (a<0) ? -a : a;
}

//buatlah fungsi untuk menghitung nilai x dan merubahnya menjadi y
float power(float x, int y){
        if(y==0){
                return 1;
        }
        else if(y==1){
                return x;
        }
        else{
                return x*power(x,y-1);
        }
}
//buatlah fungsi yang akan menghitung e dengan x yang ditentukan
float estimate_e(int x){
        float res=power((2.0*x+1)/(2.0*x-1),x);
        return res;
}

int main(){
        //masukan variabel yang akan di gunakan
        float e=2.7182812; //nilai asli dari e
        float TOL=0.000001; //toleransi nilai e
        int x=1; //nilai awal dari x
        float estimate=estimate_e(x); //estimasi awal dari x
        //looping selama perbedaan mutlak dari perkiraan e dan nilai
        //asli e tidak kurang dari TOL
        while(absval(estimate-e)>=TOL){
                x++;
                estimate=estimate_e(x);
        }
        //setelah loop selesai, tampilkan perkiraan nilai e dan nilai x akhir
        printf("Estimasi e: %.7f\n",estimate);
        printf("nilai asli e: %.7f\n",e);
        printf("nilai akhir x: %d\n",x);
        return 0;       
}
