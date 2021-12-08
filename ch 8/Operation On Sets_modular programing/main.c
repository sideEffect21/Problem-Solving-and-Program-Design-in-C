/* Dibuat 16 November 2021
NRP; 5025211216
Nama : Akmal Nafis
Kelas Daspro E
*/

#include "header.h"


int main(void){
char ele, set_one[SETSIZ], set_two[SETSIZ], set_three[SETSIZ];

	printf("A set is entered as a string of up to %d letters\n", SETSIZ - 3);
	printf("and digits enclosed in {} ");
	printf("(no duplicate characters)\n");
	printf("For example, {a, b, c} is entered as {abc}\n");

	printf("Enter a set to test validation function> ");
	get_set(set_one);
	putchar('\n');
	print_set(set_one);
	
	if (is_set(set_one)){ //print apakah input valid atau tidak
	printf(" is a valid set\n");
	}else{
	printf(" is invalid\n");
}
	printf("Enter a single character, a space, and a set> ");

	
	while(isspace(ele = getchar())); /* mendapat karakter pertama setelah spasi */
	get_set(set_one);
	printf("\n%c ", ele);
	if (is_element(ele, set_one)){
	printf("is an element of ");
	}else{
	printf("is not an element of ");
	}
	
	
	// untuk menggabungkan karakter
	print_set(set_one);
	printf("\nEnter two sets to test set_union> ");
	get_set(set_one);
	get_set(set_two);
	printf("\nThe union of ");
	print_set(set_one);
	printf(" and ");
	print_set(set_two);
	printf(" is ");
	print_set(set_union(set_three, set_one, set_two));
	putchar('\n');

	return (0);
}

