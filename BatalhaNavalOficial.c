#include <stdio.h>

int main(){

    //Declarando String para localizacao no tabuleiro
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i = 0;
    //Declarando Matriz
    int Tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //Posicionando Navio Horizontal
    for(int i = 2; i <= 4; i++){
        Tabuleiro[3][i] = 3;
    }

    //Posicionando Navio Vertical
    for(int i = 5; i <= 8; i++){
        Tabuleiro[i][8] = 3;
    }

    //Exibindo O Tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("   ");

   for(int j = 0; j < 10; j++){
        printf("%c ", linha[j]);
   }

    printf("\n");

   for(int controle = 0; controle < 10; controle++){
    printf(" ");
    printf("%d", coluna[i]);
        i++;
    for(int i = 0; i < 10; i++){
        printf(" %d", Tabuleiro[controle][i]);
}
        printf("\n");
        
}
    
 return 0;
 
}