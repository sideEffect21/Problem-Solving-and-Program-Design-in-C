
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
        	Pembuatan: 18 Oktober 2021

*/ 

/* 	Problem:
/*	Sebuah perusahaan pemasok rumah sakit ingin memasarkan sebuah program untuk membantu penghitungan kecepatan pembuluh darah. 
	Oleh karena itu, diperlukan program untuk menghitung kecepatan pembuluh darah.
*/
 	
	 
/* 	Analysis:
/*	Perhitungan kecepatan pembuluh darah bisa didapat dengan memasukkan input yang terdiri dari 5 macam problem. Problem 1, dimasukkan data
	kecepatan dalam mililiter per jam dan faktor tetes dalam tetes per jam. Setelah itu, kedua data tersebut dibagi dan satuan waktu di-
	konversikan ke menit, sehingga diperoleh hasil kecepatan dalam tetesan per menit. Problem 2, dimasukkan data 1 liter untuk n jam. Kemudian,
	konversikan satuan liter menjadi mililiter dan dibagi dengan n jam, sehingga akan menghasilkan kecepatan dalam mililiter per jam. 
	Problem 3, dimasukkan data kecepatan dalam miligram atau kilogram per jam, berat badan pasien dalam kilogram, dan konsentrasi dalam miligram
	per mililiter. Setelah itu, ketiga data dikalikan untuk mendapatkan kecepatan dalam mililiter per jam. Problem 4, dimasukkan data kecepatan 
	dalam units per jam dan konsentrasi dalam units per mililiter. Selanjutnya, kedua data tersebut dibagidan akan menghasilkan kecepatan 
	dalam mililiter per jam. Yang terakhir problem 5 untuk quit.
*/



/* Data Requirements : */
/*	
	Problem Constant: 
	
	Problem Inputs: 
	double rate					    //memasukkan kecepatan pembuluh darah
	double drop_factor		        //memasukkan data faktor tetes
	double hour				 	    //memasukkan data jam 
	double berat			        //memasukkan data berat badan pasien
	double rate_weight				//memasukkan data kecepatan berdasarkan berat
    double kekentalan               //memasukkan data kekentalan darah
    double rate_unit                //memasukkan data kecepatan pembuluh darah berdasarkan per unit
	
	Problem Outputs:
	double faktor_tetes_menit       //Hasil perhitungan faktor tetes per menit
    double rate                     //Hasil kecepatan pembuluh darah
    double rate_hour                //Hasil kecepatan mili per jam

*/


/*Design*/
/*Initial Algorithm
1. Membuat protoype fungsi dari inputan masalah
2. Menyusun perhitungan di dalam fungsi untuk output yang dibutuhkan
3. Memanggil fungsi secara berulang untuk memudahkan penyelesaian masalah
4. Menampilkan hasil perhitungan yang dibutuhkan
*/

/*Step 3 refinement
3.1. faktor tetes per menit : rate / 60 x drop_factor
3.2. kecepatan berdasarkan berat : rate_weight x weight / kekentalan 
3.3 kecepatan berdasarkan unit : rate_unit / kekentalan unit
*/

/*Implementation
Untuk memudahkan mengingat fungsi yang terdapat pada program maka dibuat prototype fungsi
double get_problem(double rate);
double get_rate_drop_factor(double faktor_tetes_menit);
double get_kg_rate_conc(double rate_weight);
double units_conc(double rate_unit);
Untuk memasukkan data yang dibutuhkan maka diperlukan input dari fungsi get_problem yang berisi statement
printf("Masukkan data kecepatan pembuluh darah>\n"); scanf("%lf%lf", &rate, &hour);
Untuk memudahkan program yang maka dibutuhkan perulangan
for(i = 0; i < 4; i++){
    if(i == 0){
        get_rate_drop_factor(faktor_tetes_menit){        //Perhitungan faktor tetes per menit
            faktor_tetes_menit = (rate / 60) * drop_factor;
            return faktor_tetes_menit;
        }
        printf("the drop rate per minute is %lf\n", faktor_tetes_menit);
    }    
    if(i == 1){
        get_kg_rate_conc(rate_weight){                //Perhitungan kecepatan berdasaarkan berat badan pasien
            rate = (rate_weight * weight) / kekentalan;
            return rate;

        }
        printf("the rate in mililiter per hour is %lf\n", rate);
    }
    if(i == 2){
        units_conc(rate_unit){
            rate = rate_unit / kekentalan;
            return rate;
        }
        printf("the rate in mililiter per hour is %lf\n", rate);
    }    
}
untuk menampilkan jam yang dilakukan 
printf("kecepatan darah selama %lf", hour);
*/

