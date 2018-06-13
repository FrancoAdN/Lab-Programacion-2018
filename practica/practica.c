#include <stdio.h>
#include <stdlib.h>
int *v,*es,*sumas;
int n,len,lenS,j,i,k;
void main(){
  printf("Ingrese el valor de n: \n");
  scanf("%d",&n);

  //VECTOR PARA ESPACIOS
  es=malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    es[i]=i*n;
  }
  //CREAR VECTOR PARA LOS VALORES
  len = n*n;
  v=malloc(len*sizeof(int));
  //IMPRIMIR VECTOR CON ESPACIOS
  for(i=0;i<len;i++){
    for(j=0;j<n;j++){
      if(i==es[j]){
        printf("\n\n");
      }
    }
    v[i]=i+1;
    printf("%d  ",v[i]);
  }
  printf("\n\n");
  /*FIN DE IMPRESION CON ESPACIOS*/

  //VECTOR DE LAS SUMATORIAS
  lenS=(n*2)+2;
  sumas=malloc(lenS*sizeof(int));
  //LLENAR VECTOR DE SUMAS
  int aux;
  for(i=0;i<lenS;i++){
    if(i<=2){
      for(j=0;j<n;j++){
        aux=v[i+j];
        sumas[i]+=aux;
        printf("aux: %d\n",aux);
      }
    }else if(i>=n && i<n*2){
      for(j=0;j<n;j++){
        for(k=0;k<n;k++){
          aux=(k+j)*2;
          sumas[i]+=aux;
          printf("aux: %d\n",aux);
        }
      }
    }
    printf("sumas %d: %d\n",i,sumas[i]);
  }



}
