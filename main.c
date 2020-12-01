#include "functions.h"

//cria um array de 5 posições para cada um dos endereços das funções
Function *f[5];

int id;
Contato *lista;

void main(){

    //aloca quantidade de memória para 50 contatos
    lista = (Contato *)malloc(sizeof(Contato)*50);
    int retorno, op;

    //adiciona o endereço de cada uma das funções em uma posição do array (Ponteiros para funções)
    SetCallBackFunction(0, sair);
    SetCallBackFunction(1, inserir);
    SetCallBackFunction(2, listar);
    SetCallBackFunction(3, remover);
    SetCallBackFunction(4, pesquisar);

    do{

        system("cls");
        printf("=========== \n");
        printf("MENU\n");
        printf("=========== \n");
        printf("1- Inserir\n");
        printf("2- Listar\n");
        printf("3- Remover\n");
        printf("4- Pesquisar\n");
        printf("0- Sair\n");
        printf("Opcao? ");
        scanf("%d", &op);

        //testa se é uma op válida (ou seja, entre 0 e 4)
        if (op >= 0 && op <= 4){
            retorno = (*f[op])();

        } else {
            printf("\nOpcao Invalida!");
            getche();
        }


    }while(op != 0);
}
