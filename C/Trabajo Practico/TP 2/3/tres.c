#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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

  fp=fopen("dos.txt","a+t");
  int fIng=0,lTot=0;
  printf("Frases ingresadas al archivo: \n");
  for(int i=0;i<n;i++){
    if(frases[i][0] != '#' && frases[i][0] != '*' && frases[i][0] != ';'){
      fputs(frases[i],fp);
      puts(frases[i]);
      fIng++;
      lTot+=strlen(frases[i]);
    }
  }
  fclose(fp);

  printf("Lineas leidas: %d\n",n);
  printf("Lineas ingresadas: %d\n",fIng);
  printf("Letras totales ingresadas: %d\n",lTot);



}