#include <stdio.h>
#include <math.h>

//prototype fungsi dari input kecepatan pembuluh darah
double get_problem(double rate);
//prototype fungsi dari perhitungan faktor tetes
double get_rate_drop_factor(double faktor_tetes_menit);
//prototype fungsi dari perhitungan kecepatan berdasarkan waktu
double get_kg_rate_conc(double rate_weight);
//prototype fungsi dari perhitungan waktu berdasarkan per unit
double units_conc(double rate_unit);

int main(){
    double rate;					    //Inputan kecepatan pembuluh darah
	double drop_factor;		        //Inputan data faktor tetes
	double hour;				 	//Inputan data jam 
	double berat;			        //Inputan data berat badan pasien
	double rate_weight;				//Inputan data kecepatan berdasarkan berat
    double kekentalan;              //Inputan data kekentalan darah
    double rate_unit;               //Inputan data kecepatan pembuluh darah berdasarkan per unit
    double faktor_tetes_menit;       //output dari Hasil perhitungan faktor tetes per menit
    double rate;                     //output dari Hasil kecepatan pembuluh darah
    double rate_hour;                //output dari Hasil kecepatan mili per jam

    get_problem(rate){        //Untuk memasukkan data kecepatan pembuluh darah
        printf("Masukkan data kecepatan pembuluh darah>\n"); scanf("%lf%lf", &rate, &hour);
    }
    for(i = 0; i < 4; i++){
        if(i == 0){
            get_rate_drop_factor(faktor_tetes_menit){        //Perhitungan faktor tetes per menit
            faktor_tetes_menit = (rate / 60) * drop_factor;
            return faktor_tetes_menit;
            }
        printf("the drop rate per minute is %lf\n", faktor_tetes_menit);
        }    
        if(i == 1){
            get_kg_rate_conc(rate_weight){                //Perhitungan kecepatan berdasaarkan berat badan pasien
                rate = (rate_weight * weight) / kekentalan;
                return rate;

            }
        printf("the rate in mililiter per hour is %lf\n", rate);
        }
        if(i == 2){
            units_conc(rate_unit){
                rate = rate_unit / kekentalan;
                return rate;
            }
        printf("the rate in mililiter per hour is %lf\n", rate);
    }    
    }
    //untuk menampilkan jam yang dilakukan 
    printf("kecepatan darah selama %lf", hour);


}

/*Testing
Problem> 1 
Enter rate in ml/hr=> 150 
Enter faktor_tetes_menit(drops/ml)=> 15 
The drop rate per minute is 38.

Problem=> 2 
Enter number of hours=> 8 
The rate in milliliters per hour is 125.

Problem=> 3 
Enter rate_weight in mg/kg/hr=> 0.6 
Enter pasien weight in kg=> 70 
Enter kekentalan in mg/ml=> 1 
The rate in milliliters per hour is 42

Problem=> 4 
Enter rate_unit in units/hr=> 1000 
Enter concentration in units/ml=> 25 
The rate in milliliters per hour is 40.

Dalam uji kasus tersebut dimasukan masing-masing tiap masalah dengan output yang berada pada baris terbawah
*/