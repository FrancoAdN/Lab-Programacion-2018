#include <stdio.h>
#include <windows.h>
#include <conio.h>

struct posiciones{
  int x;
  int y;
}pos[10];


int i=0,j=0;
int game=0,cambio=0;
char serpiente[10];
int sizeS=sizeof(serpiente)/sizeof(serpiente[0]);
int sizeP=sizeof(pos)/sizeof(pos[0]);
int length = 2;


void gotoxy(int x,int y){
    HANDLE hCon;
    hCon= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;

    SetConsoleCursorPosition(hCon,dwPos);
}


void main(){
  serpiente[0]='*';
  pos[0].x=10; pos[0].y=10;
  serpiente[1]='*';
  pos[1].x=9; pos[1].y=10;
  while(!game){
    if(kbhit()){

      limpiarGotoxy();
      // gotoxy(numX,numY);printf("*");
      char tecla=getch();
      if(tecla == 'a') pos[0].x--;cambio=1;
      if(tecla == 's') pos[0].y++;cambio=1;
      if(tecla == 'd') pos[0].x++;cambio=1;
      if(tecla == 'w') pos[0].y--;cambio=1;
      if(tecla == 't') serpiente[length]='*';length++;

      if(cambio){
        if(tecla == 'a'){
          for(i=1;i<length+1;i++){
            pos[i].x=pos[i-1].x-1;
            pos[i].y=pos[i-1].y;
          }
        }
        if(tecla == 'd'){
          for(i=1;i<length+1;i++){
            pos[i].x=pos[i-1].x+1;
            pos[i].y=pos[i-1].y;
          }
        }
        if(tecla == 'w'){
          for(i=1;i<length+1;i++){
            pos[i].x=pos[i-1].x;
            pos[i].y=pos[i-1].y-1;
          }
        }
        if(tecla == 's'){
          for(i=1;i<length+1;i++){
            pos[i].x=pos[i-1].x;
            pos[i].y=pos[i-1].y+1;

          }
        }

        cambio=0;
      }
    }



    Snake();

  }

    Sleep(30);


}


void limpiarGotoxy(){
  for(i=0;i<50;i++){
    for(j=0;j<25;j++){
      gotoxy(i,j);
      printf(" ");
    }
  }
}





void Snake (){
  for(i = 0 ;i < length+1 ; i++){
    gotoxy(pos[i].x,pos[i].y);
    printf("%c",serpiente[i]);
  }
}
