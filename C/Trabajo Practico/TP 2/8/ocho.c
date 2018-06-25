#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char frases[20][30];
int n=0,cont=0;
FILE *fp;
void main(){
  fp=fopen("texto.txt","r");
  while((frases[n][cont]=fgetc(fp)) != EOF){
    if(frases[n][cont] != '\n'){
      cont++;
    }else{
      n++;
      cont=0;
    }
  }
  fclose(fp);

  fp=fopen("errores.txt","a+t");
  int fIng=0;
  for(int i=0;i<n;i++){
    if(frases[i][0] == '#'){
      fputs(frases[i],fp);
      puts(frases[i]);
      fIng++;
    }
  }
  fclose(fp);

  printf("Frases leidas: %d\n", n);
  printf("Frases escritas: %d\n",fIng);
}
