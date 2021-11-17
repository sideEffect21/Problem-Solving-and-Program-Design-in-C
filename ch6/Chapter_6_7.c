/*
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis

    Tanggal pembuatan: 18 Oktober 2021
    modifikasi 1: 18 Oktober 2021

    Problem:
        membuat program yang bisa menghitung perkiraan hasil akar dari bilangan inputan user
        menggunakan metode pengulangan rumus yang tersedia hingga ditemukan nilai yang mendekati hasil asli

    Analysis:
        untuk membuat program ini, kita perlu input dari user berupa angka yang ingin dicari hasil akarnya,
        lalu kita membuat fungsi yang berisi pengulangan rumus untuk mendapatkan output berupa hasil akar,
        kemudian kita dapat memanggil fungsi tersebut menggunakan pointer sebagai output parameter
        dan menampilkannya pada user

    Data requirements:
        Problem inputs:
            double n
            double guess

        Problem outputs:
            double result

    Relevant formulas:
            NG = 0.5(LG + N/LG);

    DESIGN
        Initial Algorithm:
            1. memasukkan data angka yang akan dicari hasil akarnya
            2. membuat fungsi untuk menghitung hasil akar
            3. memanggil fungsi
            4. menampilkan hasilnya pada user

    refinement
        2.1 fungsi untuk menghitung hasil akar dengan pointer sebagai output parameter
            double root(double num, double *lg)
            {
                double guess;
                printf("enter a guess: ");
                scanf("%lf", &guess);
                double ng;

                do{
                    ng = 0.5 * (guess + num/guess);
                    guess = ng;
                }while((ng * ng - num) > 0.005);

                *lg = ng;
            }

    IMPLEMENTATION
        untuk mendapatkan data angka yang akan dicari hasil akarnya dan , kita perlu input dari user dengan statement:
            printf("enter a number: ");
            scanf("%lf", &n);

        lalu kita dapat membuat fungsi untuk mencari hasil akar dari angka inputan menggunakan statement:
            double root(double num, double *lg)
            {
                double guess;
                printf("enter a guess: ");
                scanf("%lf", &guess);
                double ng;

                do{
                    ng = 0.5 * (guess + num/guess);
                    guess = ng;
                }while((ng * ng - num) > 0.005);

                *lg = ng;
            }

        dan kita dapat mendeklarasi dan memanggil fungsi dengan statement:
            double root(double, double*);
            root(n, &result);

        untuk menampilkan hasilnya pada user, kita dapat menggunakan statement:
            printf("%f", result);

 */

#include <stdio.h>
#include <math.h>

//deklarasi fungsi
double root(double, double*);

int main()
{
    double n, result;
    printf("enter a number: ");
    scanf("%lf", &n);

    root(n, &result); //pemanggilan fungsi
    printf("%f", result);
    return 0;
}

//fungsi untuk mencari akar dari bilangan inputan
double root(double num, double *lg)
{
    double guess;
    printf("enter a guess: ");
    scanf("%lf", &guess);
    double ng;

    do{
        ng = 0.5 * (guess + num/guess);
        guess = ng;
    }while((ng * ng - num) > 0.005);

    *lg = ng;
}
