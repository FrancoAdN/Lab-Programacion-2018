#include <stdio.h>
#include <string.h>
#include <stdlib.h>
FILE *fp;
char name[50]="../16/";
char aux[20];
char mediciones[100][25];
int n=0,cont=0;
void main(){
  fp=fopen("../16/arch.txt","r");
  strcat(name,fgets(aux,20,fp));
  fclose(fp);
  puts(name);
  obtenerDatos();
}

void obtenerDatos(){
  fclose(fp);
  fp=fopen(name,"r");
  if(fp==NULL){
   printf("ERROR");
   }else{
      while((mediciones[n][cont]=fgetc(fp)) != EOF){
        if(mediciones[n][cont] != '\n'){
          cont++;
        }else{
          n++;
          cont=0;
        }
      }
    }
    fclose(fp);
    for(int i=0;i<n;i++)
      puts(mediciones[i]);
}
