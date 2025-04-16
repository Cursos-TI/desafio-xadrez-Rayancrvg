#include <stdio.h>
// funções recursivas para movimentar a torre.
void torreDireita(int casas){
    if(casas<0){
        printf("Direita!\n");
        torreDireita(casas - 1);
    }
}
void torreEsquerda(int casas){
    if(casas<0){
        printf("Esquerda!\n");
        torreDireita(casas - 1);
    }
}
void torreCima(int casas){
    if(casas<0){
        printf("Cima!\n");
        torreDireita(casas - 1);
    }
}
void torreBaixo(int casas){
    if(casas<0){
        printf("Baixo!\n");
        torreDireita(casas - 1);
    }
}
// funções para movimentar o bispo com loops aninhados conforme solicitado.
void bispoDC(int casas){
    for(int i=0; i<casas;i++){
        for(int j=0; j<1; j++){
            printf("Cima, ");
        }
        printf("Direita!\n");
    }
}
void bispoDB(int casas){
    for(int i=0; i<casas;i++){
        for(int j=0; j<1; j++){
            printf("Baixo, ");
        }
        printf("Direita!\n");
    }
}
void bispoEC(int casas){
    for(int i=0; i<casas;i++){
        for(int j=0; j<1; j++){
            printf("Cima, ");
        }
        printf("Esquerda!\n");
    }
}
void bispoEB(int casas){
    for(int i=0; i<casas;i++){
        for(int j=0; j<1; j++){
            printf("Cima, ");
        }
        printf("Esquerda!\n");
    }
}
// funções recursiva para movimentar a rainha.
void rainhaDC(int casas){
    bispoDC(casas);
}
void rainhaDB(int casas){
    bispoDB(casas);
}
void rainhaEC(int casas){
    bispoEC(casas);
}
void rainhaEB(int casas){
    bispoEB(casas);
}
void rainhaDireita(int casas){
    torreDireita(casas);
}
void rainhaEsquerda(int casas){
    torreEsquerda(casas);
}
void rainhaCima(int casas){
    torreCima(casas);
}
void rainhaBaixo(int casas){
    torreBaixo(casas);
}
void cavaloDC(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            
        }
    }
}

int main() {
    // Move a torre cinco casas para direita
    int torre = 5, bispo = 5, rainha = 8;
    for (int i=0;i<torre; i++){
        printf("Direita!\n");
    };
    printf("\n");
    // Move o bispo 5 casas em diagonal
    for (int i=0; i<bispo; i++){
        for(int j=0; j<1; j++){
            printf("Cima, ");
        }
        printf("Direita!\n");
    };
    printf("\n");
    // Move a rainha 8 casas para esquerda
    for (int i=0; i<rainha; i++){
        printf("Esquerda!\n");
    };
    printf("\n");
    // Move o Cavalo para cima e direita
    for (int i=0; i<1; i++){
        for (int j=0; j<2; j++)
        {
            printf("Baixo!\n");
        };
        printf("Esquerda!\n");
    };
    printf("\n");
    int opcao;
    int torreScan, bispoScan, rainhaScan, cavaloScan;
    // perguntando qual peça o usuário quer mexer
    printf("Escolha qual peça quer mexer!\n");
    printf("[1] - Torre\n");
    printf("[2] - Bispo\n");
    printf("[3] - Rainha\n");
    printf("[4] - Cavalo\n");
    printf("Escolha uma das opções acima!!");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("\nEscolha para onde quer mover a Torre!\n");
        printf("[1] - Cima!\n");
        printf("[2] - Baixo!\n");
        printf("[3] - Equerda!\n");
        printf("[4] - Direita!\n");
        printf("Escolha uma das opções acima!!");
        scanf("%d", &torreScan);
        switch (expression)
        {
        case constant expression:
            /* code */
            break;
        
        default:
            break;
        }
        break;
    
    default:
        printf("Não escolheu uma opção válida!!")
        break;
    }
    torreM(1, 5);
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
