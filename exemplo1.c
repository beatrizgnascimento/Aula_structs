#include <stdio.h>
#include <math.h>
typedef struct ponto
{
  int x, y, z;
}ponto;

int main()
{
  ponto p1, p2;
  double dist;

  p1.x = 0;
  p1.y = 0;
  p1.z = 0;

  printf("Digite os valores de x, y e z");
  scanf("%d %d %d", &p2.x, &p2.y, &p2.z);

  dist = sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2) );
  printf("Distancia: %lf\n", dist);

  return 0;
}