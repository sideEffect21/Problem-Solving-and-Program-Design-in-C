
/*  Problem: 
            Dibutuhkan program untuk memprediksi banyak seluruh bagian dari satu kelompok, dan membuat jumlah siswa yang terdaftar di dalam kelompok dengn asumsi 
            setiap bagian menampung 30 siswa. output yang dikeluarkan adalah jumlah siswa yang terdaftar, bagian yang diperlukan, dan jumlah siswa yang tersisa. 
    Analysis:
            Dengan memasukkan banyak  peserta yang terdaftar maka dapat dicari bagiannya dengan membagi banyak peserta yang terdaftar dengan 30.
            Setelah itu mencari jumlah siswa yang tersisa dengan operasi modulo jumlah siswa yang terdaftar dengan akomodasi 30 siswa tiap bagian.
            
    
    Data Requirement:
            SISWA_TIAP_BAGIAN 30
            
            Problem Inputs:
            double peserta_terdaftar
            
            Problem Outputs:
            double bagian_diperlukan 
            double siswa_yang tersisa
         
            Relevant Formulas:
            banyak toilet = jumlah penduduk / ORANG
            air yang digunakan toilet = banyak toilet * LITER_TOILET * 14
            air yang dihemat = air toilet lama - air toilet baru
            biaya yang dibutuhkan = banyak toilet * biaya toilet
*/
/*  Initial Algoritm:
    1. Memasukkan data jumlah penduduk
    2. Menghitung jumlah toilet 
    3. Menghitung penggunakan liter air per hari di toilet lama
    4. Menghitung penggunakan liter air per hari di toilet baru
    5. Menghitung air yang di hemat setelah menggunakan toilet baru
    6. Menghitung biaya yang di butuhkan untuk melakukan penghematan 
    
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
#define FLUSH_PER_HARI 14 
#define BIAYA_TOILET 150 
#define LITER_TOILET_LAMA 15
#define LITER_TOILET_BARU 2 

int main() {
   double jumlah_penduduk;
   double banyak_toilet;
   double air_toilet_lama;
   double air_toilet_baru;
   double air_yang_dihemat;
   double biaya_yang_dibutuhkan;

    printf("Masukkan jumlah penduduk =>");
    scanf("%lf", &jumlah_penduduk);
    
    banyak_toilet= jumlah_penduduk / 3 ;
    air_toilet_lama = banyak_toilet * LITER_TOILET_LAMA * 14;
    air_toilet_baru = banyak_toilet * LITER_TOILET_BARU * 14;
    air_yang_dihemat = air_toilet_lama - air_toilet_baru;
    

    printf("\nAir yang dihemat = %lf liter/hari ", air_yang_dihemat);
    printf("\nBiaya yang dibutuhkan = $%lf ", BIAYA_TOILET * banyak_toilet);

    return 0;

}
            
