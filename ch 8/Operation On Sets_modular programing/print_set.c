#include "header.h"


//Menampilkan string dalam notasi set standar.
void print_set(const char *set){
	
	putchar('{');
	if (!is_empty(set)){
	print_with_commas(set);
	putchar('}');
}

}
