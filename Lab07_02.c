#include <stdio.h>

	
int main()
{
		
	char str_A[11] = "ABCDEFGHIJ";
	char str_B[11] = "0123456789";
	char str_C[11] = {0,};
	
	char *p_A,*p_B,*p_C;
	p_A=&str_A[0];
	p_B=&str_B[0];
	p_C=&str_C[0];

    
	
	printf("array_C:\"");
	for(int ind = 0;ind<11;ind++)
	{
        if(ind%2==0)
        {
            *(p_C+ind+1)=*(p_B+ind+1);
        }
        else
        {
            *(p_C+ind-1)=*(p_A+ind-1);
        }
        
	}
	printf("%s",p_C);
	printf("\"");

}