#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	unsigned int seed;
	seed=time(0);
	srand(seed);
	
	
	int *p1;
	int *p2;
	int array1[5] = {0,};
    int temp;
    
	
	p1 = (int*)calloc(5,sizeof(int));

	
	for(int i=0;i<5;i++)
	{
		*(p1+i)=rand();
		
		printf("*(p1 + %d) = %d\t p1[%d] = %d\n",i,*(p1+i),i,p1[i]);
	}
	
	
	p2=&array1[0];
	printf("array1:[");
	for(int i=0;i<5;i++)
	{
		*(p2+i)=rand()%5;
		printf("%d ",*(p2+i));
	}
	printf("]\n");
	
	for(int i=0;i<5;i++)
	{
		printf("p2 + %d = %p\t &array1[%d] = %p array1 + %d = %p\n",i,(p2+i),i,&array1[i],i,(array1+i));
	}

    temp=*p1;
    *p1=*p2;
    *p2=temp;
    for(int i=0;i<5;i++)
    {
        printf("*(p1 + %d) = %d\t *(p2 + %d) = %d\n",i,*(p1+i),i,*(p2+i));
    }
	
	
	
	
	free(p1);
}
