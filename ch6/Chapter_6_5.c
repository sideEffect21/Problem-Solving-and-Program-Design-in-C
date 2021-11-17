/* 	
	Ditulis oleh :
	Nrp ketua : 5025211228
	Nama ketua : Muhammad Rifqi Fadhilah
	Nrp anggota 1 : 5025211154
	Nama anggota 1 : Thoriq Afif Habibi
	Nrp anggota 2 : 5025211216
	Nama anggota 2 : Akmal Nafis
 
/* Tanggal: 18 Oktober 2021
*/ 

/* 	Problem: */
/*	Diberikan sebuah bilangan integer positif. Bilangan tersebut akan dicek menjadi
    a. Membalikan angka tersebut (ex: 542 menjadi 245)
    b. Mengecek apakah bilangan tersebut merupakan bilangan prima atau bukan
    c. Mengecek apakah bilangan tersebut merupakan bilangan palindrom atau bukan
    Oleh karena itu diperlukan sebuah program yang mampu melakukan pembalikan bilangan, 
	pengecekan apakah bilangan tersebut termasuk bilangan prima dan bilangan palindrom.
*/

 /*	Analysis :
    Pembalikan bilangan dilakukan dengan memasukkan bilangan terlebih dahulu kemudian bilangan 
	tersebut dimodulus dengan 10 untuk mencari angka paling belakang dan kemudian bilangan tersebut disusun labi. 
	Lalu untuk menentukan apakah bilangan tersebut termasuk dalam bilangan prima, bilangan tersebut harus
	memenuhi syarat bilangan prima yaitu hanya memiliki faktor berupa bilangan 1 dan bilangan itu sendiri.
    Untuk mengetahui apakah bilangan tersebut merupakan bilangan palindrom atau bukan
    Dapat diketahui apabila bilangan tersebut dibalik, maka bilangan tersebut akan sama dengan bilangan awalnya
    Contohnya: 24542 bila dibalik akan menjadi 24542, bilangan tersebut merupakan bilangan palindrom karena bilangan awalnya
    sama dengan bilangan tersebut bila dibalik.
    
*/
  
/* Data Requirements Fungsi Main: /*
	
	Problem Inputs: 
	int n; 								// Bilangan yang akan dioperasikan
		
	Problem Outputs:
	Bilangan n yang sudah dibalik
	Pernyataan apakah bilangan n termasuk bilangan prima
	Pernyataan apakah bilangan n termasuk bilangan palindrom
	
	Function : 
	int data (n);					//Fungsi untuk membalikan bilangan
	int prime (n);					//Fungsi untuk menentukan bilangan prima
	int palindrome (n);				//Fungsi untuk menentukan bilangan palindrom
*/

/* Data Requirements Fungsi data: /*
	
	Input parameter:
	int x;
	
	Local Variables:
	int a; //Menyimpan digit dari bilangan n mulai paling belakang
	
	Problem Outputs:
	int jumlah; //Hasil dari bilangan yang sudah dibalik
*/

/* Data Requirements Fungsi prime: /*
	
	Input parameter:
	int y;
	
	Local Variables:
	int l; 							//Menyimpan nilai bilangan n
	int i; 							//Untuk melakukan loop
	int b; 							//Untuk menentukan berapa banyak faktor dari bilangan n
	
	Problem Outputs:
	Statement yang menyatakan apakah bilangan n merupakan bilangan prima
*/

/* Data Requirements Fungsi palindrome: /*
	
	Input parameter:
	int z;
	
	Local Variables:
	int m; 							//Mengasign nilai z(bilangan n) ke variabel m
	int r; 							//Untuk menyimpan digit terakhir bilangan n
	int s;	 						//Menyimpan nilai bilangan n yang sudah dibalik
	
	Problem Outputs:
	Statement yang menyatakan apakah bilangan n merupakan bilangan palindrom
*/

