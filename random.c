#include <stdio.h>
#include <string.h>

typedef struct aluno{
  char nome[40];
  char matricula[30];
  char nota[10];
}aluno;

int main()
{
  aluno vetaluno[5];
  int i, j;
  aluno temp;

  printf("Digite o nome do aluno, a matricula e a nota:\n");
  for(i = 0; i < 5; i++)
  {
    scanf(" %[^\n]", vetaluno[i].nome);
    scanf(" %[^\n]", vetaluno[i].matricula);
    scanf(" %[^\n]", vetaluno[i].nota);
  }

  for(i = 0; i < 5; i++)
  {
    for(j = 0; j < 5 - i - 1; j++)
    {
      if(strcmp(vetaluno[j].nome, vetaluno[j + 1].nome) > 0)
      {
        temp = vetaluno[j];
        vetaluno[j] = vetaluno[j + 1];
        vetaluno[j + 1] = temp;
      }
    }
  }

  for(i = 0; i < 5; i++)
  {
    printf("%s %s\n", vetaluno[i].matricula, vetaluno[i].nota);
  }
  return 0;
}