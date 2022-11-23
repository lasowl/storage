#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
 


	char plaintext[50];
	char ciphertext[50];
	int key;


	printf("Enter a plaintext:");
	scanf("%s",&plaintext);
	printf("Enter a key:");
	scanf("%d",&key);

    for(int ind=0;ind<strlen(plaintext);ind++)
    {
        if(isalpha(plaintext[ind]))
        {
            if(plaintext[ind]>'z')
            {
                plaintext[ind]='a';

             }
            
            
        }
        ciphertext[ind]=(((plaintext[ind]-'a')+key)%26)+'a';
    }
     printf("Ciphertext: %s",ciphertext);  


}