#include <stdio.h>
main()
{
  float var1, var2, result;
  int opc;
  printf("\nCalculadora Setor Financeiro\n  ");

  printf("\nOperacao 1 - Soma\n  ");

  printf("\nOperacao 2 - Subtracao\n  ");

  printf("\nOperacao 3 -  Multiplicacao\n  ");

  printf("\nOperacao 4 - Divisao\n ");

  printf("\nEscolha uma opcao de calculo\n");
  scanf("%d", &opc);

  printf("Digitar o primeiro valor");
  scanf("%f", &var1);

  printf("Digitar o segundo valor");
  scanf("%f", &var2);

  if (opc == 1)
    result = var1 + var2;
  if (opc == 2)
    result = var1 - var2;
  if (opc == 3)
    result = var1 * var2;
  if (opc == 4)
    result = var1 / var2;

  if (opc == 4)
  {
    printf("O resultado final da operacao e: %0.1f", result);
  }
  else
  {
    printf("O resultado final da operacao e: %0.0f", result);
  }
}