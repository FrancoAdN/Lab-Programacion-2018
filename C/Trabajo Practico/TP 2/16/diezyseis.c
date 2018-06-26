#include <stdio.h>
#include <string.h>
struct tem {
  char hora[8];
  float temp;
  char fecha[10];
}medir[100];
char hora[100][10];
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
        n++;
        system("cls");
        printf("Ingrese la temperatura (formato: ff.ff)\n");
        fflush(stdin);
        scanf("%f",&medir[n].temp);
        printf("Ingrese la fecha (formato: yyyy-mm-dd)\n");
        fflush(stdin);
        gets(medir[n].fecha);
        printf("Ingrese la hora (formato: hh.mm.ss)\n");
        fflush(stdin);
        gets(medir[n].hora);
        break;

      case 2:
        system("cls");
        for(i=0;i<=n;i++){
            printf("%.2f\n",medir[i].temp);
            puts(medir[i].fecha);
            puts(medir[i].hora);
        }
        break;
      case 3:
        fp=fopen("arch.txt","r+");
        fputs(name,fp);
        fclose(fp);
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
