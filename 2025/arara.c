#include <stdio.h>

int main(){
  int numeroAraras, quantidadeGaiolas;
  scanf("%d %d", &numeroAraras, &quantidadeGaiolas);

  /* numeroAraras--;
  quantidadeGaiolas--; */

  while(numeroAraras > 0 && quantidadeGaiolas > 0){ 
    numeroAraras--;
    quantidadeGaiolas -= 5;
  }

  // 3 11
  // 2 6

  if(numeroAraras > 0){
    printf("N\n");
  }else{
    printf("S\n");
  }

  return 0;
}