#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void printPai(){
  printf("ITS OVER ANAKIN I HAVE THE HIGH GROUND!\n");
}

void printFilho(){
  printf("YOU UNDERSTIMATE MY POWER\n");
}

int main(){
  pid_t pid;
  pid = fork();
  if(pid == 0) printFilho();
  else printPai();

  return 0;
}
