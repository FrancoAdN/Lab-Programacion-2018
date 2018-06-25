#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fIng=0;
int n=0,cont=0;
char frases[20][50];


// $Q == 81;

FILE *fp;

void main(){


  fp = fopen ( "texto.txt", "a+t" );
  printf("\nIntroduce un texto al fichero:\n");

  while(strcmp(frases[n],"exit")!=0)
  {
    frases[n][cont]=getchar();
    if(frases[n][cont] != '\n'){
      cont++;
    }else{
      n++;
      cont=0;
    }

  }

  printf("\n\n");
  for(int i = 0; i < n ; i++){
    frases[i][strlen(frases[i])-1]=' ';
    printf("%03d - %s- %03d\n",i+1,frases[i],strlen(frases[i])-1);
    fprintf(fp,"%03d - %s- %03d\n",i+1,frases[i],strlen(frases[i])-1);
  }

  fclose(fp);



}
