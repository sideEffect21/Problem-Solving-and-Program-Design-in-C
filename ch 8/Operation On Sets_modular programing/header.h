#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SETSIZ 65 /* 52 uppercase and lowercase letters, 10 digits, {, }, and '\0' */
#define TRUE 1
#define FALSE 0

	int is_empty(const char *set);
	int is_element(char ele, const char *set);
	int is_set(const char *set);
	int is_subset(const char *sub, const char *set);
	char *set_union(char *result, const char *set1, const char *set2);
	void print_with_commas(const char *str);
	void print_set(const char *set);
	char *get_set(char *set);

