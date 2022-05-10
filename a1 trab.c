#include <stdio.h>
main()
{
  float var1, var2, result;
  int opc;
  printf ("Calculadora Setor Financeiro  ");

  printf ("Operacao 1 - Soma  ");

  printf ("Operacao 2 - Subtracao  ");

  printf ("Operacao 3 -  Multiplicacao  ");

  printf ("Operacao 4 - Divisao ");

  printf ("Escolha uma opcao de calculo");
  scanf ("%d", &opc);

  printf ("Digitar o primeiro valor");
    scanf ("%f", &var1);

  printf ("Digitar o segundo valor");
    scanf ("%f", &var2);

if (opc == 1)
  result = var1 + var2;
if (opc == 2)
  result = var1 - var2;
if (opc == 3)
  result = var1 * var2;
if (opc == 4)
  result = var1 / var2;

printf ("O resultado final da operacao e: %f", result);
}