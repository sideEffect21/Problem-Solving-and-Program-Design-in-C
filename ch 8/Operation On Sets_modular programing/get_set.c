#include "header.h"

/*Mendapat input yang ditetapkan sebagai string dengan tanda kurung 
(mis., {abc}) dan melepas tanda kurung.*/
char *get_set(char *set){
	
	char inset[SETSIZ];

	scanf("%s", inset);
	strncpy(set, &inset[1], strlen(inset) - 2);
	set[strlen(inset) - 2] = '\0';
	
	return (set);
}

