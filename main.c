#include <stdio.h>
#include <stdlib.h>

int main (){

int opt1;
int opt2;
int qtd;
int valor_compra;

while (1){
    printf("Deseja iniciar a compra?:\n\n");
    printf("1 - sim\n");
    printf("2 - fechar caixa\n\n");
    printf("opcao:");

    scanf("%d", &opt1);

    if (opt1 == 1){//Opcao: sim
            valor compra = 0;
            while(1){
        printf("\n\n");
        printf("1 - produto 1\t R$ 10,00\n");
        printf("1 - produto 1\t R$ 10,00\n");
        printf("1 - produto 1\t R$ 10,00\n");
        printf("1 - produto 1\t R$ 10,00\n");
        printf("1 - produto 1\t R$ 10,00\n");
        printf("1 - produto 1\t R$ 10,00\n");
        printf("1 - produto 1\t R$ 10,00\n");
        printf("1 - produto 1\t R$ 10,00\n");
        printf("98 - cancelar compra\n");
        printf("99 - fechar caixa\n\n")

    scanf("%d, &opt2");

    if (opt2 ==1){

    printf("\n\n quntidade do produto 1:");
    scanf("%d", &qtd);
    valor compra = valor_compra + qtd*10;
    printf("\n\n valor parcial: R$ %d,00", valor_compra);
    }
    else {
        if(opt2==98){
            valor_compra = 0;
            printf ("compra cancelada\n\n\n");
            break;
        }
    }
    }
    else {
        if(opt1 == 2){//Opcao: fechar caixa
            printf("opcao: fechar caixa\n\n");
}
    }
        else {// opcao invalida
            printf("opcao invalida\n\n\n");
            }
    }
}


return 0;

}
