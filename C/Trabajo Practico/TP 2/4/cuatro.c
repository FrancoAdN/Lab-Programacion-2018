#include <stdio.h>
#include <string.h>
int num;
char nomb[100];
FILE *fp;

void main(){
  printf("Ingrese un numero\n");
  fflush(stdin);
  scanf("%d",&num);
  if(num<=999){
      convertir();
      strcat(nomb,".txt");
      fp=fopen("arch.txt","a+t");
      fputs(nomb,fp);
      fclose(fp);
      fp=fopen(nomb,"a+t");
      fprintf(fp,"Tabla del %d\n",num);
      for(int i=0;i<=9;i++){
        fprintf(fp,"%d\n",i*num );
      }
      printf("Tabla ingresada al archivo\n");
      fclose(fp);
  }else
    printf("Numero fuera de rango\n");
}

void convertir(){
    int c=num/100;
    int d=(num%100)/10;
    int u=(num%100)%10;

    switch(c){
    case 1:
        strcpy(nomb,"ciento");
        break;
    case 2:
        strcpy(nomb,"doscientos");
        break;
    case 3:
        strcpy(nomb,"trescientos");
        break;
    case 4:
        strcpy(nomb,"cuatrocientos");
        break;
    case 5:
        strcpy(nomb,"quinietos");
        break;
    case 6:
        strcpy(nomb,"seiscientos");
        break;
    case 7:

        strcpy(nomb,"setecientos");
        break;
    case 8:
        strcpy(nomb,"ochocientos");
        break;
    case 9:
        strcpy(nomb,"novecientos");
        break;
    default:
        strcpy(nomb,"");

    }

    switch(d){
    case 1:
        if(u>5)
            strcat(nomb," diez ");
        break;
    case 2:
        strcat(nomb," veiti");
        break;
    case 3:
        strcat(nomb," treinta ");
        break;
    case 4:
        strcat(nomb," cuarenta ");
        break;
    case 5:
        strcat(nomb," cincuenta ");
        break;
    case 6:
        strcat(nomb," sesenta ");
        break;
    case 7:
        strcat(nomb," setenta ");
        break;
    case 8:
        strcat(nomb," ochenta ");
        break;
    case 9:
        strcat( nomb," noventa " );
        break;
    }

    switch(u){
    case 1:
        if(d==1){
            strcat(nomb," once");
        }else{
            if(d != 2)
                strcat(nomb,"y uno");
            else
                strcat(nomb,"uno");
        }
        break;
    case 2:
        if(d==1){
            strcat(nomb," doce");
        }else{
            if(d != 2)
                strcat(nomb,"y dos");
            else
                strcat(nomb,"dos");
        }
        break;
    case 3:
        if(d==1){
            strcat(nomb," trece");
        }else{
            if(d != 2)
                strcat(nomb,"y tres");
            else
                strcat(nomb,"tres");
        }
        break;
    case 4:
        if(d==1){
            strcat(nomb," catorce");
        }else{
            if(d != 2)
                strcat(nomb,"y cuatro");
            else
                strcat(nomb,"cuatro");
        }
        break;
    case 5:
        if(d==1){
            strcat(nomb," quince");
        }else{
            if(d != 2)
                strcat(nomb,"y cinco");
            else
                strcat(nomb,"cinco");
        }
        break;
    case 6:
        if(d != 2)
            strcat(nomb,"y seis");
        else
            strcat(nomb,"seis");
        break;
    case 7:
        if(d != 2)
            strcat(nomb,"y siete");
        else
            strcat(nomb,"siete");
        break;
    case 8:
        if(d != 2)
            strcat(nomb,"y ocho");
        else
            strcat(nomb,"ocho");
        break;
    case 9:
        if(d != 2)
            strcat(nomb,"y nueve");
        else
            strcat(nomb,"nueve");
        break;
    }


}
