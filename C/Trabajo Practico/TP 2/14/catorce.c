#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char frases[20][30];
int n=0,cont=0;
FILE *fp;

void main(){
  fp=fopen("origen.dat","r");
  while((frases[n][cont]=fgetc(fp)) != EOF){
    if(frases[n][cont] != '\n'){
      cont++;
    }else{
      n++;
      cont=0;
    }
  }

  fclose(fp);
  fp=fopen("destino.dat","a+t");
  printf("Frases pegadas en \"destino.dat\" \n");
  for(int i=0;i<n;i++){
    if(frases[i][0]== '/' || frases[i][0]== '$' || frases[i][0]== '#' || frases[i][0]== '&' ){
        fputs(frases[i],fp);
        puts(frases[i]);
    }
  }
  fclose(fp);



}
