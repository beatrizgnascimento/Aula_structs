#include <stdio.h>
#include <string.h>
typedef struct aluno{
  int matricula;
  char nome[20];
}aluno;

int main()
{
  int i, menu, mat, idx;
  aluno vetoraluno[5];
  char nome[50];

  for(i = 0; i < 5; i++);
  {
    printf("Insira a matrícula e o nome do aluno #%d:\n",i + 1);
    scanf("%d %[^\n]", &vetoraluno[i].matricula, vetoraluno[i].nome);
  }


  while(menu != 9)
  {
    printf("Digite 1 para pesquisar a matricula, 2 para pesquisar o aluno ou 9 para sair");
    scanf("%d", &menu);

    switch(menu)
    {
      case1:
        printf("Informe a matricula: ");
        scanf("%d",&mat);
        idx = -1; //nao existe posicao negativa

        for(i = 0; i < 5; i++)
        {
          if(mat == vetoraluno[i].matricula)
          {
            idx = i;
            break;
          }
        }
        if(idx == -1) //se continuar -1 a matricula nao existe
        {
          printf("Matricula nao encontrada\n");
        }
        else{
          printf("Matricula: %d\n", vetoraluno[idx].matricula);
          printf("Nome: %s\n", vetoraluno[idx].nome);
        }
        break;
      case 2:
        printf("Informe o nome");
        scanf("%[^\n]", nome);
        idx = -1;

         for(i = 0; i < 5; i++)
        {
          if(strcmp(nome, vetoraluno[i].nome) == 0)
          {
            idx = i;
            break;
          }
        }
        if(idx == -1) //se continuar -1 a matricula nao existe
        {
          printf("Nome nao encontrado\n");
        }
        else{
          printf("Matricula: %d\n", vetoraluno[idx].matricula);
          printf("Nome: %s\n", vetoraluno[idx].nome);
        }
        break;
      case 9:
        printf("Encerra o programa\n");
        break;

      default:
       printf("Invalido\n");
       break;
      
    }

  }
 

  

  return 0;
}