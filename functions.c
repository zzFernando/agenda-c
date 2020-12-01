#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//inclui o header functions.h que definiu as funções 
#include "functions.h"

//função que imprime 1 contato, de acordo com um id que é passado por parâmetro
void imprime(int id){
    printf("\n--------------------");

    printf("\nNome: %s", lista[id].nome);

    printf("\nEmail: %s",lista[id].email);

    printf("\nTelefone: %s", lista[id].telefone);

    printf("\nData de Nascimento: %s",lista[id].dataNasc);
    printf("\n--------------------");

}

// insere um contatao na lista
void inserir(){
    //limpa o buffer do teclado
    fflush(stdin);

    Contato c;

    system("cls");
    printf("=========== \n");
    printf("Cadastro de Contato\n");
    printf("=========== \n");

    // o ""%[^\n]%*c"" foi usado para ler strings com espa�o
    printf("Nome: ");
    scanf("%[^\n]%*c", c.nome);


    printf("Email: ");
    scanf("%[^\n]%*c", c.email);

    printf("Telefone: ");
    scanf("%[^\n]%*c", c.telefone);

    printf("Data de Nascimento: ");
    scanf("%[^\n]%*c", c.dataNasc);

    system("cls");
    printf("=========== \n");
    printf("Cadastro de Contato\n");
    printf("=========== \n");

    //insere o registro no arry de contatos
    lista[id] = c;

    system("cls");
    printf("=========== \n");
    printf("Cadastro de Contato\n");
    printf("=========== \n");

    printf("\nCadastro efetuado com sucesso!\n");

    //imprime o registro adicionado
    imprime(id);

    printf("\n\nPresione qualquer tecla para continuar!");
    
    //variável que controla o número de registros para que o dado seja sempre inserido e removido do fim do array
    id++;

    // o getche() lê um caracter da tela. Sempre que ele aparece sem estar sendo atribuido a uma variável, ele foi coletado
    // para que a tela fique parada
    getche();

}

void remover(){
    char op;

    //função que limpa o console
    system("cls");
    printf("=========== \n");
    printf("Remover de Contato\n");
    printf("=========== \n");

    if (id > 0){
        system("cls");
        printf("=========== \n");
        printf("Remover Contato\n");
        printf("=========== \n");
        imprime(id - 1);
        printf("\n\nExcluir Contato(s/n)? : ");
        op = getche();

        if(op == 's' || op == 'S'){
            free(&lista[id-1]);
            id--;

        } else {
            return 0;
        }

    } else {
        printf("\n\nNenhum contato cadastrado!");
        printf("\n\nPresione qualquer tecla para continuar!");
        getche();
    }
}

void listar(){
    system("cls");
    printf("=========== \n");
    printf("Lista de Contatos\n");
    printf("=========== \n");

    if (id > 0){
        for (int i = 0; i < id; i++){
            imprime(i);
        }
    } else {
        printf("\n\nNenhum contato cadastrado!");
    }

    printf("\n\nPresione qualquer tecla para continuar!");
    getche();
}

void pesquisar(){
    //limpa o buffer do teclado
    fflush(stdin);

    char aux[255];
    int resultado[id];
    int i;
    int nResults = 0;

    system("cls");
    printf("=========== \n");
    printf("Pesquisar Contatao\n");
    printf("=========== \n");

    if (id > 0){
        printf("Digite o termo de busca: ");

        //utilizado para conseguir ler strings com espa�o
        scanf("%[^\n]%*c", &aux);

        for (int i=0; i<id; i++){
            // a função strstr está na biblioteca "string.h" e retorna o enderesço onde se encontra o trecho da string buscada. Se não, retorna NULL
            // nesse caso, procuramos por aux em todos os campos. Se ela estiver presente em algum deles, retornamos o registro
            if (strstr(lista[i].telefone, aux) != NULL ||
                strstr(lista[i].nome, aux) != NULL ||
                strstr(lista[i].email, aux) != NULL ||
                strstr(lista[i].dataNasc, aux) != NULL){
                resultado[nResults] = i;
                nResults++;
            }
        }


        if (nResults > 0){

            printf("\n\nResultados da Pesquisa\n");
            for (i = 0; i < nResults; i++){
                imprime(resultado[i]);
            }
        } else {
            printf("\n\nNenhum resultado encontrado!");
        }
    } else {
        printf("\n\nNenhum contato cadastrado!");
    }


    printf("\n\nPresione qualquer tecla para continuar!");
    getche();

}

//Essa função foi colocada apenas para podermos usar o vetor de maneira mais simples.
void sair(){
    system("cls");
    printf("\nObrigado por utilizar a agenda! \n");
    return 0;
}

//Função que chama determinada função, atraveis do pointer.
void SetCallBackFunction(int indice, Function *pointer){
  f[indice] = pointer;
}
