
#include <stdio.h>
#include <math.h>
int cevir(int );
int main()
{
	int n,sonuc;
	printf("\nikilik Sistemde Sayi Giriniz:");
	scanf("%d",&n);
	sonuc=cevir(n);
	printf("\nSonuc=%d dir.\n",sonuc);
	printf("\nASCII=%c dir.\n",sonuc);
	
	return 0;
}
int cevir(int n)
{
	int i=0,kalan=0,toplam=0;
	while(n>0)
	{
		kalan=n%10;
		n=n/10;
		toplam=toplam+kalan*pow(2,i);
		i++;
		
	
	}
	return toplam;
}
