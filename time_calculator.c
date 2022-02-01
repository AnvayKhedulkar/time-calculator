#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int secs;
  printf("Enter the number of seconds\n");
  scanf("&d\n",&secs);
  if (secs>60 && secs<3600) {
    printf("input seconds = %d minutes\n",secs/60 );
  }
  else if(secs>3600 && secs<86400){
    printf("input seconds = %d hours\n",secs/3600);
  }
  else{
    printf("input seconds = %d days\n",secs/86400);
  }
  return 0;
}
