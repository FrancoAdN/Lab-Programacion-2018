#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *fp;
char frases[20][30];
int n=0,cont=0,ln=5;
char nArch[50]="../4/";
char aux[50];
char ch;
void main(){
  obtenerDatosAnt();
  int a;
  fp=fopen("tabla.csv","a+t");
  for(int i = 1;i<n;i++){
    for(int j=0;j<strlen(frases[i]);j++){
        if(frases[i][j]=='\n')
            frases[i][j]=';';
        fputc(frases[i][j],fp);
    }
  }
  fclose(fp);
}









void obtenerDatosAnt(){
  fp=fopen("../4/arch.txt","r");
  if(fp == NULL){
    printf("No existe el archivo\n");
    printf("Ingrese una tabla en el ejercicio anterior\n");
  }else{
    strcat(nArch,fgets(aux,20,fp));
  }
  fclose(fp);
  fp=fopen(nArch,"r");
  if(fp==NULL){
   printf("ERROR");
   }else{
      while((frases[n][cont]=fgetc(fp)) != EOF){
        if(frases[n][cont] != '\n'){
          cont++;
        }else{
          n++;
          cont=0;
        }
      }
    }
    fclose(fp);
    for(int i=1;i<n;i++)
      puts(frases[i]);
}
