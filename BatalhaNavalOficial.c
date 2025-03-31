#include <stdio.h>

#define LINHAS 10
#define COLUNAS  10

int main(){

    int resultado[LINHAS][COLUNAS];

    //Declarando String para localizacao no tabuleiro
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Declarando Matrizes
    int Tabuleiro[LINHAS][COLUNAS] = {
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

    //Matrizes de Efeitos
    int EfeitoCone[LINHAS][COLUNAS] = {
        {0, 0, 0, 0, 2, 0, 0, 0, 0, 0},
        {0, 0, 0, 2, 2, 2, 0, 0, 0, 0},
        {0, 0, 2, 2, 2, 2, 2, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    int EfeitoCruz[LINHAS][COLUNAS] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 2, 0, 0, 0, 0, 0},
        {0, 0, 2, 2, 2, 2, 2, 0, 0, 0},
        {0, 0, 0, 0, 2, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    int EfeitoOctaedro[LINHAS][COLUNAS] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0, 0, 0, 0, 0, 0},
        {2, 2, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //Posicionando Navio Horizontal
    for(int i = 2; i < 5; i++){
        Tabuleiro[3][i] = 3;
    }

    //Posicionando Navio Vertical
    for(int i = 5; i < 8; i++){
        Tabuleiro[i][8] = 3;
    }

    //Posicionando Navios Diagonais

    for(int i = 5; i < 8; i ++){
        for(int j = 5; j < 8; j++){
            if(i = j){
                Tabuleiro[i][j] = 3;
            }
        }  
    }
    
    //Sobrepondo as matrizes para a impressao dos efeitos no tabuleiro
    for(int i = 0; i < 10; i ++){
        for(int j = 8; j > 5; j--){
            if(i + j == 8){
                Tabuleiro[i][j] = 3;
            }
        }  
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = Tabuleiro[i][j] += EfeitoCone[i][j]; 
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = Tabuleiro[i][j] += EfeitoCruz[i][j]; 
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = Tabuleiro[i][j] += EfeitoOctaedro[i][j]; 
        }
    }

    //Exibindo O Tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("   ");

   for(int j = 0; j < 10; j++){
        printf("%c ", linha[j]);
   }

    printf("\n");

   for(int i = 0; i < 10; i++){
    printf(" ");
    printf("%d", coluna[i]);
    for(int j = 0; j < 10; j++){
        printf(" %d", Tabuleiro[i][j]);
}
        printf("\n");
        
}
 return 0;
 
}