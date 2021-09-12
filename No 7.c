/*  

    Problem: 
            Dibutuhkan suatu program untuk menghitung banyak BTU panas yang dikirim ke rumah dengan menggunakan data 
            jumlah galon minyak yang terbakar dan efisiensinya. Di asumsikan 42 galon minyak memiliki energi
            5.800.000 BTU.

    Analysis:
            Untuk mendapatkan BTU panas yang dikirim ke tiap rumah dibutuhkan perhitungan jumlah BTU per galon minyak dengan 
            mengalikannya dengan Asumsi 42 galon minyak setara dengan 5.800.000 BTU. kemudian kalikan dengan efisiensi yang digunakan. 
            Hasil merupakan banyak BTU yang dikirim tiap rumah sesuai dengan galon minyak yang terbakar dan efisiensinya 
    
    Data Requirement:
            Problem Constant: BTU_PER_GALON (5800000 / 42)

            Problem Inputs:
            double jumlah_galon
            double persentase_efisiensi
            double btu_per_galon

            Problem Outputs:
            double hasil_btu_per_galon

            Relevant Formulas:
            Tiap galon menghasilkan BPU :Jumlah galon * BTU per galon
            Hasil akhir BPU : hasil BPU per galon * efisiensi
*/
/*  Initial Algoritm:
    1. Memasukkan data jumlah galon 
    2. Memasukkan data efisiensi
    3. menghitung BTU per galon
    4. Menghitung BPU dengan efisiensi 
    5. Menampilkan BPU akhir


   Implementation
   
   Untuk mendapat data jumlah galon minyak dan persentase efisiensi , maka perlu Input dari user
   sebagai berikut:
            printf("Banyak galon minyak =>"); scanf("%lf", &jumlah_galon);
            printf("Efisiensi (%) =>"); scanf("%lf", &persentase_efisiensi);
    
   Untuk menghitung BTU per galon sesuai efisiensinya digunakan statment 
             btu_per_galon = (jumlah_galon * BTU_PER_GALON); 
             hasil_btu_per_galon = (btu_per_galon) * persentase_efisiensi;
   Setelah itu maka ditampilkan hasil akhir Banyak BTU yang dikirim tiap rumah menggunakan statment :
            printf("Banyak BTU yang dikirim: %lf BTU", hasil_btu_per_galon);


    */

#include <stdio.h>
#define BTU_PER_GALON (5800000 / 42)

int main() {
    double jumlah_galon;
    double persentase_efisiensi;
    double hasil_btu_per_galon;
    double btu_per_galon;

    printf("Banyak galon minyak =>");
    scanf("%lf", &jumlah_galon);

    printf("Efisiensi (%) =>");
    scanf("%lf", &persentase_efisiensi);
    
    btu_per_galon = (jumlah_galon * BTU_PER_GALON);
    hasil_btu_per_galon = (btu_per_galon) * persentase_efisiensi;

    printf("Banyak BTU yang dikirim: %lf BTU", hasil_btu_per_galon);

    return 0;



}
