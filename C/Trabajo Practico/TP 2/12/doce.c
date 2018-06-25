#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n=0,cont=0;
char frases[20][50];


FILE *fp;
 void main(){
   fp = fopen ( "doce.txt", "a+t" );
   printf("\nIntroduce un texto al fichero (finaliza con un \"*\")\n");

   while((frases[n][cont] = getchar()) != '*'){
     if(frases[n][cont] != '\n'){
       cont++;
     }else{
       if(frases[n][0] == '@' || frases[n][0]=='#'){
         fputs(frases[n],fp);
       }
       n++;
       cont=0;
     }

   }

   fclose ( fp );
  }

