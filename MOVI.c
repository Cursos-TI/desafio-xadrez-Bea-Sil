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
   int j = 1;
   while (j <= B_bispo){
    printf("Cima,direita \n", j);
    j++;
   }


   //Movimentando a rainha usando: DO-WHILE
   // A rainha se move em todas as direções 
   // 8 casas para a esquerda
   printf("\n Movimentando a Rainha \n");
   int k = 1; 
   do{
    printf("Esquerda \n");
    k++;
   } while (k <= R_rainha);

   // Movimentando o Cavalo usando loops aninhados
   // O cavalo se movimenta em L
   // Duas casas para baixo e 1 para esquerda 
     printf("\n Movimentando o Cavalo \n");

    const int C_baixo = 2;
    const int C_esquerda = 1;

    // Primeiro movimento: duas casas para baixo (usando FOR)
    for (int i = 1; i <= C_baixo; i++) {
        printf("Baixo\n");

        // Segundo movimento: uma casa para a esquerda (usando WHILE aninhado)
        int e = 0;
        while (e < C_esquerda && i == C_baixo) {
            printf("Esquerda\n");
            e++;
        }
    }
   
   printf("\nSimulação concluída com sucesso!\n");

  return 0;
}