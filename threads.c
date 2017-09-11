#include <stdio.h>
#include <pthread.h>

void thread_sing(int id){
  printf("Mamaa, oooh(as the wind blows)\n");
}

void thread_sing2(int id){
  printf("I don't wanna die\n");
}

void thread_sing3(int id){
  printf("Sometimes I wish I hadn't born at all\n*solo de guitarra*\n");
}

int main(){

  pthread_t verse1, verse2, verse3;//declara os vers- THREADS!
  int id1=0, id2=1, id3=2;//cada thread tem uma ID para identificá-la

  pthread_create(&verse1, NULL, (void *)thread_sing, &id1);//cria as threads
  pthread_create(&verse2, NULL, (void *)thread_sing2, &id2);
  pthread_create(&verse3, NULL, (void *)thread_sing3, &id3);

  pthread_join(verse3, NULL);//suspende as threads
  pthread_join(verse2, NULL);
  pthread_join(verse1, NULL);

  return 0;
}
