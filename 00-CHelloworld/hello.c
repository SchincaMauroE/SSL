#include <stdio.h>
int main(void)
{
  FILE *salida;
  salida = fopen("output.txt", "w");
  fprintf(salida, "%s", "Hello World!");
  fclose(salida);
  return 0;
}
