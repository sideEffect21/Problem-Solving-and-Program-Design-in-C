#include "header.h"

//Menentukan apakah ele adalah elemen dari set
int is_element(char ele, const char *set){
	
	int ans;
	
	if (is_empty(set)){
	ans = FALSE;
	}else if (set[0] == ele){
	ans = TRUE;
	}else{
	ans = is_element(ele, &set[1]);
}
	return (ans);
}
