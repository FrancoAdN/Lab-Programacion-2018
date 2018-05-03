#include <stdio.h>
#include <string.h>
#include <ctype.h>

char opcion;
char alumnos[100][20];
int len = 0,i = 0,edit=0;


void main(){
   /* printf("ingrese un nombre\n");
    fflush(stdin);
    gets(nombre);
    puts(nombre);*/


    printf("Bienvenido al programa \n\n");

    printf("A. Para ingresar un alumno \n");
    printf("B. Para editar un alumno\n");
    printf("C. Para elimniar un alumno\n");
    printf("D. Para listar los alumnos\n");
    printf("E. Para listar los alumnos en orden alfabetico\n");
    printf("F. Para eliminar el listado\n");
    printf("Z. para salir del programa\n");

    do{
        printf("\nIngrese una opcion\n");
        fflush(stdin);
        scanf("%c",&opcion);
        opcion = toupper(opcion);
        switch(opcion){
            case 'A':
                printf("\nIngrese el nombre completo del alumno\n");
                fflush(stdin);
                gets(alumnos[len]);
                len++;
                break;
            case 'B':
                //FUNCION EDIT
                editarAl();
                break;
            case 'C':
                //FUNCION ELIMINAR
                eliminarAlumno();
                break;
            case 'D':
                imprimirVector();
                break;
            case 'E':
                alfabetico(alumnos,len);
                break;
            case 'F':
                len=0;
                break;
            default :
                if(opcion != 'Z'){
                    printf("Opcion incorrecta \n");
                    break;
                }
                break;
        }


    }while(opcion != 'Z');
    system("PAUSE");

}

void imprimirVector(){
    for(i=0;i<len;i++){
        printf("%d. ",i);
        puts(alumnos[i]);

    }
}

void editarAl(){

    imprimirVector();
    printf("\nIngrese el numero de alumno a editar\n");
    fflush(stdin);
    scanf("%d",&edit);
    printf("%d. ",edit);
    fflush(stdin);
    gets(alumnos[edit]);

}

void eliminarAlumno(){
    char aux[20];
    imprimirVector();
    printf("\nIngrese el numero de alumno a eliminar\n");
    fflush(stdin);
    scanf("%d",&edit);
    strcpy(aux,alumnos[len-1]);
    strcpy(alumnos[len-1],alumnos[edit]);
    strcpy(alumnos[edit],aux);
    len--;

}

void alfabetico(char vector[],int size){
    int i,j;
    char aux[20];
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(strcmp(vector[i],vector[j])>0){
                strcpy(aux,vector[i]);
                strcpy(vector[i],vector[j]);
                strcpy(vector[j],aux);
            }
        }
    }

    imprimirVector();
    getch();

}

