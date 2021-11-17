/*	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
    
   TANGGAL :
   Pembuatan: 18 Oktober 2021
   Modifikasi 1: -

   PROBLEM
    Buatlah program untuk menghitung n! untuk nomor n yang diberikan dan lakukan yang sederhana
    operasi kalkulator. Operasi kalkulator yang valid adalah:
    + tambahkan
    - sub
    * banyak
    / div
    Program harus berisi fakta fungsi dengan satu parameter input yang mengembalikan faktorial suatu bilangan, 
    suatu fungsi tambah yang melakukan penjumlahan dua angka, sub fungsi yang melakukan pengurangan dua angka, a
    fungsi mul yang melakukan perkalian dua bilangan, fungsi div yang melakukan pembagian dua bilangan. Program juga 
    harus memeriksa data masukan yang buruk.

   ANALYSIS
   Untuk menampilkan hasil dari operasi, maka dibutuhkan data berupa
   inputan yaitu

   Data Requirements :
   char choice
   double a
   double b

   Problem Outputs:
   double add
   double sub
   double mul
   double division
   double fact
DESIGN
Algorithm:
    1. Mendeklarasikan variabel dan fungsi
    2. Membuat pernyataan switch case untuk setiap choice/pilihan
    3. Memasukkan inputan angka
    4. Menghitung angka yang dimasukkan menggunakan operasi yang akan dipilih user
    5. Pada output ditampilkan choice/pilihan yang akan dipilih oleh user
    6. Menampilkan hasil perhitungan

IMPLEMENTATION
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 

int run(void); //fungsi pilihan
int fact(int n); //fungsi factorial
double add(double a, double b); // fungsi addition
double sub(double a, double b); // fungsi subtraction
double mul(double a, double b); // fungsi multiplication
double division(double a, double b); // fungsi division
int n, 
fac = 1; 
double a, b; 

int main(void) { 
   run();

   return 0;
}

int run(void) {
   char choice; 
   n = 1;
   printf("1: Addition \n2: Subtraction \n3: Mutiplication \n4: Division \n5: Factorial \n6: Quit \nEnter the choice => ");
   scanf("\r");
   scanf("%c", &choice);
   switch (choice) {
        case '1':
            printf("Enter two numbers => ");
            scanf("%lf, %lf", &a, &b);
            printf("Sum => %.2lf", add(a, b));
            break;
        case '2':
            printf("Enter two numbers => ");
            scanf("%lf, %lf", &a, &b);
            printf("Difference => %.2lf", sub(a, b));
            break;
        case '3':
            printf("Enter two numbers => ");
            scanf("%lf, %lf", &a, &b);
            printf("Product => %.2lf", mul(a, b));
            break;
        case '4':
            printf("Enter two numbers => ");
            scanf("%lf, %lf", &a, &b);
            printf("Quotient => %.2lf", div(a, b));
            break;
        case '5':
            printf("Enter a number => ");
            scanf("%d", &n);
            if (fact(n) == -1) printf("Invalid Number.");
            else printf("Result => %d", fact(n));
            break;
        case '6':
            return 0; 
        default:
            printf("Invaild choice!");
   }
   printf("\n");
   fac = 1; //reset hasil factorial
   a = b = 0; // reset kedua angka karena akan diulang
   run();
}

int fact(int n) {
   if (n < 0) return -1;
   else if (n == 0) return 1;
   else if (n == 1) return fac;
   else {
       fac *= n;
       n--;
       fact(n); 
   }
}

//pemanggilan fungsi
double add(double a, double b) {
   return (a + b);
}
double sub(double a, double b) {
   return (a - b);
}
double mul(double a, double b) {
   return (a * b);
}
double division(double a, double b) {
   return (a / b);
}

/*TESTING
dimasukkan inputan sesuai dengan soal, yaitu 
Enter the choice => 1
Enter two numbers => 2, 3
maka benar, hasil yang ditampilkan adalah
Sum => 5.00
*/