#include <stdio.h>
#include <string.h>
typedef struct carro
{
  char placa[8];
  char marca[20];
  char modelo[20];
  char cor[20];
}carro;
int main()
{
  carro a;
  carro b;

  printf("Digite a placa, marca, modelo e cor do carro A: \n");
  scanf("%s %s %s %s", a.placa, a.marca, a.modelo, a.cor);

  printf("Digite a placa, marca, modelo e cor do carro B: \n");
  scanf("%s %s %s %s", b.placa, b.marca, b.modelo, b.cor);

 // if(a.marca == b.marca) nao da certo pois e string

 if(strcmp(a.marca, b.marca) == 0 && strcmp(a.cor, b.cor) == 0)
 {
  printf("Marca e cor sao iguais\n");
 }
 else
 {
  printf("Marca e cor sao diferentes\n");
 }

  return 0;
}