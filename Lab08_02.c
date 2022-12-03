#include <stdio.h>
#include <string.h>

char str[50]="See you in the next semester!";
int str_length;
char *p_str;

void f_capitalize(char *,int);

int main()
{
    printf("Original: %s\n",str);
    f_capitalize(p_str,str_length);
    printf("After capitalization: %s\n",str);
}

void f_capitalize(char *p_str,int str_length)
{
    str_length=strlen(str);
    p_str=&str[0];
    for(int ind=0;ind<str_length;ind++)
    {
        if(*(p_str+ind)>='a' && *(p_str+ind)<='z')
        {
            *(p_str+ind)=*(p_str+ind)-32;
        }
    }
}

