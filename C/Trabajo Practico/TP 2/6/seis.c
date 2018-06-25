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
  int suma=0,fIng=0,mayor=0;
  float prom;

  for(int i=0;i<n;i++){
      if(frases[i][0] == '/' || frases[i][0] == '#'){
        fIng++;
        suma+=strlen(frases[i]);
        puts(frases[i]);
        if(strlen(frases[i])>mayor)
          mayor=strlen(frases[i]);

      }
  }
  prom=suma/fIng;

  printf("Cantidad de frases que comienzan con \"/ \" o \"#\": %d\n",fIng);
  printf("Logitud de linea maxima: %d\n",mayor);
  printf("Longitud de linea promedio: %f\n",prom);

}
