#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str_1[100] = "Republic of Korea";
	char str_2[100] = "Watermelon";
	char str_3[100];
	
	printf("str_3: %s\n",strncpy(str_3,str_2,5));
	printf("New str_1: %s\n",strncat(str_1,str_2,5));
	printf("The number of characters before 'o' appears in str_1: %d",strcspn(str_1,"o"));	
}