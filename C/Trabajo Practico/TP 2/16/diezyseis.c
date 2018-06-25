#include <stdio.h>
#include <string.h>
struct tem {
  float temp;
  char fecha[10];
  char hora[10];
}medir[100];
int n=-1,i=0,a=0;
int opcion;
char name[20];
FILE *fp;
void main(){

  printf("Ingrese el nombre del archivo\n");
  fflush(stdin);
  gets(name);
  strcat(name,".csv");
  do{
    printf("\n\nIngrese 1 para ingresar una medicion\n");
    printf("Ingrese 2 para ver las mediciones\n");
    printf("Ingrese 3 para ingresar las mediciones al archivo \"%s\"\n",name);
    printf("Ingrese 0 para salir\n");
    printf("Ingrese una opcion\n");
    fflush(stdin);
    scanf("%d",&opcion);
    switch(opcion){
      case 1:
        system("cls");
        n++;
        printf("Ingrese la temperatura (formato: ff.ff)\n");
        fflush(stdin);
        scanf("%f",&medir[n].temp);
        printf("Ingrese la fecha de la medicion (formato: yyyy-mm-dd)\n");
        fflush(stdin);
        gets(medir[n].fecha);
        printf("Ingrese la hora de la medicion (formato: hh.mm.ss)\n");
        fflush(stdin);
        gets(medir[n].hora);
        break;
      case 2:
        system("cls");
        for(i=0;i<=n;i++){
          printf("%d. Temperatura: %.2f\n",i,medir[i].temp);
          printf("%d. Fecha: %s\n",i,medir[i].fecha);
          printf("%d. Hora: %s\n",i,medir[i].hora);
          printf("\n");
        }
        break;
      case 3:
        fp=fopen(name,"a+t");
        if(a==0)
            fprintf(fp, "TEMPERATURA;FECHA;HORA\n");
        for(i=a;i<=n;i++)
          fprintf(fp, "%.2f;%s;%s\n",medir[i].temp,medir[i].fecha,medir[i].hora);
        a=n;
        break;
        fclose(fp);
      default:
        if(opcion != 0)
          printf("Opcion incorrecta\n");
        break;
    }
  }while(opcion != 0);

  fp=fopen("arch.txt","r+");
  fputs(name,fp);
  fclose(fp);




}
