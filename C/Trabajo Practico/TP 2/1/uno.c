#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fIng=0;
int n=0,cont=0;
char frases[20][50];
char espacio=32;
char finIngreso=81;

// $Q == 81;

FILE *fp;

void main(){


  fp = fopen ( "uno.txt", "a+t" );
  printf("\nIntroduce un texto al fichero:\n");

  while((frases[n][cont] = getchar()) != finIngreso)
  {
    if(frases[n][cont] != '\n'){
      cont++;
    }else{
      if(frases[n][0] != espacio ){
        fputs(frases[n],fp);
        fIng++;
      }
      n++;
      cont=0;
    }

  }

  fclose ( fp );

  printf("Cantidad de frases ingresasads: %d\n" ,fIng);



}
