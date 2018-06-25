#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fIng=0,lIng=0,lTotal=0;
int n=0,cont=0;
char frases[20][50];
char finIngreso='*';

FILE *fp;
 void main(){
   fp = fopen ( "dos.txt", "a+t" );
   printf("\nIntroduce un texto al fichero:\n");

   while((frases[n][cont] = getchar()) != finIngreso)
   {
     if(frases[n][cont] != '\n'){
       cont++;
       lTotal++;
     }else{
       if(frases[n][0] == '<' || frases[n][0]=='>'){
         fputs(frases[n],fp);
         lIng += strlen(frases[n]);
         fIng++;
       }
       n++;
       cont=0;
     }

   }

   fclose ( fp );

   printf("\nCantidad de frases ingresasads: %d\n" ,fIng);
   printf("Cantidad de letras ingresadas: %d\n",lIng );
   printf("Letras totales ingresadas: %d\n",lTotal);

 }
