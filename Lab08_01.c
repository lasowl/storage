#include <stdio.h>
#include <string.h>

char str[50]="Have a great summer vacation!";
int str_length;
char *p_str;


void f_flip(char *,int);

int main()
{
    printf("Original: %s\n",str);
    f_flip(p_str,str_length);
    printf("After flip: %s\n",str);
}

void f_flip(char *p_str,int str_length)
{
    char temp=0;
    str_length=strlen(str);
    p_str=&str[0];
    for(int ind=0;ind<str_length/2;ind++)
    {
        temp=*(p_str+ind);
        *(p_str+ind)=*(p_str+(str_length-1)-ind);
        *(p_str+(str_length-1)-ind)=temp;
    }


}

