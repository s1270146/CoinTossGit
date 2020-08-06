#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define N 3

int main(){
  int i,cnt=0;
  char str[20];

  printf("Who are you?\n> ");
  scanf("%s",str);
  printf("Hello,%s!\n", str);

  printf("Tossing a coin...\n");
  for(i=0;i<N;i++){
    srand((unsigned int)time(NULL));
    printf("Round %d:",i+1);
    if(rand() % 2 +1 == 1){
      printf("Heads\n");
      cnt++;
    }
    else {
      printf("Tails\n");
    }
    sleep(1);
  }
  printf("Heads:%d,Tails:%d\n",cnt,3-cnt);

  if(cnt > 1){
    printf("%s won!\n", str);
  }
  else {
    printf("%s lost!\n", str);
  }

  return 0;
}
