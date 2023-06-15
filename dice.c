

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  int i,num;
  int D[2]={0,0};
  char str[10];
   srand((unsigned int)time(NULL));

   printf("What is your name?\n");
   scanf("%s",str);
   printf("Hello, %s!\n",str);

  printf("Rolling dice...\n");
  for(i=0;i<2;i++){
    num=rand()%6+1;
    D[i]=num;
    printf("Die %d: %d\n",i+1,D[i]);
  }
  printf("Total value: %d\n",D[0]+D[1]);
  if(D[0]+D[1]>=7) printf("You won.\n");
  else printf("You lose.\n");
  return 0;
}
