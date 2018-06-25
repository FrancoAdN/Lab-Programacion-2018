#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char frases[20][30];
int n=0,cont=0;
FILE *fp;
void main(){
  fp=fopen("quince.txt","r");
  while((frases[n][cont]=fgetc(fp)) != EOF){
    if(frases[n][cont] != '\n'){
      cont++;
    }else{
      n++;
      cont=0;
    }
  }
  fclose(fp);
  for(int i = 0; i<n;i++){
    for(int j=0;j<strlen(frases[i]);j++){
      frases[i][j]=tolower(frases[i][j]);
      if(frases[i][j]=='a' || frases[i][j]=='e'|| frases[i][j]=='i' || frases[i][j]=='o' || frases[i][j]=='u'){
        puts(frases[i]);
        break;
      }
    }
  }
}
