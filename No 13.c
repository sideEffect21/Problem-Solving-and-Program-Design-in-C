
/*  Problem: 
            Dibutuhkan program untuk memprediksi banyak seluruh bagian dari satu kelompok, dan membuat jumlah siswa yang terdaftar di dalam kelompok dengn asumsi 
            setiap bagian menampung 30 siswa. output yang dikeluarkan adalah jumlah siswa yang terdaftar, bagian yang diperlukan, dan jumlah siswa yang tersisa. 
    Analysis:
            Dengan memasukkan banyak  peserta yang terdaftar maka dapat dicari bagiannya dengan membagi banyak peserta yang terdaftar dengan 30.
            Setelah itu mencari jumlah siswa yang tersisa dengan operasi modulo jumlah siswa yang terdaftar dengan akomodasi 30 siswa tiap bagian.
            
    
    Data Requirement:
            SISWA_TIAP_BAGIAN 30
            
            Problem Inputs:
            int peserta_terdaftar
            
            Problem Outputs:
            int bagian_diperlukan 
            int siswa_yang_tersisa
         
            Relevant Formulas:
            Bagian yang diperlukan = Jumlah siswa terdaftar / akomodasi siswa tiap bagian (30)
            Siswa yang tersisa = Jumlah siswa terdaftar % akomodasi siswa tiap bagian (30)
*/
/*  Initial Algoritm:
    1. Memasukkan data siswa yang terdaftar
    2. Menghitung bagian kelompok yang diperlukan 
    3. Menghitung banyak Siswa yang tersisa
    4. menampilkan jumlah siswa yang terdaftar, bagian yang diperlukan, dan jumlah siswa yang tersisa
   
    
   Implementation
   
   Untuk mendapat data banyak siswa yang terdaftar, maka perlu Input dari user
   sebagai berikut:
            printf("Enter the number of students enrolled: ");
            scanf("%d", &peserta_terdaftar);
    
   Untuk menghitung bagian yang diperlukan dan jumlah siswa yang tersisa digunakan statment 
            bagian_diperlukan = peserta_terdaftar/ SISWA_TIAP_BAGIAN ;
            siswa_yang_tersisa = peserta_terdaftar % SISWA_TIAP_BAGIAN ;
   Setelah itu maka ditampilkan jumlah siswa yang terdaftar, bagian yang diperlukan, dan jumlah siswa yang tersisa:
            printf("Dengan %d Siswa terdaftar, Bagian yang diperlukan: %d\nSiswa yang tersisa: %d\n",
            peserta_terdaftar ,bagian_diperlukan, siswa_yang_tersisa);
    */

#include <stdio.h>
#include <math.h>

#define SISWA_TIAP_BAGIAN 30

int main() {
  int peserta_terdaftar, bagian_diperlukan , siswa_yang_tersisa;

  printf("Enter the number of students enrolled: ");
  scanf("%d", &peserta_terdaftar);

  bagian_diperlukan = peserta_terdaftar/ SISWA_TIAP_BAGIAN ;
  siswa_yang_tersisa = peserta_terdaftar % SISWA_TIAP_BAGIAN ;

  printf("Dengan %d Siswa terdaftar, Bagian yang diperlukan: %d\nSiswa yang tersisa: %d\n",
      peserta_terdaftar ,bagian_diperlukan, siswa_yang_tersisa);
  
  return 0;
}



            
