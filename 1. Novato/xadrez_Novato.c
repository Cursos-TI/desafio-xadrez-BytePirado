#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre, bispo, rainha, escolha, casas, direcao;
    char confirmacao;

    do {
        printf("Movimentação do Xadrez:\n");
        printf("Escolha qual peça deseja movimentar!\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("Escolha a peça desejada: ");
        scanf("%d", &escolha);

        if (escolha > 3 || escolha < 1)
        {
            printf("Escolha inválida, tente novamente.\n");
            printf("\n");
        }

        //TORRE
        switch (escolha){
            case 1:
                printf("\n");
                printf("Você escolheu Torre, deseja continuar? (s/n): ");
                scanf(" %c", &confirmacao);
                if(confirmacao == 's' || confirmacao == 'S'){
                    printf("Ótimo, você escolheu Torre, diga quantas casas deseja movimentar: ");
                    scanf(" %d", &casas);
                    printf("Agora escolha a direção desejada:\n"
                           "1. Esquerda.\n"
                           "2. Direita.\n"
                           "3. Baixo.\n"
                           "4. Cima.\n");
                    /*TORRE*/                      
                    scanf(" %d", &direcao); 
                    while (direcao < 1 || direcao > 4) {
                        printf("\nDireção inválida. Escolha novamente:\n"
                               "1. Esquerda.\n"
                               "2. Direita.\n"
                               "3. Baixo.\n"
                               "4. Cima.\n");
                        scanf(" %d", &direcao);
                    }
                    printf("\nMovimentação da peça:\n");
                    for (int i = 0; i < casas; i++){
                        switch (direcao) {
                            case 1: printf("ESQUERDA\n");
                                break;
                            case 2: printf("DIREITA\n");
                                break;
                            case 3: printf("BAIXO\n");
                                break;
                            case 4: printf("CIMA\n");
                                break;
                        }    
                    }
                }
                break;

            //BISPO
            case 2:
                printf("\n");
                printf("Você escolheu Bispo, deseja continuar? (s/n): ");
                scanf(" %c", &confirmacao);
                if(confirmacao == 's' || confirmacao == 'S'){
                    printf("Ótimo, você escolheu Bispo, diga quantas casas deseja movimentar: ");
                    scanf(" %d", &casas);
                    printf("Agora escolha a direção desejada:\n"
                           "1. Diagonal Direita pra cima.\n"
                           "2. Diagonal Esquerda pra cima.\n"
                           "3. Diagonal Direita pra baixo.\n"
                           "4. Diagonal Esquerda pra baixo.\n");
                    /*BISPO*/                      
                    scanf(" %d", &direcao);
                    while (direcao < 1 || direcao > 4){
                        printf("\nDireção inválida, escolha novamente:\n"
                               "1. Diagonal Direita pra cima.\n"
                               "2. Diagonal Esquerda pra cima.\n"
                               "3. Diagonal Direita pra baixo.\n"
                               "4. Diagonal Esquerda pra baixo.\n");
                        scanf(" %d", &direcao);
                    }
                    printf("\nMovimentação da peça:\n");
                    for (int i = 0; i < casas; i++){
                        switch (direcao) {
                            case 1: printf("CIMA\n"
                                            "DIREIRA\n");
                                break;
                            case 2: printf("CIMA\n"
                                            "ESQUERDA\n");
                                break;
                            case 3: printf("BAIXO\n"
                                            "DIREIRA\n");
                                break;
                            case 4: printf("BAIXO\n"
                                            "ESQUERDA\n");
                                break;
                        }    
                    }
                }
                break;

            //RAINHA
            case 3:
                printf("\n");
                printf("Você escolheu Rainha, deseja continuar? (s/n): ");
                scanf(" %c", &confirmacao);
                if(confirmacao == 's' || confirmacao == 'S'){
                    printf("Ótimo, você escolheu Rainha, diga quantas casas deseja movimentar: ");
                    scanf(" %d", &casas);
                    printf("Agora escolha a direção desejada:\n"
                           "1. Esquerda.\n"
                           "2. Direita.\n"
                           "3. Baixo.\n"
                           "4. Cima.\n"
                           "5. Diagonal Direita pra cima.\n"
                           "6. Diagonal Esquerda pra cima.\n"
                           "7. Diagonal Direita pra baixo.\n"
                           "8. Diagonal Esquerda pra baixo.\n");
                    /*RAINHA*/                    
                    scanf(" %d", &direcao);
                    while (direcao < 1 || direcao > 8){
                        printf("\nDireção inválida, escolha novamente:\n"
                               "1. Esquerda.\n"
                               "2. Direita.\n"
                               "3. Baixo.\n"
                               "4. Cima.\n"
                               "5. Diagonal Direita pra cima.\n"
                               "6. Diagonal Esquerda pra cima.\n"
                               "7. Diagonal Direita pra baixo.\n"
                               "8. Diagonal Esquerda pra baixo.\n");
                        scanf(" %d", &direcao);
                    }
                    printf("\nMovimentação da peça:\n");
                    for (int i = 0; i < casas; i++){
                        switch (direcao) {
                            case 1: printf("ESQUERDA\n");
                                break;
                            case 2: printf("DIREITA\n");
                                break;
                            case 3: printf("BAIXO\n");
                                break;
                            case 4: printf("CIMA\n");
                                break;
                            case 5: printf("CIMA \n"
                                            "DIREITA\n");
                                break;
                            case 6: printf("CIMA \n"
                                            "ESQUERDA\n");
                                break;
                            case 7: printf("BAIXO \n"
                                            "DIREITA\n");
                                break;
                            case 8: printf("BAIXO \n"
                                            "ESQUERDA\n");
                                break;
                        }    
                    }
                }
                break;

            default:
                break;
        } 
    } while (escolha > 3 || escolha < 1 || confirmacao == 'n' || confirmacao == 'N'); // tudo vai se repetir se escolher o numero errado ou se o cara mudar de ideia

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    return 0;
}