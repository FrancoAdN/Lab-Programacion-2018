#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
char pacman='<';
char matriz[28][28];
int i,j,game = 0;

void main()
{
    for(i=0;i<28;i++){
        for(j=0;j<28;j++){
            matriz[i][j]='.';
        }
    }

    moverse();

}

void imprimirTablero(){
    printf("\n\n\n\n\n");
    printf("        ------------------------------\n");
    printf("        |%c%c%c%c%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n" ,matriz[0][0],matriz[0][1],matriz[0][2],matriz[0][3],matriz[0][4],matriz[0][5],matriz[0][6],matriz[0][7],matriz[0][8],matriz[0][9],matriz[0][10],matriz[0][11],matriz[0][12],matriz[0][13],matriz[0][14],matriz[0][15],matriz[0][16],matriz[0][17],matriz[0][18],matriz[0][19],matriz[0][20],matriz[0][21],matriz[0][22],matriz[0][23],matriz[0][24],matriz[0][25],matriz[0][26],matriz[0][27] );
    printf("        |%c ----- %c%c%c%c%c%c|%c%c%c%c%c%c ----- %c|\n",matriz[1][0],matriz[1][1],matriz[1][2],matriz[1][3],matriz[1][4],matriz[1][5],matriz[1][6],matriz[1][7],matriz[1][8],matriz[1][9],matriz[1][10],matriz[1][11],matriz[1][12],matriz[1][13]);
    printf("        |%c|     |%c%c%c%c%c%c|%c%c%c%c%c%c|     |%c|\n",matriz[2][0],matriz[2][1],matriz[2][2],matriz[2][3],matriz[2][4],matriz[2][5],matriz[2][6],matriz[2][7],matriz[2][8],matriz[2][9],matriz[2][10],matriz[2][11]);
    printf("        |%c|     |%c%c%c%c%c%c|%c%c%c%c%c%c|     |%c|\n",matriz[3][0],matriz[3][1],matriz[3][2],matriz[3][3],matriz[3][4],matriz[3][5],matriz[3][6],matriz[3][7],matriz[3][8],matriz[3][9],matriz[3][10],matriz[3][11]);
    printf("        |%c ----- %c%c%c%c%c%c|%c%c%c%c%c%c ----- %c|\n",matriz[4][0],matriz[4][1],matriz[4][2],matriz[4][3],matriz[4][4],matriz[4][5],matriz[4][6],matriz[4][7],matriz[4][8],matriz[4][9],matriz[4][10],matriz[4][11],matriz[4][12],matriz[4][13]);
    printf("        |%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n" ,matriz[5][0],matriz[5][1],matriz[5][2],matriz[5][3],matriz[5][4],matriz[5][5],matriz[5][6],matriz[5][7],matriz[5][8],matriz[5][9],matriz[5][10],matriz[5][11],matriz[5][12],matriz[5][13],matriz[5][14],matriz[5][15],matriz[5][16],matriz[5][17],matriz[5][18],matriz[5][19],matriz[5][20],matriz[5][21],matriz[5][22],matriz[5][23],matriz[5][24],matriz[5][25],matriz[5][26],matriz[5][27],matriz[5][28]);
    printf("        |%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n" ,matriz[6][0],matriz[6][1],matriz[6][2],matriz[6][3],matriz[6][4],matriz[6][5],matriz[6][6],matriz[6][7],matriz[6][8],matriz[6][9],matriz[6][10],matriz[6][11],matriz[6][12],matriz[6][13],matriz[6][14],matriz[6][15],matriz[6][16],matriz[6][17],matriz[6][18],matriz[6][19],matriz[6][20],matriz[6][21],matriz[6][22],matriz[6][23],matriz[6][24],matriz[6][25],matriz[6][26],matriz[6][27],matriz[6][28]);
    printf("        |%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n" ,matriz[7][0],matriz[7][1],matriz[7][2],matriz[7][3],matriz[7][4],matriz[7][5],matriz[7][6],matriz[7][7],matriz[7][8],matriz[7][9],matriz[7][10],matriz[7][11],matriz[7][12],matriz[7][13],matriz[7][14],matriz[7][15],matriz[7][16],matriz[7][17],matriz[7][18],matriz[7][19],matriz[7][20],matriz[7][21],matriz[7][22],matriz[7][23],matriz[7][24],matriz[7][25],matriz[7][26],matriz[7][27],matriz[7][28]);
    printf("        ----- %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c -----\n",matriz[8][0],matriz[8][1],matriz[8][2],matriz[8][3],matriz[8][4],matriz[8][5],matriz[8][6],matriz[8][7],matriz[8][8],matriz[8][9],matriz[8][10],matriz[8][11],matriz[8][12],matriz[8][13],matriz[8][14],matriz[8][15],matriz[8][16],matriz[8][17]);
    printf("             |%c%c%c%c%c%c ----- %c%c%c%c%c%c|    \n",matriz[9][0],matriz[2][1],matriz[9][2],matriz[2][3],matriz[9][4],matriz[9][5],matriz[9][6],matriz[9][7],matriz[9][8],matriz[9][9],matriz[9][10],matriz[9][11]);
    printf("             |%c%c%c%c%c%c|     |%c%c%c%c%c%c|    \n",matriz[10][0],matriz[10][1],matriz[10][2],matriz[2][3],matriz[10][4],matriz[10][5],matriz[10][6],matriz[10][7],matriz[10][8],matriz[10][9],matriz[10][10],matriz[10][11]);
    printf("             |%c%c%c%c%c%c|     |%c%c%c%c%c%c|    \n",matriz[11][0],matriz[11][1],matriz[11][2],matriz[2][3],matriz[11][4],matriz[11][5],matriz[11][6],matriz[11][7],matriz[11][8],matriz[11][9],matriz[11][10],matriz[11][11]);
    printf("             |%c%c%c%c%c%c ----- %c%c%c%c%c%c|    \n",matriz[12][0],matriz[12][1],matriz[12][2],matriz[12][3],matriz[12][4],matriz[12][5],matriz[12][6],matriz[12][7],matriz[12][8],matriz[12][9],matriz[12][10],matriz[12][11]);
    printf("        ----- %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c -----\n",matriz[13][0],matriz[13][1],matriz[13][2],matriz[13][3],matriz[13][4],matriz[13][5],matriz[13][6],matriz[13][7],matriz[13][8],matriz[13][9],matriz[13][10],matriz[13][11],matriz[13][12],matriz[13][13],matriz[13][14],matriz[13][15],matriz[13][16],matriz[13][17]);
    printf("        |%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n" ,matriz[14][0],matriz[14][1],matriz[14][2],matriz[14][3],matriz[14][4],matriz[14][5],matriz[14][6],matriz[14][7],matriz[14][8],matriz[14][9],matriz[14][10],matriz[14][11],matriz[14][12],matriz[14][13],matriz[14][14],matriz[14][15],matriz[14][16],matriz[14][17],matriz[14][18],matriz[14][19],matriz[14][20],matriz[14][21],matriz[14][22],matriz[14][23],matriz[14][24],matriz[14][25],matriz[14][26],matriz[14][27],matriz[14][28]);
    printf("        |%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n" ,matriz[15][0],matriz[15][1],matriz[15][2],matriz[15][3],matriz[15][4],matriz[15][5],matriz[15][6],matriz[15][7],matriz[15][8],matriz[15][9],matriz[15][10],matriz[15][11],matriz[15][12],matriz[15][13],matriz[15][14],matriz[15][15],matriz[15][16],matriz[15][17],matriz[15][18],matriz[15][19],matriz[15][20],matriz[15][21],matriz[15][22],matriz[15][23],matriz[15][24],matriz[15][25],matriz[15][26],matriz[15][27],matriz[15][28]);
    printf("        |%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n" ,matriz[7][0],matriz[7][1],matriz[7][2],matriz[7][3],matriz[7][4],matriz[7][5],matriz[7][6],matriz[7][7],matriz[7][8],matriz[7][9],matriz[7][10],matriz[7][11],matriz[7][12],matriz[7][13],matriz[7][14],matriz[7][15],matriz[7][16],matriz[7][17],matriz[7][18],matriz[7][19],matriz[7][20],matriz[7][21],matriz[7][22],matriz[7][23],matriz[7][24],matriz[7][25],matriz[7][26],matriz[7][27],matriz[7][28]);
    printf("        |%c ----- %c%c%c%c%c%c|%c%c%c%c%c%c ----- %c|\n",matriz[16][0],matriz[16][1],matriz[16][2],matriz[16][3],matriz[16][4],matriz[16][5],matriz[16][6],matriz[16][7],matriz[16][8],matriz[16][9],matriz[16][10],matriz[16][11],matriz[16][12],matriz[16][13]);
    printf("        |%c|     |%c%c%c%c%c%c|%c%c%c%c%c%c|     |%c|\n",matriz[17][0],matriz[17][1],matriz[17][2],matriz[17][3],matriz[17][4],matriz[17][5],matriz[17][6],matriz[17][7],matriz[17][8],matriz[17][9],matriz[17][10],matriz[17][11]);
    printf("        |%c|     |%c%c%c%c%c%c|%c%c%c%c%c%c|     |%c|\n",matriz[18][0],matriz[18][1],matriz[18][2],matriz[18][3],matriz[18][4],matriz[18][5],matriz[18][6],matriz[18][7],matriz[18][8],matriz[18][9],matriz[18][10],matriz[18][11]);
    printf("        |%c ----- %c%c%c%c%c%c|%c%c%c%c%c%c ----- %c|\n",matriz[19][0],matriz[19][1],matriz[19][2],matriz[19][3],matriz[19][4],matriz[19][5],matriz[19][6],matriz[19][7],matriz[19][8],matriz[19][9],matriz[19][10],matriz[19][11],matriz[19][12],matriz[19][13]);
    printf("        |%c%c%c%c%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n" ,matriz[20][0],matriz[20][1],matriz[20][2],matriz[20][3],matriz[20][4],matriz[20][5],matriz[20][6],matriz[20][7],matriz[20][8],matriz[20][9],matriz[20][10],matriz[20][11],matriz[20][12],matriz[20][13],matriz[20][14],matriz[20][15],matriz[20][16],matriz[20][17],matriz[20][18],matriz[20][19],matriz[20][20],matriz[20][21],matriz[20][22],matriz[20][23],matriz[20][24],matriz[20][25],matriz[20][26],matriz[20][27] );
    printf("        ------------------------------\n");

}

void gotoxy(int x, int y){
    HANDLE hCon;
    hCon= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;

    SetConsoleCursorPosition(hCon,dwPos);

}


void moverse(){

int x=0;
int y=0;

/*

    int x=0;
    int y=0;
    int game = 0;

    while(!game){

        char tecla=getch();
        gotoxy(x,y);printf(" ");
        if(tecla == 'a') x--;
        if(tecla == 'd') x++;
        if(tecla == 'w') y--;
        if(tecla == 's') y++;
        gotoxy(x,y);printf("<");

    }

    Sleep(30);*/

    while(!game){

        matriz[y][x]=' ';
        imprimirTablero();
        char tecla = getch();
        if(tecla == 'a') x--;
        if(tecla == 'd') x++;
        if(tecla == 'w') y++;
        if(tecla == 's') y--;
        matriz[y][x]=pacman;
        system("cls");
        imprimirTablero();
    }
    Sleep(30);



}
