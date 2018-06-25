#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char frases[20][30];
int n=0,cont=0;
FILE *fp;


void main(){
  fp=fopen("uno.txt","r");
  while((frases[n][cont]=fgetc(fp)) != EOF){
    if(frases[n][cont] != '\n'){
      cont++;
    }else{
      n++;
      cont=0;
    }
  }
  fclose(fp);

  fp=fopen("dos.txt","r");
  while((frases[n][cont]=fgetc(fp)) != EOF){
    if(frases[n][cont] != '\n'){
      cont++;
    }else{
      n++;
      cont=0;
    }
  }
  fclose(fp);

  fp=fopen("tres.txt","a+t");
  printf("Frases ingresadas en \"tres.txt\" \n");
  for(int i=0;i<n;i++){
    fputs(frases[i],fp);
    puts(frases[i]);
  }
  fclose(fp);

}
