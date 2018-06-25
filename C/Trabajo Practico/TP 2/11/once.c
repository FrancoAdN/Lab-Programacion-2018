#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
FILE *fp;
float const PI= 3.1415926536;

void main(){
  fp=fopen("funciones.csv","r+");
  fprintf(fp, "x;sex(x);cos(x);tg(x)\n");
  fprintf(fp,"%d;%.0f;%.0f;%.0f\n",0,sin(0*PI/180),cos(0*PI/180),tan(0*PI/180));
  for(int i=1;i<360;i++)
    fprintf(fp, "%d;%.6f;%.6f;%.6f\n",i,(sin(i*PI/180)),(cos(i*PI/180)),(tan(i*PI/180)));

  fclose(fp);

  printf("Tabla de senos, cosenos y tangentes en \"funciones.csv\"\n");

}
