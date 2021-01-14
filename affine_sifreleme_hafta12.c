#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int alfa=5;
int beta=2;


void sifreleMesaj(char *mesaj)
{
	int i;
	for(i=0; i<strlen(mesaj);i++)
	{
		if(mesaj[i]!=' ')
		{
			mesaj[i]=(char)(((alfa*(mesaj[i]-'A')+beta)%26)+'A');
		}
			mesaj[i]=mesaj[i];
	}
}
void cozSifre(char *mesaj)
{
	int alfa_inv=0;
	int i,bayrak=0;
	for(i=0; i<26;i++)
	{
		bayrak=(alfa*i)%26;
		if(bayrak==1)
		{
			alfa_inv=i;
			printf("Alfa_inverse=%d\n\n",alfa_inv);
		}
	}
	for(i=0;i<strlen(mesaj); i++)
	{
		if(mesaj[i]!=' ')
		{
			mesaj[i]=(char)((alfa_inv*((mesaj[i]+'A'-beta))%26)+'A');
		}
		else
		mesaj[i]=mesaj[i];
	}
		
}

int main()
{
	char mesaj[100];
	scanf("%s",mesaj);
	sifreleMesaj(mesaj);
	printf("Sifreli Mesaj:%s\n\n",mesaj);
	cozSifre(mesaj);
	printf("Cozulen Mesaj:%s\n\n",mesaj);
	return 0;
}

