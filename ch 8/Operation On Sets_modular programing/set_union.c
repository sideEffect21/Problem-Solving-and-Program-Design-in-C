#include "header.h"

char *set_union(char *result, const char *set1, const char *set2){ //mencari gabungan set1 dan set2
	
	char temp[SETSIZ]; /* variabel lokal untuk menampung hasil panggilan ke set_union yang disematkan dalam panggilan sprintf */

	if (is_empty(set1)){
	strcpy(result, set2);
	}else if (is_element(set1[0], set2)){
	set_union(result, &set1[1], set2);
	}else{
	sprintf(result, "%c%s", set1[0],
	set_union(temp, &set1[1], set2));
	}
	return (result);
}
