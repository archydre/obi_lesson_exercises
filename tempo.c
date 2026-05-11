#include <stdio.h>
#include <string.h>

#define MAX 100

int main(){
  int n;
  scanf("%d", n);

  int amigos[MAX + 1][4] = {0};

  int tempoAtual = 0;

  char tipo;
  int numeroAmigo;

  for(int i = 0; i < n; i++){
    scanf(" %c %d", &tipo, &numeroAmigo);
  }

  return 0;
}