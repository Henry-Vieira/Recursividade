#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int exp)
{

  if (exp == 1)
  {

    return base;
  }

  return base * potencia(base, exp - 1);
}

int main()
{
  int v = potencia(2, 4);
  printf("%d", v);
}

/*
base  expoente
2       4 retorna base = 2
2       3 retorna base = 2
2       2 retorna base = 2
2       1 retorna base = 2
fim

2*2*2*2 = 16
Logo podemos ver como a recursividade funciona, sempre diminuindo o expoente até chegar na condição...
que é if (exp == 1) retornará base pela ultima vez e multiplicará os valores da base 4x
*/