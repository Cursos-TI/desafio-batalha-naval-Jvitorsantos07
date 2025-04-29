#include <stdio.h>
int main(){

    int j, i;
    int tabuleiro [10][10] = {
        {0,0,0,0,0,0,3,3,3,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0}
    };
    printf("***Tabuleiro de Batalha Naval***\n\n");

    for (int i = 1; i <= 10; i++){
        
        for (int j = 1; j <= 10; j++){
            
                printf("0 ");
            }
            
        printf("\n");         
            
        }
        printf("\n");
    

    printf("Escolha dois númeos entre 0 e 9\n");
    printf("Primeiro número: ");
    scanf("%d", &j);
    printf("\nSegundo número: ");
    scanf("%d", &i);

    printf("\nA posição foi: %d",tabuleiro[j][i]);

    printf("\n");

    return 0;
}