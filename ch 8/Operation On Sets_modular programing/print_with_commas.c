#include "header.h"


/* Menampilkan string sehingga setiap pasangan karakter dipisahkan oleh koma dan spasi.
  */
void print_with_commas(const char *str){ //
 
	if (strlen(str) == 1) {
	putchar(str[0]);
	} else {
	printf("%c, ", str[0]);
	print_with_commas(&str[1]);
	}

}
