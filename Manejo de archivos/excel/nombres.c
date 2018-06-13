#include <stdio.h>
#include <stdlib.h>
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
        //alumnos[alum].nombre[letra]=caracter;
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
    concat();
    imprimir();
  }
fclose(arch);
}


void concat(){
int j=0;
struct ma{
    int nomb;
    int edad;
    int nac;
    int dni;
    int dir;
}mayor;


  mayor.nomb=0;
  mayor.edad=0;
  mayor.nac=0;
  mayor.dni=0;
  mayor.dir=0;

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
        mayor.dir=strlen(alumnos[i].dir);
    }

  }



  struct ma agr;
    for(i=0;i<alum;i++){
        agr.nomb=mayor.nomb-strlen(alumnos[i].nombre);
        for(j=0;j<agr.nomb;j++){
            strcat(alumnos[i].nombre," ");
        }
        agr.edad=mayor.edad-strlen(alumnos[i].edad);
        for(j=0;j<agr.edad;j++){
            strcat(alumnos[i].edad," ");
        }
        agr.nac=mayor.nac-strlen(alumnos[i].nac);
        for(j=0;j<agr.nac;j++){
            strcat(alumnos[i].nac," ");
        }
        agr.dni=mayor.dni-strlen(alumnos[i].dni);
        for(j=0;j<agr.dni;j++){
            strcat(alumnos[i].dni," ");
        }
        agr.dir=mayor.dir-strlen(alumnos[i].dir);
        for(j=0;j<agr.dir;j++){
            strcat(alumnos[i].dir," ");
        }

    }




}






void imprimir(){
    for(i=0;i<alum;i++){
        printf("%s  ",alumnos[i].nombre);
        printf("%s  ",alumnos[i].edad);
        printf("%s  ",alumnos[i].nac);
        printf("%s  ",alumnos[i].dni);
        printf("%s  ",alumnos[i].dir);
        printf("\n\n");
    }
}
