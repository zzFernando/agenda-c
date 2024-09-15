# Agenda-C

Este projeto é uma implementação de uma agenda de contatos simples em **C**, onde é possível inserir, remover, listar e pesquisar contatos. A aplicação utiliza **ponteiros de função** para organizar as operações e oferece um menu interativo para o usuário.

## Funcionalidades

A aplicação permite ao usuário realizar as seguintes operações:

- **Inserir Contato**: Adiciona um novo contato com nome, telefone, e-mail e data de nascimento.
- **Remover Contato**: Remove o último contato inserido na lista.
- **Listar Contatos**: Exibe todos os contatos inseridos.
- **Pesquisar Contato**: Pesquisa por um contato específico através de qualquer um dos campos (nome, telefone, e-mail ou data de nascimento).
- **Sair**: Fecha a aplicação.

## Estrutura

O código está dividido em dois arquivos principais:

1. **`functions.h`**: Contém as definições das estruturas e funções utilizadas.
2. **`main.c`**: Implementa a lógica da agenda e a interação com o usuário.

### `functions.h`

- **Estrutura `Contato`**:
  Define a estrutura de um contato, que inclui:
  - `nome`: O nome do contato.
  - `dataNasc`: Data de nascimento do contato.
  - `telefone`: Número de telefone do contato.
  - `email`: E-mail do contato.

- **Funções Disponíveis**:
  - `void inserir()`: Insere um novo contato.
  - `void remover()`: Remove o último contato da lista.
  - `void listar()`: Lista todos os contatos cadastrados.
  - `void pesquisar()`: Pesquisa um contato na lista de acordo com o termo inserido.
  - `void sair()`: Encerra o programa.
  - `void imprime(int id)`: Exibe os detalhes de um contato específico.
  - `void SetCallBackFunction(int indice, Function *pointer)`: Associa ponteiros de função a um índice.

### `main.c`

Este arquivo contém a implementação principal do programa, que:
- Gera o menu interativo para o usuário selecionar a operação desejada.
- Controla os ponteiros de função para as operações, permitindo o fácil gerenciamento das funções associadas às opções do menu.
- Utiliza um array dinâmico para armazenar os contatos e atualiza a quantidade de registros conforme o usuário insere ou remove contatos.

#### Exemplo de Funcionamento

Ao iniciar o programa, o seguinte menu é exibido ao usuário:

```
===========
MENU
===========
1- Inserir
2- Listar
3- Remover
4- Pesquisar
0- Sair
```

O usuário pode selecionar uma opção inserindo o número correspondente.

- Ao escolher **Inserir**, o programa solicitará o nome, telefone, e-mail e data de nascimento do contato e, em seguida, armazenará essas informações.
- Ao escolher **Listar**, o programa exibirá todos os contatos armazenados até o momento.
- Ao escolher **Remover**, o programa excluirá o último contato adicionado.
- Ao escolher **Pesquisar**, o programa permitirá a busca por um termo em qualquer campo (nome, e-mail, telefone ou data de nascimento).
- Ao escolher **Sair**, o programa será encerrado.

## Como Rodar o Projeto

### Pré-requisitos

- GCC (ou outro compilador C)
- Git (opcional)

### Compilação e Execução

Para compilar o projeto, basta executar os seguintes comandos no terminal:

```bash
gcc main.c -o agenda
./agenda
```

Isso irá compilar o arquivo `main.c` e gerar um executável chamado `agenda`, que pode ser executado diretamente.

### Estrutura do Projeto

```bash
├── functions.h   # Definição das estruturas e funções
├── main.c        # Implementação do programa principal
├── LICENSE       # Licença MIT
└── README.md     # Documentação do projeto
```

## Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para mais detalhes.
