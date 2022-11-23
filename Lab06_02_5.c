

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	
	int ind,count=0;
	char str_1[]="392, Hangang-daero, Yongsan-gu, Seoul, Republic of Korea";
	
	
	
	printf("The original text: %s\n",str_1);
	for(ind=0;str_1[ind];ind++)
	{
		if(isdigit(str_1[ind]))
		count++;
	}
	printf("The number of numbers: %d\n",count);

	
	
	
	
	for (ind=0;str_1[ind];ind++)
	{
		
		if(isspace(str_1[ind]))
			{
			str_1[ind]='@';
			}
		if(islower(str_1[ind]))
			str_1[ind]=toupper(str_1[ind]);
		else if(isupper(str_1[ind]))
			str_1[ind]=tolower(str_1[ind]);
	}
	printf("The modified text:%s",str_1);
}