#include <stdio.h>
#include <stdlib.h> //srand, rand
#include <time.h> //time(NULL)
#include <string.h> //strcpy

typedef struct carta
{
  char valor;
  char naipe[7];
}carta;

int main()
{
  char val[12] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'D', 'V', 'R'};
  char naipes[4][7] = {"paus", "copas", "espada", "ouro"};

  carta v[48];
  int i, j, k; //j percorre naipes e k percorre o vetor
  int x, y;
  carta temp;
  k = 0;

  for(i = 0; i < 4; i++)//naipe
  {
    for(j = 0; j <12; j++)//valores
    {
      v[k].valor = val[j];
      strcpy(v[k].naipe, naipes[i] );
      k++;
    }
  }

  printf("Baralho gerado: \n");
  for(k = 0; k < 48; k++)
  {
    printf("%c %s\n", v[k].valor, v[k].naipe);
  }

  for(i=0; i <100; i++)
  {
     x = rand() % 48;
     y = rand() % 48;

    temp = v[x];
    v[x] = v[y];
    v[y] = temp;
  }
 
 printf("\n\nBaralho embaralhado: \n");
  for(k = 0; k < 48; k++)
  {
    printf("%c %s\n", v[k].valor, v[k].naipe);
  }


  return 0;
}