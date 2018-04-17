#include <stdio.h>
#include <windows.h>
#include <conio.h>

struct posiciones{
  int x;
  int y;
}pos[100];

struct puntos{
  char nombre[20];
  int puntaje;
}puntos[100];


int i=0,j=0;
int numX;numY;
int game=0,cambio=0;
char serpiente[100];
int sizeS=sizeof(serpiente)/sizeof(serpiente[0]);
int sizeP=sizeof(pos)/sizeof(pos[0]);
int length = 2;
int hola=0;
char ali = '+';


void gotoxy(int x,int y){
    HANDLE hCon;
    hCon= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;

    SetConsoleCursorPosition(hCon,dwPos);
}
void ocultarCursor(){
  HANDLE hCon;
  hCon= GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_CURSOR_INFO cci;
  cci.dwSize = 2;
  cci.bVisible= FALSE;
  SetConsoleCursorInfo(hCon,&cci);
}


void main(){
  length=2;
  system("color 3");
  inicio();
  system("cls");

  if(game == 1){
    ocultarCursor();
    alimento();
    serpiente[0]='*';
    pos[0].x=10; pos[0].y=10;
    serpiente[1]='*';
    pos[1].x=9; pos[1].y=10;
    tablero();
  }
  while(game == 1){

    if(kbhit()){

      limpiarGotoxy();
      gotoxy(numX,numY);printf("%c",ali);

      char tecla=getch();
      if( tecla == 'w'|| tecla == 'a' || tecla == 's' || tecla == 'd'){
        for(i=0;i<sizeS;i++){
          pos[sizeS-i].x=pos[sizeS-i-1].x;
          pos[sizeS-i].y=pos[sizeS-i-1].y;
        }
      }
      if(tecla == 'a'){
        pos[0].x--;
      }
      if(tecla == 's'){
        pos[0].y++;
      }
      if(tecla == 'd'){
        pos[0].x++;
      }
      if(tecla == 'w'){
        pos[0].y--;
      }
      verificar();

    }

  Snake();

  }


  if(!game){
    system("cls");
    printf("\n\n\n\n");
    printf("PERDISTE\n");
    system("PAUSE");
    main();
  }


}


void limpiarGotoxy(){
  for(i=1;i<50;i++){
    for(j=1;j<25;j++){
      gotoxy(i,j);
      printf(" ");
    }
  }
}





void Snake (){

  for(i=0;i<length;i++){
    gotoxy(pos[i].x,pos[i].y);printf("%c",serpiente[i]);

  }

  gotoxy(0,26); printf("PUNTAJE : %d",puntos[hola].puntaje);
}


void alimento(){

    srand(time(NULL));
    numX=1+rand()%((48+1)-1);
    numY=1+rand()%((23+1)-1);

}



void verificar(){

    if(pos[0].x==numX && pos[0].y==numY){
        serpiente[length]='*';
        length++;
        puntos[hola].puntaje += 100;
        alimento();
    }
    for(i=1;i<length;i++){
      if(pos[0].x == pos[i].x && pos[0].y == pos[i].y){
        game = 0;
      }
    }
  //colision con tablero
  for(i=0;i<25;i++){
    if( (pos[0].x == 0 && pos[0].y == i) || (pos[0].x == 50 && pos[0].y == i)){
      game = 0;
    }
  }
  for(i=0;i<50;i++){
    if( (pos[0].x == i && pos[0].y == 0 ) || (pos[0].x == i && pos[0].y == 25) ){
      game = 0;
    }
  }



}

void tablero(){

    for(i=0;i<25;i++){   // columna izquierda
        gotoxy(0,i);printf("|");
    }

    for(i=0;i<50;i++){ // primera fila (ARRIBA)
        gotoxy(i,0);printf("-");
    }

    for(i=0;i<25;i++){  //columna derecha
        gotoxy(50,i);printf("|");
    }

    for(i=0;i<50;i++){  //ultima fila (ABAJO)
        gotoxy(i,25);printf("-");
    }


}

void inicio(){

  printf("Bienvenido al snake\n\n\n");
  printf("Ingrese su nombre\n");
  fflush(stdin);
  scanf("%s",&puntos[hola].nombre);
  printf("Hola %s, ingrese: \n",puntos[hola].nombre);
  printf("1. Para jugar.\n");
  printf("2. Para mostrar la tabla de puntuaciones.\n");
  printf("3. Para salir.\n");
  fflush(stdin);
  scanf("%d",&game);

  if(game == 2){
    printf("NOMBRE      PUNTOS      \n");
    /*if(hola >= 2){
      for(i=0;i<hola-1;i++){
        for(j=i+1;j<hola;j++){
         if(puntos[j].puntaje>puntos[i].puntaje){
          int aux=puntos[i].puntaje;
          puntos[i].puntaje=puntos[j].puntaje;
          puntos[j].puntaje=aux;

          /*char nAux=puntos[i].nombre;
          puntos[i].nombre=puntos[j].nombre;
          puntos[j].nombre = nAux;*/
         /*}
        }
      }
    }*/
    for(i=0;i<hola;i++){
      printf("%s   %d\n",puntos[i].nombre,puntos[i].puntaje);
    }
    system("PAUSE");
  }
  hola++;

}
