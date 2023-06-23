#include <stdio.h>
#include <string.h>

typedef struct carta //typedef permite que o programador defina os tipos de dados com base em outros tipos ja existentes
{
  char valor;
  char naipe[7];
}carta;

int main()
{
  carta a;
  carta b;

  a.valor = '8';
  strcpy(a.naipe, "ouro");
  //obs a.naipe = "ouro" nao funciona pois é string, usar strcpy

  b.valor = 'A';
  strcpy(b.naipe, "copas");

  printf("%s", b.naipe);

  return 0;
}