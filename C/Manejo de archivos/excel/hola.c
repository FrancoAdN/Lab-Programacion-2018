#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define cname 20
#define nAlu 50
struct alm{
  char nombre[cname];
  char edad[cname];
  char nac[cname];
  char dni[cname];
  char dir[cname];
}alumnos[nAlu];

FILE *arch;
char caracter;
int letra=0,alum=0,num=0,i=0,cont=0;

void main(){
  arch=fopen("nombres.csv","r");
  if(arch == NULL){
    printf("Error\n");
  }else{
    while((caracter=fgetc(arch)) != EOF){
      if(caracter != '\n'){
        if(caracter != ';'){
          switch (cont) {
            case 0:
              alumnos[alum].nombre[letra]=caracter;
              break;
            case 1:
              alumnos[alum].edad[letra]=caracter;
              break;
            case 2:
              alumnos[alum].nac[letra]=caracter;
              break;
            case 3:
              alumnos[alum].dni[letra]=caracter;
              break;
            case 4:
              alumnos[alum].dir[letra]=caracter;
              break;
          }
          letra++;
        }else{
          cont++;
          letra=0;
        }

      }else{
        cont=0;
        alum++;
        letra = 0;
      }
    }

    //nombreMayor();
  }
fclose(arch);
}


void nombreMayor(){
struct ma{
    int nomb;
    int edad;
    int nac;
    int dni;
    int dir;
}mayor;

  for(i=0;i<alum;i++){
    if(strlen(alumnos[i].nombre)>mayor.nomb){
      mayor.nomb=strlen(alumnos[i].nombre);
    }
    if(strlen(alumnos[i].edad)>mayor.edad){
      mayor.edad=strlen(alumnos[i].edad);
    }
    if(strlen(alumnos[i].nac)>mayor.nac){
      mayor.nac=strlen(alumnos[i].nac);
    }
    if(strlen(alumnos[i].dni)>mayor.dni){
      mayor.dni=strlen(alumnos[i].dni);
    }
    if(strlen(alumnos[i].dir)>mayor.dir){
      mayor.nomb=strlen(alumnos[i].dir);
    }

  }


 /* int agr=0,j=0;
  for(i=0;i<alum;i++){
    agr=mayor-strlen(alumnos[i].nombre);
    for(j=0;j<agr;j++){
        strcat(alumnos[i].nombre,"*");
    }
  }


  for(i=0;i<alum;i++){
    printf("%s\n",alumnos[i].nombre);
  }*/


}