/*DESIGN*/
/*	Initial Algorithm:
	1. Memasukkan data berupa bilangan bulat positif
	2. Mengembalikan bilangan bulat yang diinputkan
	3. Mengecek apakah bilangan tersebut merupakan bilangan prima
	4. Mengecek apakah bilangan tersebut merupakan bilangan palindrom
	5. Menampilkan hasil kepada user
    
    Step refinements :
    2.1 Menjalankan fungsi reverse
    2.2 Pada fungsi reverse terdapat statement untuk membalikan bilangan n dengan cara
    	bilangan n % 10 sehingga akan menghasilkan digit yang paling belakang dari bilangan n
    	kemudian digit tersebut dimasukan ke dalam variabel lain.
    	Kemudian ada variabel yang mengalikan digit terakhir dengan 10 supaya digit terakhir berada di awal
    	Lalu digit yang dikalikan 10 tersebut ditambahkan dengan digit kedua dari bilangan n mulai dari paling belakang
    	nilai dari bilangan n dibagi dengan 10 supaya bila digit yang telah diekstrak sudah diolah
    	maka akan melanjutkan digit selanjutnya dari paling belakang
    
    3.1 Menjalankan fungsi prime
    3.2 Pada fungsi tersebut ada loop yang berfungsi untuk mengitung banyaknya faktor dari bilangan n
    	Loop tersebut akan membagi bilangan n dengan 1 hingga bilangan n itu sendiri, bila ditengah tengah
    	loop tersebut bilangan n dapat dibagi dengan bilangan lain, maka otomatis ia bukan bilangan prima
    
    4.1 Menjalankan fungsi palindrome
    4.2 Pada fungsi tersebut terdapat fungsi untuk membalikan bilangan n yang algoritmanya mirip dengan
    	fungsi reverse.
    	Kemudian hasil dari bilangan n yang telah dibalik dibandingkan dengan bilangan n.
    	Bila kedua bilangan tersebut sama maka bilangan tersebut merupakan bilangan palindrom
    
/*IMPLEMENTATION
	
	Buat fungsi untuk mengkalkulasi solusi dari masalah yang didapat.
	Pertama, buat fungsi untuk membalikan bilangan n dengan statement
	int data (int x){
	int a;
    int jumlah = 0;
    
    printf("Hasil reverse adalah : ");
    Lalu bilangan n dibalik dengan statement
    while (x > 0){
        a = x % 10; // Nilai a adalah nilai bilangan n dimodulus 10 (nilai digit terakhir bilangan n)
        jumlah = (jumlah * 10) + a; // Jumlah akan menyimpan nilai dari digit terakhir bilangan n
        							// Kemudian jumlah akan dikalikan 10 dan ditambahkan digit kedua
		if (jumlah == 0) printf("0");
        x = x / 10;					// Setelah itu bilangan x akan dibagi 10 untuk menghilangan digit terakhir
    }
    Kemudian tampilkan hasil dari bilangan n yang telah dibalik dengan statement
    printf("%d", jumlah);
	printf("\n");   
}

	Kemudian buatlah fungsi untuk menentukan bilangan n termasuk bilangan prima atau bukan
	dengan statement
	int prime (int y){
	
	deklarasikan variabel lokalnya dengan statement
    int l = y, i, b = 0;
    
    kemudian cari faktor faktor bilangan n dengan loop berikut
    for (i = 1; i <= l; i++){
        if (l % i == 0) {
            b++;
        }
    }
    
    Bila bilangan n hanya mempunyai 2 faktor maka ia merupakan bilangan prima
	if (b == 2){
        printf("%d adalah bilangan prima\n", y);
    }
    
    Apabila mempunyai lebih atau kurang dari 2 faktor maka ia bukan bilangan prima
	else{
        printf("%d bukan bilangan prima\n", y);
    }
}
	
	Terakhir buatlah fungsi untuk menentukan bilangan n termasuk bilangan palindrom atau bukan
	dengan statement
	int palindrome (int z){
	
	deklarasikan variabel lokal yang dibutuhkan dengan statement
    int m = z;
	int r;
	int s = 0;
    
    Setelah itu lakukan pembalikan bilangan n dengan algoritma yang sama pada fungsi prime
    while (m > 0) {
        r = m % 10;
        s = (s * 10) + r;
        m = m / 10;
    }
    
    Kemudian bandingkan hasil, apakah bilangan n sama dengan bilangan n yang telah dibalik.
    Bila bilangan n sama dengan bilangan n yang sudah dibalik maka ia merupakan bilangan palindrom
        printf("%d adalah bilangan palindrom\n", z);
    
    Bila tidak maka ia bukan bilangan palindrom
    else
        printf("%d bukan bilangan palindrom\n", z);
}
	
	Untuk mendapatkan data bilangan  
	maka perlu ada input dari user dengan statement sebagai berikut:
	printf("Masukkan sebuah bilangan => ");
    scanf("%d", &n);
	
	Lalu, statement :
	int reverse = data(n);
    int prima = prime(n);
    int palindrom = palindrome(n);	
	berguna untuk melakukan pembalikan bilangan, pengecekan apakah bilangan tersebut 
	termasuk bilangan prima dan bilangan palindrom dengan memanggil sebuah fungsi 
	Setelah didapatkan hasil, maka ditampilkan kepada user
  	
*/

