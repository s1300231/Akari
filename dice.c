
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int i,num;
  int D[2]={0,0};
   srand((unsigned int)time(NULL));  

  printf("Rolling dice...\n");
  for(i=0;i<2;i++){
    num=rand()%6+1;
    D[i]=num;
    printf("Die %d: %d\n",i+1,D[i]);
  }
  printf("Total value: %d\n",D[0]+D[1]);
  return 0;
}