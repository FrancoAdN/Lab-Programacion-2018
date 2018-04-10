#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
int game = 0;
int i,j;
int numX=0;
int numY=0;
int length=2;
int x=2,y=2;
char serpiente[10];


void gotoxy(int x,int y){
    HANDLE hCon;
    hCon= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;

    SetConsoleCursorPosition(hCon,dwPos);
}

void main(){


    tablero();
    alimento();

    serpiente[0]='*',serpiente[1]='*';


    while(!game){
        if(kbhit()){
            limpiarGotoxy();
            gotoxy(numX,numY);printf("*");
            char tecla=getch();

            if(tecla == 't') {
                if(length<10){
                    serpiente[length]='*';
                    length++;
                }

            }
            imprimirSnake(tecla);
            verificar();
        }



    }

    Sleep(30);
}


void limpiarGotoxy(){

    for(i=1;i<50;i++){
        for(j=1;j<25;j++){
            gotoxy(i,j);printf(" ");
        }
    }

}




void tablero(){

    for(i=1;i<25;i++){   // columna izquierda
        gotoxy(0,i);printf("|");
    }

    for(i=1;i<50;i++){ // primera fila (ARRIBA)
        gotoxy(i,0);printf("-");
    }

    for(i=1;i<25;i++){  //columna derecha
        gotoxy(50,i);printf("|");
    }

    for(i=1;i<50;i++){  //ultima fila (ABAJO)
        gotoxy(i,25);printf("-");
    }


}

void alimento(){

    srand(time(NULL));
    numX=1+rand()%((48+1)-1);
    numY=1+rand()%((23+1)-1);

}



void verificar(){

    if(x==numX && y==numY){
        serpiente[length]='*';
        length++;
        alimento();
    }
}


void imprimirSnake(char tecla){
    if(tecla == 'a'){
        x--;
    }

    if(tecla == 'd'){
        x++;
    }
    if(tecla == 'w'){
        y--;
    }
    if(tecla == 's'){
        y++;
    }
    gotoxy(x,y);
    for(i=0;i<length;i++){
        printf("%c",serpiente[i]);
    }


}
