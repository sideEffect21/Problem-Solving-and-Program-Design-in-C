/*  	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
*/

/*  Tanggal: 18 oktober 2021
    Pembuatan: konduksi termal
*/
  
// Problem: Pada kasus ini program berisi pencarian salah satu variabel yang menginput var berupa tanda '?'
// Analisis: menuliskan fungsi sebanyak 6 kali sesuai variabel yang ada di rumus

/* Data requirement: 
    Rate of heat transfer (watts) >> 755.0
    Coefficient of thermal conductivity (W/m-K) >> 0.8
	Cross-sectional area of conductor (m^2) >> 0.12
	Temperature on one side (K) >> 298
	Temperature on other side (K) >> ?   //variabel t1 atau Temperature on other side ditulis tanda tanya untuk mengecek rumus.
	Thickness of conductor (m) >> 0.003
*/

/* Implementasi: 
	menuliskan enam fungsi bertipe data double yang berisi variabel di dalam rumus disertai dengan satu fungsi berisikan fungsi strcmp() untuk membandingkan string atau karakter, dan fungsi int main().
  	prototipe fungsi berisi : double calc_h(double k, double a, double t1, double t2, double x); // prototipe fungsi
							  double calc_k(double h, double a, double t1, double t2, double x);
							  double calc_a(double k, double h, double t1, double t2, double x);
							  double calc_t2(double h, double a, double t1, double k, double x);
							  double calc_t1(double h, double a, double k, double t2, double x);
							  double calc_x(double k, double h, double t1, double t2, double a);
							  double input();
	int main() yang berisikan pemanggilan dan output dari fungsi calc_h(), calc_k(), calc_a(), calc_t2(), calc_t1(), calc_t2(), dan calc_a() disertai dengan output masing-masing perfungsi dan hasil akhir.
	mendefinisikan fungsi satu-persatu yang berisikan rumus atau cara perhitungan yang telah dimodifikasi sesuai kebutuhan
    pada bagian akhir diberi fungsi tambahan yakni input() yang bertipe data doubel berisikan fungsi strcmp() untuk membandingkan string atau karakter dan atof(input) untuk mengubah string argumen menjadi floating-point
	melakukan pengecekan pada program yang telah dibuat sesuai input yang tersedia pada soal
  */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

double calc_h(double k, double a, double t1, double t2, double x); // prototipe fungsi
double calc_k(double h, double a, double t1, double t2, double x);
double calc_a(double k, double h, double t1, double t2, double x);
double calc_t2(double h, double a, double t1, double k, double x);
double calc_t1(double h, double a, double k, double t2, double x);
double calc_x(double k, double h, double t1, double t2, double a);
double input();

int main(){
    double h, k, a, t2, t1, x;
    printf("Respond to the prompts with the data known.\n");              //output berisikan perintah
    printf("For the unknown quantity, enter a question mark (?).\n");     //output berisi langkah yang harus diambil program apabila terdapat '?'

    printf("Rate of heat transfer (watts) >> ");                          //pemanggilan fungsi dan output yang akan ditampilkan
    h = input();                                                       
 
    printf("Coefficient of thermal conductivity (W/m-K) >> ");            //pemanggilan fungsi dan output yang akan ditampilkan
    k = input();

    printf("Cross-sectional area of conductor (m^2) >> ");                //pemanggilan fungsi dan output yang akan ditampilkan
    a = input();

    printf("Temperature on one side (K) >> ");                            //pemanggilan fungsi dan output yang akan ditampilkan
    t2 = input();

    printf("Temperature on other side (K) >> ");                          //pemanggilan fungsi dan output yang akan ditampilkan
    t1 = input();

    printf("Thickness of conductor (m) >> ");                             //pemanggilan fungsi dan output yang akan ditampilkan
    x = input();

    printf("      kA (T2 - T1)\n");                                      //rumus yang telah ditunjukkan pada soal
    printf("H = ----------------\n");
    printf("            X\n");

    if(h == 0) {                                                         //pengelompokan input berdasarkan rumus yang dibutuhkan   
        h = calc_h(k, a, t1, t2, x);
        printf("Rate of heat transfer is %.2f W.\n", h);
    }
    else if(k == 0) {
        k = calc_k(h, a, t1, t2, x);
        printf("Coefficient of thermal conductivity is %.2f W/m-K.\n", k);
    }
    else if(a == 0) {
        a = calc_a(k, h, t1, t2, x);
        printf("Cross-sectional area of conductor is %.2f m^2.\n", a);
    }
    else if(t2 == 0) {
        t2 = calc_t2(h, a, t1, k, x);
        printf("Temperature on one side is %.2f K.\n", t2);
    }
    else if(t1 == 0) {
        t1 = calc_t1(h, a, k, t2, x);
        printf("Temperature on other side is %.2f K.\n", t1);
    }
    else if(x == 0) {
        x = calc_x(k, h, t1, t2, a);
        printf("Thickness of conductor %.2f m.\n", x);
    }
    
    printf("H = %4.1f W\t\tT2 = %5.2f K\n", h, t2);                        //penampilan hasil input yang telah dilakukan
    printf("k = %4.3f W/m-K\t\tT1 = %5.2f K\n", k, t1);
    printf("A = %4.3f m^2\t\t X = %5.4f m\n", a, x);
    
    
    return 0;
}

double calc_h(double k, double a, double t1, double t2, double x) {        //fungsi calc_h berisi rumus untuk mencari laju perpindahan panas
    return k*a*(t2 - t1)/x;
}

double calc_k(double h, double a, double t1, double t2, double x) {       //fungsi calc_k berisi rumus untuk mencari koefisien termal
    return h*x/a*(t2 - t1);
}

double calc_a(double k, double h, double t1, double t2, double x) {       //fungsi calc_a berisi rumus untuk mencari luas permukaan area konduktor
    return h*x/k*(t2 - t1);
}

double calc_t2(double h, double a, double t1, double k, double x) {       //fungsi calc_t2 berisi rumus mencari suhu akhir
    return (h*x)+t1/k*a;
}

double calc_t1(double h, double a, double k, double t2, double x) {       //fungsi calc_t1 berisi rumus mencari suhu awal
    return t2-(h*x)/k*a;
}

double calc_x(double k, double h, double t1, double t2, double a) {       //fungsi calc_x berisi rumus mencari ketebalan konduktor
    return k*a*(t2-t1)/h;
}

double input(){                                                          //fungsi pengubah string ke floating-point menggunakan strcmp() dan atof(input)
    char input[20];
    gets(input);
    double var;
    if(strcmp(input, "?") == 0){
        var = 0;
    }
    else{
        var = atof(input);
    }
    return var;
}

/* testing: Respond to the prompts with the data known.
			For the unknown quantity, enter a question mark (?).
			Rate of heat transfer (watts) >> 755.0
			Coefficient of thermal conductivity (W/m-K) >> 0.800
			Cross-sectional area of conductor (m^2) >> 0.120
			Temperature on one side (K) >> 298.0
			Temperature on other side (K) >> ?
			Thickness of conductor (m) >> 0.003
      			  kA (T2 - T1)
			H = ----------------
            			X
			Temperature on other side is 297.66 K.
			H = 755.0 W             T2 = 298.00 K
			k = 0.800 W/m-K         T1 = 297.66 K
			A = 0.120 m^2            X = 0.0030 m
*/
