# agenda-c

- O trabalho foi desenvolvido utilizando a ferramenta Code::Blocks 20.03 e compilado com o GNU/GCC Compiler (MinGW) em ambiente Windows;

- Para compiplar o programa, é preciso instalar e configurar o GCC,
	seguir exemplo nesse link => https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

- Após a instalação e configuração do GCC, abrir um prompt de comando (CMD), navegar até a pasta onde estão os arquivos enviados e digitar o seguinte comando:
	gcc main.c functions.c -o agenda

- Após executar esse comando, será gerado (compilado) um arquivo "agenda.exe", que pode ser executado com "dois cliques";


FUNCIONAMENTO

Montar o menu principal do programa com ponteiros para funções ao invés de uma estrutura switch case.
	main.c => (linhas 16-20; linha 38)
	functions.h => (linha 34)
	functionsc => (linha 189)

Cada operação (inserir, listar, remover, etc) deverá ser implementada em uma função.
	Arquivo functions.h e functions.c (todo o arquivo é o conjunto das funções que foram solicitadas)

As operações para “inserir” e “remover” devem atuar sempre no final do vetor, ou seja, inserir sempre na última posição livre do vetor e remover sempre da última posição ocupada do vetor
	Foi utilizada o id para controlar o local onde os elementos seriam removidos e inseridos. 
	O id sempre vai ter a posição do próximo a ser inserido, para adicionar ou remover é necessário utilizar o id.
	Ver as linhas 65, 70, 97 e 98 do arquivo "functions.c";

Usar tipo de dado struct para criar as estruturas de dados. Criar um vetor de structs, sendo que cada struct é um contato da agenda.
	functions.h => (linhas 5-11, linha 23);
	
Alocar memória para as estruturas de dados com malloc()
	main.c => (linha 12)

Criar uma estrutura de bibliotecas (headers) para o projeto (arquivos de cabeçalho).
	Os arquivos "functions.h", "functions.c" e "main.c" forma uma estrutura de headers;

