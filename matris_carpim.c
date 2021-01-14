#include <stdio.h>
#include <stdlib.h>

int main() {
   int matris1X=0, matris1Y=0, matris2X=0, matris2Y=0;
    printf("ilk matrisin boyutlarini giriniz?(Orn: 3 4) :");
       scanf("%d %d",&matris1X,&matris1Y);
    printf("ikinci matrisin boyutlarini giriniz?(Orn: 4 5) :");
       scanf("%d %d",&matris2X,&matris2Y);
  if(matris1Y != matris2X) 
     printf("Matris carpimi icin boyutlar uygun degil.\n");
  else if(matris1X<2 || matris1Y<2 || matris2X<2 || matris2Y<2) 
          printf("Boyutlar 2?den kucuk olamaz.\n");
        else{
             int matris1[matris1X][matris1Y], matris2[matris2X][matris2Y], carpimMatrisi[matris1X][matris2Y];
             int i,j,k,topla;

             //Matris1 degerlerinin alinmasi.
             for(i=0;i<matris1X;i++){
                for(j=0;j<matris1Y;j++){
                   printf("Matris1[%d][%d]:",i+1,j+1);
                     scanf("%d",&matris1[i][j]);
                }
             }
             //Matris2 degerlerinin alinmasi.
             for(i=0;i<matris2X;i++){
                for(j=0;j<matris2Y;j++){
                   printf("Matris2[%d][%d]:",i+1,j+1);
                     scanf("%d",&matris2[i][j]);
                }
             }
    system("CLS");
    //Matris carpimi
        for(i=0;i<matris1X;i++){
           for(j=0;j<matris2Y;j++){
             topla=0;
               for(k=0;k<matris1Y;k++) 
			      topla = topla + matris1[i][k]*matris2[k][j];
             carpimMatrisi[i][j]=topla;
             printf("Carpim Matrisi[%d][%d] = %d ",i+1,j+1,carpimMatrisi[i][j]);
           } 
         printf("\n");
        }     
    }

 system("PAUSE");
return 0;
}
