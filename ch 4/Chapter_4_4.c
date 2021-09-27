
// Problem
/*
program yang melaporkan isi tabung gas terkompresi pada huruf pertama dari warna silinder. Masukan program berupa karakter yang mewakili 
warna silinder yang diamati: "Y" atau "y" untuk kuning, "O" atau "o" untuk orange, dan sebagainya. jika input tidak sesuai maka output "Contents unknown".
*/

// Analysis
/*
	Program  ini membutuhkan input berupa huruf pertama baik huruf kecil tau besar bernilai sama yang menunjukkan 
	warna slinder dari tabung:
	
	orange menunjukkan ammonia
	brown menunjukkan carbon monoxide
	yellow menunjukkan hydrogen
	green menunjukkan oxygen
	kita dapat menggunakn operasi == untuk mengecek warna yang benar dan menggunkan operasi || untuk menyamakan nilai huruf kecil atau besar
	
	jika input sesui maka kan menampilkn warna dan isi dalam tabung tersebut, jika salah maka menampilkan Contents Unknown
	*/
#include "stdio.h"
void main()
{
	char color;
	printf("\nEnter first letter of a color - ");
	scanf("%c", &color);
	if((color == 'o') || (color == 'O'))
	{
		printf("\n orange contains ammonia \n");
	}
	else if((color == 'b') || (color == 'B'))
	{
		printf("\n brown contains carbon monoxide \n");
	}
	else if((color == 'y') || (color == 'Y'))
	{
		printf("\n yellow contains hydrogen \n");
	}
	else if((color == 'g') || (color == 'G'))
	{
		printf("\n green contains oxygen \n");
	}
	else
	{
		printf("\nContents Unknown");
	}
}
