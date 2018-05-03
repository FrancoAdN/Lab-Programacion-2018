#include <stdio.h>
#include <stdlib.h>
/*int *v,*newV;
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
        fflush(stdin);
        scanf("%d",&v[n]);
        n++;
      }else{
        scanf("%d",&v[n]);
        n++;
      }
    }
    if(opcion==2){
        printf(" v[0] = %d\n",newV[0]);
        //imprimir(newV,n);
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
}*/
void main(){
  int *v;
  int i,n=3;
  v=malloc(n*sizeof(int));
  v[0]=23;
  v[1]=56;
  v[2]=454;
  for(i=0;i<n;i++){
    printf("%d. %d\n",i,v[i]);
  }
}
