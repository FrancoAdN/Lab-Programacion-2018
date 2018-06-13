#include <stdio.h>
float sacarProm(int n , float v[]);

void main(){
    float notas[20];
    int n=20;
    int ascendente,opcion;

    cargarNotas(n,notas);
    printf("\n\n\n");
    // MENU
    printf("Presione 1 para ver el promedio de las notas\n");
    printf("Presione 2 para ver las notas en orden descendente\n");
    printf("Presione 3 para ver las notas en orden ascendente \n");
    printf("Presione 4 para volver a cargar las notas\n");
    printf("Presione 5 para editar una nota \n");
    printf("Presione 0 para salir del programa\n\n");
    do{
        printf("Ingrese una opcion \n");
        fflush(stdin);
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                printf("El promedio es %f\n",sacarProm(n,notas));
                printf("\n\n");
                break;
            case 2:
                printf("Notas en orden descendente \n");
                ascendente = 0;
                ordenar(n,notas,ascendente);
                printf("\n\n");
                break;
            case 3:
                printf("Notas en orden ascendente \n");
                ascendente = 1;
                ordenar(n,notas,ascendente);
                printf("\n\n");
                break;
            case 4:
                cargarNotas(n,notas);
                printf("\n\n");
                break;
            case 5:
                editarNotas(n,notas);
                printf("\n\n");
                break;
            default:
                if(opcion != 0){
                    printf("Opcion incorrecta\n\n");
                }
                break;
        }


    }while(opcion != 0);

    system("PAUSE");


}

void cargarNotas(int n,float v[]){
    int i = 0;
    printf("Se ingresaran las ultimas 20 notas del curso\n");
    for(i=0;i<n;i++){
        printf("Ingrese la nota %d \n",i);
        fflush(stdin);
        scanf("%f",&v[i]);
        while(v[i]<1 || v[i]>10 ){
            printf("Nota fuera de rango, vuelva a ingresarla\n");
            fflush(stdin);
            scanf("%f",&v[i]);
        }
    }
}

float sacarProm(int n, float v[]){
    int i;
    float suma,promedio;
    for(i=0;i<n;i++){
        suma+=v[i];
    }
    promedio=suma/n;
    return promedio;
}


void ordenar(int n,float v[],int a){
    int j=0,i=0;
    float aux=0;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a){
                if(v[j] <= v[i]){
                    aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }else{
                if(v[j] >= v[i]){
                    aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }

        }
    }


    imprimirVector(n,v);


}

void imprimirVector(int n, float v[]){
    int i=0;
    for(i=0;i<n;i++){
        printf("%d   nota : %f \n",i,v[i]);
    }

}

void editarNotas(int n,float v[]){
    int edit=0;
    imprimirVector(n,v);

    printf("Ingrese el numero de nota a editar\n");
    fflush(stdin);
    scanf("%d",&edit);
    printf("%d Ingrese la nueva nota \n",edit);
    fflush(stdin);
    scanf("%f",&v[edit]);
    while(v[edit]<1 || v[edit]>10 ){
        printf("Nota fuera de rango, vuelva a ingresarla\n");
        fflush(stdin);
        scanf("%f",&v[edit]);
    }


}
