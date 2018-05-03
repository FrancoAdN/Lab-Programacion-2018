#include <stdio.h>
int i=0,j=0;
float notas[20],suma;
float promedio;
int sizeN=sizeof(notas)/sizeof(notas[0]);
int ascendente=0,opcion=0;

void main(){

    cargarNotas();
    promedio = suma /sizeN;
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
                printf("El promedio es : %f\n\n",promedio);
                printf("\n\n");
                break;
            case 2:
                printf("Notas en orden descendente \n");
                ascendente = 0;
                ordenar();
                printf("\n\n");
                break;
            case 3:
                printf("Notas en orden ascendente \n");
                ascendente = 1;
                ordenar();
                printf("\n\n");
                break;
            case 4:
                cargarNotas();
                printf("\n\n");
                break;
            case 5:
                editarNotas();
                printf("\n\n");
                break;
            default:
                printf("Opcion incorrecta\n\n");
                break;
        }


    }while(opcion != 0);

    system("PAUSE");


}

void cargarNotas(){

    printf("Se ingresaran las ultimas 20 notas del curso\n");
    for(i=0;i<sizeN;i++){
        printf("Ingrese la nota %d \n",i);
        fflush(stdin);
        scanf("%f",&notas[i]);
        while(notas[i]<1 || notas[i]>10 ){
            printf("Nota fuera de rango, vuelva a ingresarla\n");
            fflush(stdin);
            scanf("%f",&notas[i]);
        }
        suma+=notas[i];
    }
}


void ordenar(){
    int j=0;
    float aux=0;

    for(i=0;i<sizeN;i++){
        for(j=i+1;j<sizeN;j++){
            if(ascendente){
                if(notas[j] <= notas[i]){
                    aux=notas[i];
                    notas[i]=notas[j];
                    notas[j]=aux;
                }
            }else{
                if(notas[j] >= notas[i]){
                    aux=notas[i];
                    notas[i]=notas[j];
                    notas[j]=aux;
                }
            }

        }
    }


    imprimirVector();


}

void imprimirVector(){
    for(i=0;i<sizeN;i++){
        printf("%d   nota : %f \n",i,notas[i]);
    }

}

void editarNotas(){
    int edit=0;
    imprimirVector();

    printf("Ingrese el numero de nota a editar\n");
    scanf("%d",&edit);
    printf("%d Ingrese la nueva nota \n",edit);
    scanf("%f",&notas[edit]);


}