#include <stdio.h>

int data (int x){//Fungsi untuk membalikan bilangan n
	
	int a; //Local variable - menyimpan digit dari bilangan n mulai paling belakang
    int jumlah = 0; //Output - Hasil dari bilangan yang sudah dibalik  
    
    printf("Hasil reverse adalah : ");
    while (x > 0){ //Loop untuk membalikan bilangan n
        a = x % 10;
        jumlah = (jumlah * 10) + a;
		if (jumlah == 0) printf("0");
        x = x / 10;
    }
    printf("%d", jumlah);
	printf("\n");
     
}

int prime (int y){ //Fungsi untuk menentukan apakah bilangan n termasuk bilangan prima
	
    int l = y, //Local variable - menyimpan nilai bilangan n
		i, //Local variable - untuk melakukan loop
		b = 0; // Local variable - untuk menentukan berapa banyak faktor dari bilangan n
    
    for (i = 1; i <= l; i++) { //Loop untuk menentukan banyaknya faktor bilangan n
        if (l % i == 0) {
            b++;
        }
    }
    if (b == 2){ //Bila bilangan n hanya mempunyai 2 faktor maka ia merupakan bilangan prima
        printf("%d adalah bilangan prima\n", y);
    }
    else{ //Apabila mempunyai lebih atau kurang dari 2 faktor maka ia bukan bilangan prima
        printf("%d bukan bilangan prima\n", y);
    }
}

int palindrome (int z) { //Fungsi untuk mencari angka n adalah bilangan palindrom atau bukan
	
    int m = z; // Local Variable - Mengasign nilai z(bilangan n) ke variabel m
	int r; // Local Variable - untuk menyimpan digit terakhir bilangan n
	int s = 0; //Local Variable - Menyimpan nilai bilangan n yang sudah dibalik
    
    while (m > 0) {//Loop untuk membalikan bilangan n
        r = m % 10;
        s = (s * 10) + r;
        m = m / 10;
    }
    
    if (z == s)//Bila bilangan n == bilangan n yang sudah dibalik maka ia merupakan bilangan palindrom
        printf("%d adalah bilangan palindrom\n", z);
        
    else//Bila tidak maka ia bukan bilangan palindrom
        printf("%d bukan bilangan palindrom\n", z);
}

int main(){ // Main function
	
    int n; // Input - Bilangan yang akan dioperasikan
    
    printf("Masukkan sebuah bilangan => ");
    scanf("%d", &n);// Statement untuk mendapatakna nilai n
    
    data(n);//Memanggil Fungsi untuk mencari angka n yang dibalik
    
    prime(n);//Memanggil Fungsi untuk mencari apakah angka n merupakan bilangan prima
    
    palindrome(n);//Memanggil Fungsi untuk mencari angka n adalah bilangan palindrom atau bukan

    return 0;
}

/*
Masukkan sebuah bilangan => 323
Hasil reverse adalah : 323
323 bukan bilangan prima
323 adalah bilangan palindrom

Masukkan sebuah bilangan => 12242
Hasil reverse adalah : 24221
12242 bukan bilangan prima
12242 bukan bilangan palindrom

Masukkan sebuah bilangan => 09
Hasil reverse adalah : 9
9 bukan bilangan prima
9 adalah bilangan palindrom

Masukkan sebuah bilangan => 463
Hasil reverse adalah : 364
463 adalah bilangan prima
463 bukan bilangan palindrom

Masukkan sebuah bilangan => 678
Hasil reverse adalah : 876
678 bukan bilangan prima
678 bukan bilangan palindrom

Masukkan sebuah bilangan => 8679
Hasil reverse adalah : 9768
8679 bukan bilangan prima
8679 bukan bilangan palindrom

TESTING

Statement yang dijalankan pada program diatas sudah benar, misalkan pada angka 323, bila dibalik akan
tetap menghasilkan 323. Namun bilangan ini bukan bilangan prima karena bisa habis dibagi dengan 17 dan 19
maka dari itu ia mempunyai lebih dari 2 faktor. Kemudian bilangan 323 termasuk bilangan palindrom karena ia
sama dengan bilangan yang dibaliknya.

Namun pada testcase 09, program ini masih mempunyai kesalahan, ekspektasi user bila angka 09 dibalik
adalah 90, namun karena program tidak membaca angka 0 didepan bilangan asli, maka 09 akan terbaca sebagai 9.

*/

