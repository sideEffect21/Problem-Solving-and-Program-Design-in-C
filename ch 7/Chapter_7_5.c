/*
    Ditulis oleh : Kelompok 3
    Nama / NRP : 
    Made Nanda Wija Vahindra (5025211160)
    Tsabita Putri Ramadhany (5025211130)
    Dilla Wahdana (5025211060)

    Tanggal: 1 November 2021
            Pembuatan: 1 November 2021
            Modifikasi 1: 1 November 2021
            
    Problem :
    Memerlukan program untuk menghitung digit check dan membandingkan dengan digit terakhir dari suatu barcode yang terdiri dari 12 angka
	
	Analysis :
	Menghitung penjumlahan digit pada posisi ganjil
	Menghitung penjumlahan digit pada posisi genap
	Menghitung hasil penjumlahan ganjil dikali tiga
	Menghitung penjumlahan dari ganjil dikali tiga dengan hasil penjumlahan digit genap
	Menentukan digit terakhir
	Menentukan digit check
	Membandingkan digit check dengan digit terakhir
	Menampilkan keterangan hasil
	
	Data requirements :
		Problem constant :
		-			
		
		Problem inputs :
		int code[i];
		
		Problem output :
		int oddsum = 0,
			evensum = 0,
			check_digit,
			last_digit,
			result;				
		
		Relevant formulas :
		oddsum += code[i];
        evensum += code[i];
  	  	oddsum *= 3;
   		result = oddsum + evensum;
    	last_digit = result % 10;
        check_digit = 10 - last_digit;
        check_digit = last_digit;
	
	Design :
		Initial algorithm :
		1. memasukkan digit yang berisi 12 angka yang dipisahkan dengan spasi
		2. menghitung penjumlahan digit ganjil
		3. menghitung penjumlahan digit genap
		4. menghitung hasil step 2 dikali dengan 3
		5. menghitung hasil step 4 ditambah step 3
		6. menentukan digit terakhir
		7. menentukan digit check
		8. menampilkan hasil step 4
		9. menampilkan hasil step 3
		10. menampilkan hasil step 5
		11. menampilkan keterangan hasil
	
	Step refinement :
		2.1 oddsum += code[i];
        3.1 evensum += code[i];
  	  	4.1 oddsum *= 3;
   		5.1 result = oddsum + evensum;
    	6.1 last_digit = result % 10;
        7.1 check_digit = 10 - last_digit;
        7.2 check_digit = last_digit;
	
	Implementation :
	Untuk mendapatkan 12 digit barcode memerlukan input dari user dengan statement :
	printf("Enter the barcode: ");
	for(i = 0; i < 12; i++)
    scanf("%d", &code[i]);
	Lalu, statement :
	oddsum += code[i];
	evensum += code[i];
	oddsum *= 3;
   	result = oddsum + evensum;
    last_digit = result % 10;
	digunakan untuk penjumlahan digit ganjil, genap, ganjil dikali tiga, ganjil dikali tiga dengan genap, dan digit terakhir
	selanjutnya menentukan digit check menggunakan operasi if else
	setelah mendapat data di atas lalu menampilkan keterangan hasil dengan statement
	if(check_digit == code[11])
    printf("\nvalidated\n");
    else
    printf("\nerror in barcode\n");
	
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{	
    int oddsum = 0,
		evensum = 0,
		code[20],
		i,
		check_digit,
		last_digit,
		result;
    
    printf("Enter the barcode: ");
    for(i = 0; i < 12; i++)
        scanf("%d", &code[i]);
        
    for(i = 0; i < 12; i = i + 2)
        oddsum += code[i];
    for(i = 1; i < 10; i = i + 2)
        evensum += code[i];
        
    oddsum *= 3;
    result = oddsum + evensum;
    last_digit = result % 10;

    if(last_digit != 0)
        check_digit = 10 - last_digit;
    else
        check_digit = last_digit;

    printf("\nSum of digits in odd positions multiplied by 3 is %d", oddsum);
    printf("\nSum of digits in even positions is %d", evensum);
    printf("\nSum of digits in odd positions multiplied by 3 added to Sum of digits in even positions is %d", result);

    if(check_digit == code[11])
        printf("\n\nvalidated\n");
    else
        printf("\n\nerror in barcode\n");
        
    return 0;
}

/*
	Enter the barcode: 0 7 9 4 0 0 8 0 4 5 0 1
	
	Sum of digits in odd positions multiplied by 3 is 63
	Sum of digits in even positions is 16
	Sum of digits in odd positions multiplied by 3 added to Sum of digits in even positions is 79
	
	validated
	------------------------------------------------------------------------------------------------------------------------
	Enter the barcode: 0 2 4 0 0 0 1 6 2 8 6 0

	Sum of digits in odd positions multiplied by 3 is 39
	Sum of digits in even positions is 16
	Sum of digits in odd positions multiplied by 3 added to Sum of digits in even positions is 55
	
	error in barcode
	
	Testing :
	Dalam kasus uji tersebut, dimasukkan dua data inputan yaitu, 0 7 9 4 0 0 8 0 4 5 0 1 dan 0 2 4 0 0 0 1 6 2 8 6 0
	Output yang dihasilkan sudah benar
	Untuk inputan 0 7 9 4 0 0 8 0 4 5 0 1 menghasilkan jumlah ganjil dikali tiga sebesar 63, jumlah genap sebesar 16, dan jumlah keseluruhan sebesar 79
	Sehingga menghasilkan keterangan "validated"
	Untuk inputan 0 2 4 0 0 0 1 6 2 8 6 0 menghasilkan jumlah ganjil dikali tiga sebesar 39, jumlah genap sebesar 16, dan jumlah keseluruhan sebesar 55
	Sehingga menghasilkan keterangan "error in barcode"
*/
