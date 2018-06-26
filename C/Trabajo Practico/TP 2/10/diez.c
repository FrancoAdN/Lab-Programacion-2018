#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char num[100][4];
int n=0,cont=0;
FILE *fp;
char ch;
int cantidad[20],i=0;


void main(){
  fp=fopen("datos.csv","r");
  while((ch=fgetc(fp)) != EOF){
    if(ch != '\n'){
      num[n][cont]=ch;
      cont++;
    }else{
      cantidad[n]=1;
      n++;
      cont=0;
    }
  }
  fclose(fp);

  for(i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(strcmp(num[i],num[j])==0){
            cantidad[i]++;
            strcpy(num[j],"abc");
        }

    }
  }

  int mayor=0,menor=100;
  for(i=0;i<n;i++){
    if(strcmp(num[i],"abc")!= 0){
       if(cantidad[i]>mayor){
          mayor=cantidad[i];
       }
       if(cantidad[i]<menor){
          menor=cantidad[i];
       }
    }
  }

for(i=0;i<n;i++){
  if(strcmp(num[i],"abc")!=0){
    if(cantidad[i]==mayor){
      printf("%s\t%d**\n",num[i],cantidad[i]);
    }else if(cantidad[i]==menor){
      printf("%s\t%d--\n",num[i],cantidad[i]);
    }else{
      printf("%s\t%d\n",num[i],cantidad[i]);
    }

  }
}

}
