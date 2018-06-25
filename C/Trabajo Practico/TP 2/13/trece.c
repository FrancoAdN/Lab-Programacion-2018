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

  for(int i=0;i<n;i++){
    printf("%03d - ", strlen(frases[i])-1);
    puts(frases[i]);
  }
}
