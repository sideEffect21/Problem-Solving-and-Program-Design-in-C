/*  Problem: 
            Sebuah rumah sakit menggunakan pompa yang digunakan untuk mengirm obat dan cairan
            yang disalurkan ke intravena. Dibutuhkan progam untuk menunjukkan berapa VTBI 
            (volume obat (ml)) dan kecepatan pompa yang harus diatur (ml/jam), dengan memasukkan jumlah cairan 
            dan jumlah menit dimana harus di infuskan.

    Analysis:
            Untuk VTBI didapatkan dari volume cairan yang harus dimasukkan dalam ml. Diperlukan data 
            Volume obat yang akan diinfuskan. sedangkan dalam menentukan kecepatan pompa diperlukan konversi
            dari menit ke jam, dengan membagi menit yang harus diinfus dengan 60. 
            Setelah dikonversikan kita bisa mencari kecepatan infus dalam ml per jam dengan membagi volume dengan waktu (jam)
    
    Data Requirement:
            Problem Constant: MENIT_KE_JAM 60

            Problem Inputs:
            double volume_yang_diinfus                      // volume obat yang diinfus (VTBI)                      
            double menit_diinfus                            // jumlah menit yang harus diinfuskan

            Problem Outputs:
            double menit_per_jam                            // konversi menit ke jam
            double kecepatan_infus                          // kecepatan obat di infuskan dalam ml/jam

            Relevant Formulas:
            konversi menit ke jam : Menit/60
            kecepatan pompa : volume yang diinfus / konversi ke jam
*/
/*  Initial Algoritm:
    1. Memasukkan data volume obat yang diinfus                                     
    2. Memasukkan data menit yang harus diinfus
    3. Mengkonversi menit yang harus diinfus ke jam
    4. Menghitung Kecepatan infus 
    5. Menampilkan VTBI (volume obat yang akan diinfus) dalam (ml)
    6. Menampilkan kecepatan infus dalam (ml/jam)

   Implementation
   
   Untuk mendapat data volume obat yang akan di infus dan menit yang diinfus, maka perlu Input dari user
   sebagai berikut:
            printf("Volume obat yang akan diinfuskan (ml)=>"); scanf("%lf", &volume_yang_diinfus);
            printf("Menit untuk diinfus =>"); scanf("%lf", &menit_diinfus);
    
   Untuk mengkonversi menit ke jam dan menghitung volume perjamnya digunakan statment 
            menit_per_jam = (menit_diinfus / MENIT_KE_JAM); kecepatan_infus = (volume_yang_diinfus) / menit_per_jam;
   Setelah itu maka ditampilkan VTBI dan kecepatn infus :
            printf("\nVTBI: %lf ml\n", volume_yang_diinfus); printf("Kecepatan Infus: %lf ml/jam", kecepatan_infus);

   


    */

#include <stdio.h>
#define MENIT_KE_JAM 60

int main() {
    double volume_yang_diinfus;
    double menit_diinfus;
    double menit_per_jam;
    double kecepatan_infus;

    printf("Volume obat yang akan diinfuskan (ml)=>");
    scanf("%lf", &volume_yang_diinfus);

    printf("Menit untuk diinfus =>");
    scanf("%lf", &menit_diinfus);
    
    menit_per_jam = (menit_diinfus / MENIT_KE_JAM);
    kecepatan_infus = (volume_yang_diinfus) / menit_per_jam;

    printf("\nVTBI: %lf ml\n", volume_yang_diinfus);
    printf("Kecepatan Infus: %lf ml/jam", kecepatan_infus);

    return 0;



}
            
