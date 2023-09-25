
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void saludo2 (){
  printf("Funcion saludo con FALLOS");
}

int
main (int argc, char *argv[])
{
  printf ("Hola Mundo\n");
  saludo2();
  return 0;
}

