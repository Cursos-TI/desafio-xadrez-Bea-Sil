#include <stdio.h> 

int main () {
   const int B_bispo = 5;
   const int T_torre = 5;
   const int R_rainha = 8;

    //Movimentando a torre usando: FOR
    // A torre se move em linha reta 
    // 5 casas para a direita
    printf("\n Movimentando a Torre \n");
    for (int i = 1; i <= T_torre; i++){
        printf("Direita \n", i);
    }
     
     
   //Movimentando bispo usando : WHILE
   //O bispo se move na diagonal
   // 5 casas para cima e á direita 

   printf("\n Movimentando o Bispo \n");
   int b = 1;
   while (b <= B_bispo){
    printf("Cima,direita \n", b);
    b++;
   }


   //Movimentando a rainha usando: DO-WHILE
   // A rainha se move em todas as direções 
   // 8 casas para a esquerda
   printf("\n Movimentando a Rainha \n");
   int r = 1; 
   do{
    printf("Esquerda \n");
    r++;
   } while (r <= R_rainha);
   
   printf("\nSimulação concluída com sucesso!\n");

  return 0;
}