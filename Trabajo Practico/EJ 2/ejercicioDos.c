#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <ctype.h>



char opcion;
char alumnos[20][20];
int len = 0,i;
void main(){



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
                editarAl(len,alumnos);
                break;
            case 'C':
                //FUNCION ELIMINAR
                eliminarAlumno(len,alumnos);
                break;
            case 'D':
                imprimirVector(len,alumnos);
                break;
            case 'E':
                alfabetico(len,alumnos);
                break;
            case 'F':
                len=0;
                printf("Se ha eliminado la lista\n");
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

void imprimirVector(/*int n, char v[]*/){
    int i;
    for(i=0;i<len;i++){
        printf("%d.",i);
        puts(alumnos[i]);

    }
}

void editarAl(/*int n,char v[]*/){
    int edit;
    //printf("n: %d , v[0]: %c \n",n,v[0]);
    imprimirVector();
    printf("\nIngrese el numero de alumno a editar\n");
    fflush(stdin);
    scanf("%d",&edit);
    printf("%d. ",edit);
    fflush(stdin);
    gets(alumnos[edit]);

}

void eliminarAlumno(/*int n,char v[]*/){
    char aux[20];
    int elim;
    imprimirVector();
    printf("\nIngrese el numero de alumno a eliminar\n");
    fflush(stdin);
    scanf("%d",&elim);
    strcpy(aux,alumnos[len-1]);
    strcpy(alumnos[len-1],alumnos[elim]);
    strcpy(alumnos[elim],aux);
    len--;

}

void alfabetico(/*int n,char v[]*/){
    int i,j;
    char aux[20];
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(strcmp(alumnos[i],alumnos[j])>0){
                strcpy(aux,alumnos[i]);
                strcpy(alumnos[i],alumnos[j]);
                strcpy(alumnos[j],aux);
            }
        }
    }

    imprimirVector();
    getch();

}

