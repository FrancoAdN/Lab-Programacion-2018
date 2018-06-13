#include <stdio.h>
#include <ctype.h>
#include <string.h>
struct al {
    char nombre[30];
    int edad;
    char email[40];
    int telefono;
};

char opcion;
struct al alumnos[20];
int len = 0;

void main(){



        do{
        system("cls");
        printf("A. Para ingresar un alumno \n");
        printf("B. Para editar un alumno\n");
        printf("C. Para elimniar un alumno\n");
        printf("D. Para listar los alumnos\n");
        printf("E. Para listar los alumnos en orden alfabetico\n");
        printf("F. Para eliminar el listado\n");
        printf("Z. para salir del programa\n");
        printf("\nIngrese una opcion\n");
        fflush(stdin);
        scanf("%c",&opcion);
        opcion = toupper(opcion);
        switch(opcion){
            case 'A':
                ingresarAlumno();
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
                imprimirAlumnos();
                getch();
                break;
            case 'E':
                //Funcion alf
                alfabetico();
                printf("opcion E");
                break;
            case 'F':
                printf("Se ha eliminado la lista\n");
                len=0;
                getch();
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


void ingresarAlumno(){

    printf("\nIngrese el nombre completo del alumno \n");
    fflush(stdin);
    gets(alumnos[len].nombre);
    printf("\nIngrese la edad del alumno \n");
    fflush(stdin);
    scanf("%d",&alumnos[len].edad);
    printf("\nIngrese el email del alumno \n");
    fflush(stdin);
    gets(alumnos[len].email);
    printf("\nIngrese el numero de telefono del alumno\n");
    fflush(stdin);
    scanf("%d",&alumnos[len].telefono);
    len++;


}

void imprimirAlumnos(){
    int i;
    for(i=0;i<len;i++){
        printf("\n%d. nombre:",i);
        puts(alumnos[i].nombre);
        printf("edad: %d\n",alumnos[i].edad);
        printf("email: ");
        puts(alumnos[i].email);
        printf("telefono: %d\n",alumnos[i].telefono);
    }
}

void editarAl(){
    int editar=0;
    int i;
    char eleccion[10];
    imprimirAlumnos();
    printf("\nIngrese el numero de alumno a editar\n");
    fflush(stdin);
    scanf("%d",&editar);
    printf("\n%d. nombre:",editar);
    puts(alumnos[editar].nombre);
    printf("edad: %d\n",alumnos[editar].edad);
    printf("email: ");
    puts(alumnos[editar].email);
    printf("telefono: %d\n",alumnos[editar].telefono);

    printf("\nIngrese que va a editar del alumno\n");
    fflush(stdin);
    gets(eleccion);
    for(i=0;i<10;i++){
        eleccion[i]=towlower(eleccion[i]);
    }

    if(eleccion[0] == 'n'){
        printf("\n%d nombre: ",editar);
        fflush(stdin);
        gets(alumnos[editar].nombre);
    }else if(eleccion[0] == 'e' && eleccion[1] == 'd'){
        printf("\n%d edad: ",editar);
        fflush(stdin);
        scanf("%d",&alumnos[editar].edad);
    }else if(eleccion[0] == 'e' && eleccion[1] == 'm'){
        printf("\n%d. email: ", editar);
        fflush(stdin);
        gets(alumnos[editar].email);
    }else if(eleccion[0] == 't'){
        printf("\n%d. telefono: ",editar);
        fflush(stdin);
        scanf("%d",&alumnos[editar].telefono);
    }


}


void eliminarAlumno(){
    int elm;
    struct al aux;
    imprimirAlumnos();
    printf("\nIngrese el numero de alumno a eliminar\n");
    fflush(stdin);
    scanf("%d",&elm);
    strcpy(aux.nombre,alumnos[len-1].nombre);
    strcpy(alumnos[len-1].nombre,alumnos[elm].nombre);
    strcpy(alumnos[elm].nombre,aux.nombre);
    aux.edad = alumnos[len-1].edad;
    alumnos[len-1].edad = alumnos[elm].edad;
    alumnos[elm].edad = aux.edad;
    strcpy(aux.email,alumnos[len-1].email);
    strcpy(alumnos[len-1].email,alumnos[elm].email);
    strcpy(alumnos[elm].email,aux.email);
    aux.telefono = alumnos[len-1].telefono;
    alumnos[len-1].telefono = alumnos[elm].telefono;
    alumnos[elm].telefono = aux.telefono;
    len--;
}

void alfabetico(){
    int i,j;
    struct al aux;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(strcmp(alumnos[i].nombre,alumnos[j].nombre)>0){
                aux=alumnos[i];
                alumnos[i]=alumnos[j];
                alumnos[j]=aux;
            }
        }
    }

    imprimirAlumnos();
    getch();

}
