#include <stdio.h>
#include <stdlib.h>
int *v,*newV;
int n,i,opcion;

void main() {
  v=malloc(n*sizeof(int));
  do{
    printf("Ingrese una opcion\n");
    fflush(stdin);
    scanf("%d",&opcion);
    if(opcion == 1){
      if(n>0){
        newV=realloc(v,n*sizeof(int));
        if(NULL == newV){
            free(newV);
            printf("ERORR\n");
        }else{
            free(v);
            printf("SE ASIGNO BIEN\n");
        }
        fflush(stdin);
        scanf("%d",&newV[n]);
        n++;
      }else{
        scanf("%d",&v[n]);
        n++;
      }
    }
    if(opcion==2){
        for(i=0;i<n;i++){
            if(newV[i] != NULL){
                printf("%d. %d\n",i,newV[i]);
            }

        }
    }
  }while(opcion != 3);
  free(newV);
}

void imprimir(int v[],int n){
int aux;
    for(i=0;i<n;i++){
        aux+=v[i];
    }
    int media = aux / n;
    printf("media: %d\n",media);
}
/*void main(){
  int *v,*nV;
  int i,n=3;
  v=malloc(n*sizeof(int));
  v[0]=23;
  v[1]=56;
  v[2]=454;
  for(i=0;i<n;i++){
    printf("%d. %d\n",i,v[i]);
  }
  n=6;
  nV=realloc(v,n*sizeof(int));
  nV[3]=4;
  nV[4]=152;
  nV[5]=774;
  printf("\n\n");
  for(i=0;i<n;i++){
    printf("%d. %d\n",i,nV[i]);
  }
}*/
