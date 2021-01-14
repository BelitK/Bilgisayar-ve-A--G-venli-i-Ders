#include <stdio.h>
#include <stdlib.h>
void shift(char *kelime,int anahtar)
{
	char c=kelime[0];
	int i=0;
	while(c!='\0')
	{
		if(c>=65&&c<=90){
		
		     kelime[i]=(kelime[i]+anahtar);
		      if(kelime[i]>90)
		            kelime[i]=(kelime[i]%90)+64;
		     if(kelime[i]<65)
		            kelime[i]=90-(64%kelime[i]);
	}
	
	if(c>=97&&c<=122){
		
		     kelime[i]=(kelime[i]+anahtar);
		      if(kelime[i]>122)
		            kelime[i]=(kelime[i]%122)+96;
		     if(kelime[i]<97)
		            kelime[i]=122-(96%kelime[i]);
	
	}
	i++;
	c=kelime[i];
	}
}
int main()
{
	char kelime[100];
	scanf("%s",kelime);
	shift(kelime,2);
	printf("Sifreli=%s\n",kelime);
	shift(kelime,-2);
	printf("acilmis=%s\n",kelime);
	
	getch();
	
	
	return 0;
}
