#include <stdio.h>
// funções recursivas para movimentar a torre.
void torreDireita(int casas){
    if(casas>0){
        printf("Direita!\n");
        torreDireita(casas - 1);
    }
}
void torreEsquerda(int casas){
    if(casas>0){
        printf("Esquerda!\n");
        torreEsquerda(casas - 1);
    }
}
void torreCima(int casas){
    if(casas>0){
        printf("Cima!\n");
        torreCima(casas - 1);
    }
}
void torreBaixo(int casas){
    if(casas>0){
        printf("Baixo!\n");
        torreBaixo(casas - 1);
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
// move o cavalo para direita e para cima
void cavaloDC(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            printf("Direita!\n");
        }
        printf("Cima!\n");
    }
}
// move o cavalo para direita e para baixo
void cavaloDB(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            printf("Direita!\n");
        }
        printf("Baixo!\n");
    }
}
// move o cavalo para esquerda e para cima
void cavaloEC(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            printf("Esquerda!\n");
        }
        printf("Cima!\n");
    }
}
// move o cavalo para esquerda e para cima
void cavaloEB(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            printf("Esquerda!\n");
        }
        printf("Baixo!\n");
    }
}
// move o cavalo para cima e para direita
void cavaloCD(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            printf("Cima!\n");
        }
        printf("Direita!\n");
    }
}
// move o cavalo para cima e para esquerda
void cavaloCE(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            printf("Cima!\n");
        }
        printf("Esquerda!\n");
    }
}
// move o cavalo para baixo e para direita
void cavaloBD(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            printf("Baixo!\n");
        }
        printf("Direita!\n");
    }
}
// move o cavalo para baixo e para esquerda
void cavaloBE(){
    int movecavalo = 1;
    while(movecavalo--){
        for(int i=0;i<2;i++){
            printf("Baixo!\n");
        }
        printf("Esquerda!\n");
    }
}
int main() {
/*
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
    */
    int opcao, casas;
    int torreScan, bispoScan, rainhaScan, cavaloScan;
    // perguntando qual peça o usuário quer mexer
    printf("Escolha qual peça quer mexer!\n");
    printf("[1] - Torre\n");
    printf("[2] - Bispo\n");
    printf("[3] - Rainha\n");
    printf("[4] - Cavalo\n");
    printf("Escolha uma das opções acima!! ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nAgora a quantidade de casas a mover!! ");
        scanf("%d", &casas);
        printf("\nEscolha para onde quer mover a Torre!\n");
        printf("[1] - Cima!\n");
        printf("[2] - Baixo!\n");
        printf("[3] - Esquerda!\n");
        printf("[4] - Direita!\n");
        printf("Escolha uma das opções acima!! ");
        scanf("%d", &torreScan);

        switch (torreScan)
        {
        case 1:
            torreCima(casas);
            break;
        case 2:
            torreBaixo(casas);
            break;
        case 3:
            torreEsquerda(casas);
            break;
        case 4:
            torreDireita(casas);
            break;
        default:
            printf("Não escolheu uma opção válida!!");
            break;
        }
        break;
    // move o Bispo
    case 2:
        printf("\nAgora a quantidade de casas a mover!! ");
        scanf("%d", &casas);
        printf("\nEscolha para onde quer mover o Bispo!\n");
        printf("[1] - Diagonal Direita para Cima!\n");
        printf("[2] - Diagonal Esquerda para Cima!\n");
        printf("[3] - Diagonal Direita para Baixo!\n");
        printf("[4] - Diagonal Esquerda para Baixo!\n");
        printf("Escolha uma das opções acima!! ");
        scanf("%d", &bispoScan);

        switch (bispoScan)
        {
        case 1:
            bispoDC(casas);
            break;
        case 2:
            bispoEC(casas);
            break;
        case 3:
            bispoDB(casas);
            break;
        case 4:
            bispoEB(casas);
            break;
        default:
            printf("Não escolheu uma opção válida!!");
            break;
        }
        break;
    // move a Rainha
    case 3:
        printf("\nAgora a quantidade de casas a mover!! ");
        scanf("%d", &casas);
        printf("\nEscolha para onde quer mover a Rainha!\n");
        printf("[1] - Cima!\n");
        printf("[2] - Baixo!\n");
        printf("[3] - Direita!\n");
        printf("[4] - Esquerda!\n");
        printf("[5] - Diagonal Direita para Cima!\n");
        printf("[6] - Diagonal Esquerda para Cima!\n");
        printf("[7] - Diagonal Direita para Baixo!\n");
        printf("[8] - Diagonal Esquerda para Baixo!\n");
        printf("Escolha uma das opções acima!! ");
        scanf("%d", &rainhaScan);

        switch (rainhaScan)
        {
        case 1:
            rainhaCima(casas);
            break;
        case 2:
            rainhaBaixo(casas);
            break;
        case 3:
            rainhaDireita(casas);
            break;
        case 4:
            rainhaEsquerda(casas);
            break;
        case 5:
            rainhaDC(casas);
            break;
        case 6:
            rainhaEC(casas);
            break;
        case 7:
            rainhaEB(casas);
            break;
        case 8:
            rainhaDB(casas);
            break;
        default:
            printf("Não escolheu uma opção válida!!");
            break;
        }
        break;
        // move o Cavalo
    case 4:
        printf("\nEscolha para onde quer mover o Cavalo!\n");
        printf("[1] - Cima e Direita!\n");
        printf("[2] - Cima e Equerda!\n");
        printf("[3] - Baixo e Direita!\n");
        printf("[4] - Baixo e Esquerda!\n");
        printf("[5] - Direita e Cima!\n");
        printf("[6] - Direita e Baixo!\n");
        printf("[7] - Esquerda e Cima!\n");
        printf("[8] - Esquerda e Baixo!\n");
        printf("Escolha uma das opções acima!! ");
        scanf("%d", &cavaloScan);

        switch (cavaloScan)
        {
        case 1:
            cavaloCD();
            break;
        case 2:
            cavaloCE();
            break;
        case 3:
            cavaloBD();
            break;
        case 4:
            cavaloBE();
            break;
        case 5:
            cavaloDC();
            break;
        case 6:
            cavaloDB();
            break;
        case 7:
            cavaloEC();
            break;
        case 8:
            cavaloEB();
            break;
        default:
            printf("Não escolheu uma opção válida!!");
            break;
        }
        break;

    
    
    default:
        printf("Não escolheu uma opção válida!!");
        break;
    }

    return 0;
}
