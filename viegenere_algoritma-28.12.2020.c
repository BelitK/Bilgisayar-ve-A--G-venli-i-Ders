#include<stdio.h>
#include <string.h>
#include <ctype.h>

void vigenereCipher(char* plainText,char* k);
void vigenereDeCipher(char* cipherText,char* k);
char cipherText[100];
int main()
{
	char* k="EGE";
	char plainText[100];
	printf("Sifrelenecek Metni Giriniz:\n");
		fgets(plainText);
	printf("Sifrelenmis Mesaj (Key=%s):",k);
		vigenereCipher(plainText,k);	
		vigenereDeCipher(cipherText,k);
		return 0;
}





void vigenereCipher(char* plainText,char* k)
{
	int cipher;
	int i,j;
	int cipherValue;
	int len=strlen(k);
		for(i=0,j=0; i<strlen(plainText); i++)
		{
			if(plainText[i]!=' ')
			{
				plainText[j]=toupper(plainText[i]);
				j++;
			}
		}
		plainText[j]='\0';
	
	
	for(i=0;i<strlen(plainText); i++)
	{
			cipherValue=((int)plainText[i]-'A'+(int)toupper(k[i%len])-'A')%26+'A';
			cipher=(char)cipherValue;		
		
		if(isalpha(plainText[i])){
		printf("%c",cipher);
		}
		else
		{
		 printf("%c",plainText[i]);	
		}
		cipherText[i]=cipherText[i]+cipher;
	}//for kapamas�
	
	cipherText[i]='\0';
	printf("\n\n\n");
} //fonksiyon kapama





void vigenereDeCipher(char* cipherText,char* k)
{
	int cipher;
	int i,j;
	int cipherValue;
	int len=strlen(k);
	for(i=0,j=0; i<strlen(cipherText); i++)
		{
			if(cipherText[i]!=' ')
			{
				cipherText[j]=toupper(cipherText[i]);
				j++;
			}
		}
		cipherText[j]='\0';
		
		for(i=0;i<strlen(cipherText); i++)
		{
			cipherValue=(((int)cipherText[i]-'A')-((int)toupper(k[i%len])-'A')+26)%26+'A';
			cipher=(char)cipherValue;
			if(isalpha(cipherText[i])){
			printf("%c",cipher);
		}
		else
		{
		 printf("%c",cipherText[i]);	
		}
		
		}
		printf("\n\n\n");
}


