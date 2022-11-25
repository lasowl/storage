#include <stdio.h>


int main()
{
	int array_A[15] = {18, 22, 10, 90, 62, 78, 80, 14, 98, 16, 59, 37, 19, 29, 49};
	int array_B[15] = {5, 1, 2, 9, 5, 7, 6, 3, 4, 8, 5, 4, 9, 1, 8};
	int array_C[15] = {0,};
	
	int *p_A,*p_B,*p_C;
	p_A=&array_A[0];
	p_B=&array_B[0];
	p_C=&array_C[0];
	
	
	
	printf("array_C:[");
	for(int ind=0;ind<15;ind++)
	{
		*(p_C+ind)=*(p_A+ind)+*(p_B+ind);
		printf("%d ",*(p_C+ind));
	}
	printf("]");
	
}
