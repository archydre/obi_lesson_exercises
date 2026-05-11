#include <stdio.h>
#include <string.h>

int main(){
  char entrada[200];
  scanf("%s", entrada);
  int tamanhoEntrada = strlen(entrada);

  int cartas[4][13] = {0};
  int erros[4] = {0};

  for(int i = 0; i < tamanhoEntrada; i += 3){
    int numero = (entrada[i] - '0') * 10 + (entrada[i + 1] - '0');
    char naipeChar = entrada[i + 2];

    int linha;
    switch(naipeChar){
      case 'C': linha = 0; break;
      case 'E': linha = 1; break;
      case 'U': linha = 2; break;
      case 'P': linha = 3; break;
    }

    int coluna = numero - 1;

    if(cartas[linha][coluna] == 1){
      erros[linha] = 1;
    }else{
      cartas[linha][coluna] = 1;
    }
  }

  for(int i = 0; i < 4; i++){
    if(erros[i] == 1){
      printf("erro\n");
      continue;
    }

    int cont = 0;
    for(int j = 0; j < 13; j++){
      if(cartas[i][j] == 1) cont++;
    }

    int faltam = 13 - cont;
    printf("%d\n", faltam);
  }

  return 0;
}