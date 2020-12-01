#ifndef functions
#define functions

//struct contato, que possui 4 campos
typedef struct
{
    char nome[255];
    char dataNasc[255];
    char telefone[255];
    char email[255];
} Contato;

//Define um tipo Function(), que serão ponteiros para cada função
typedef Function();

//array com os endereços para cada função
extern Function *f[];

// variável que vai controlar os registros
extern int id;

//Lista de contatos
extern Contato *lista;


//Definição das funções
void inserir();
void remover();
void listar();
void pesquisar();
void sair();
void imprime(int id);
int soma(int a, int b);
void SetCallBackFunction(int indice, Function *pointer);

#endif // FUNCTIONS_H_INCLUDED
