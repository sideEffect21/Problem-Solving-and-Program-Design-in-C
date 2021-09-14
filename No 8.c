/*  Problem: 
            Perencana Kota Metro mengusulkan agar masyarakat menghemat pasokan airnya denga mengganti semua toilet masyarakat dengan model low flush 
            Dibutuhkan program untuk memperkirakan banyaknya volume air yang dihemat dan biaya yang dibutuhkan setelah mengganti toilet berdasarkan jumlah penduduk,
            toilet masyarakat biasanya menggunakan 15 liter air per flush menggantinya dengan model low flush dengan hanya menggunakan 2 liter per flush. 
            dengan catataan setiap toilet untuk 3 orang dan setiap hari rata rata toilet disiram/diflush 14 kali. Biaya untuk memasang setiap toilet baru adalah $150. 

    Analysis:
            Dibutuhkan data jumlah penduduk Untuk menghitung banyaknya air yang dihemat setiap hari dan biaya yang dibutuhkan. Jumlah toilet diperoleh dengan
            membagi jumlah penduduk dengan tiga kemudian menghitung berapa liter yang digunakan setiap model toilet baru dan toilet lama setiap hari. 
            Karena setiap hari rata rata toilet dipakai 14 kali maka tiap model toilet dikalikan 14 ,maka Jumlah toilet dikali 14 dikali liter per flush masing masing 
            model toilet. maka akan ditemukan Banyaknya liter air yang dibutuhkan dari toilet baru dan toilet lama. dengan mengurangi banyak liter air antara 
            model lama dan baru maka ditemukan banyaknya volume air yang dihemat. Biaya yang dibutuhkan untuk menghemat dapa di peroleh dengan mengalikan jumlah toilet 
            dengan biaya memasang toilet baru.
            
    
    Data Requirement:
            Problem Constant: 
            FLUSH_PER_HARI 14
            BIAYA_TOILET $150
            ORANG 3
            LITER_TOILET_LAMA 15
            LITER_TOILET_BARU 2
            

            Problem Inputs:
            double jumlah_penduduk                        // jumlah penduduk yang ingin dihitung penghematannya

            Problem Outputs:
            double banyak_toilet                          // jumlah total toilet yang diperlukan 
            double air_toilet_lama                        // volume per liter air yang digunakan oleh toilet model lama setiap harinya
            double air_toilet_baru                        // volume per liter air yang digunakan oleh toilet baru (low flush) setiap harinya                         
            double air_yang_dihemat                       // liter air yang dihemat setelah menggunakan toilet baru
            double biaya_yang_dibutuhkan                  // Biaya yang digunakan untyuk melakukan penghematan (memasang toilet baru) untuk 
                                                             seluruh penduduk.

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
   
   Untuk mendapat data jumlah penduduk maka diperlukan input menggunakn statment
            printf("Masukkan jumlah penduduk =>");
            scanf("%lf", &jumlah_penduduk);
   Untuk menghitung jumlah toilet berdsarkan penduduk yang mennggunakan toilet :
            banyak_toilet= jumlah_penduduk / 3 ;
    
   Untuk menghitung liter air yang dipakai tiap toilet tiap hari :
            air_toilet_lama = banyak_toilet * LITER_TOILET_LAMA * 14;
            air_toilet_baru = banyak_toilet * LITER_TOILET_BARU * 14;
   Untuk menghitung penghematan air per liter setiap hari :
            air_yang_dihemat = air_toilet_lama - air_toilet_baru;
   Setelah itu maka ditampilkan air yang dapat dihemat dan biaya yang harus digunakan :
   printf("\nAir yang dihemat = %lf liter/hari ", air_yang_dihemat);
   printf("\nBiaya yang dibutuhkan = $%lf ", BIAYA_TOILET * banyak_toilet);

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
            
