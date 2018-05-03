#include <stdio.h>
#include <stdlib.h>
int *v;
int n=-1,i,opcion;

void main() {


  /*printf("\n Ingrese la cantidad de elementos del vector\n");
  fflush(stdin);
  scanf("%d",&n);
  v=malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    printf("\n Ingrese el valor %d\n",i);
    fflush(stdin);
    scanf("%d",&v[i]);
  }
  for(i=0;i<n;i++){
    printf("\n%d. %d\n",i,v[i]);
  }

  free(v);*/
  do{
    printf("\n1. Para ingresar un numero\n");
    printf("\n2. Para listar los numeros\n");
    printf("\n3. Para salir\n");
    scanf("%d",&opcion);
    switch (opcion) {
      case 1:
      agregarPos();
      free(v);
        break;
      case 2:
          for(i=0;i<n;i++){
            printf("\n%d. %d\n",i,v[i]);
          }
        break;
      default:
        if(opcion != 3){
            printf("\nOpcion incorrecta\n");
        }
        break;
    }
  }while (opcion != 3);





}
void agregarPos(){
  int *aux;
  aux=malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    aux[i]=v[i];
  }
  free(v);
  n++;
  v=malloc(n*sizeof(int));
  for(i=0;i<n-1;i++){
    v[i]=aux[i];
  }
  free(aux);
  printf("Ingrese la posicion %d\n",n);
  fflush(stdin);
  scanf("%d",&v[n]);
  printf("%d. %d\n",n,v[n]);


}
