// Em um contexto de desenvolvimento de um aplicativo de e-commerce em C, podemos exemplificar o uso de structs para representar categorias de produtos da seguinte forma:

#include <stdio.h>

#include <string.h>

// Definição da estrutura para representar uma categoria de produto

struct Categoria
{

   int id;

   char nome[50];

   char descricao[100];
};

int main()
{

   // Exemplo de inicialização de uma categoria

   struct Categoria eletronicos;

   eletronicos.id = 1;

   strcpy(eletronicos.nome, "Eletrônicos");

   strcpy(eletronicos.descricao, "Produtos eletrônicos como smartphones, tablets e laptops.");

   // Exemplo de impressão dos dados da categoria

   printf("Categoria: %s\n", eletronicos.nome);

   printf("Descrição: %s\n", eletronicos.descricao);

   return 0;

   // Neste exemplo simples, a struct Categoria é utilizada para definir uma categoria de produtos, contendo um identificador (id), um nome (nome) e uma descrição (descricao).
   // Essa estrutura permite agrupar informações relacionadas a uma categoria específica e pode ser expandida conforme necessário para incluir mais atributos ou comportamentos
   // relevantes para a aplicação de e-commerce.
}
