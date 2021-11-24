

// Libs
#include <stdio.h>
#include <stdlib.h>

// Define uma constante
#define MAX 5

// Prototipo da funcao de ordenacao
void bubbleSort (int *vetor);


int
main (int argc, char **argv)
{
  int i, vetor[MAX];


  // MAX ou 10 valores
  for (i = 0; i < MAX; i++)

    {
      printf ("Digite um valor: ");
      scanf ("%d", &vetor[i]);
    }


  printf ("\nOrdem inicial dos itens no array:\n");

  for (i = 0; i < MAX; i++)
    {
      printf ("%4d", vetor[i]);
    }


  // Chamada da funcao que ordena os valores
  bubbleSort (vetor);


  // Imprime os valores ordenados
  printf ("\nElementos do array em ordem crescente:\n");
  for (i = 0; i < MAX; i++)
    {
      printf ("%4d", vetor[i]);
    }
}

// Funcao de Ordenacao por Insercao
void
bubbleSort (int *vetor)
{

  int i, contador, aux, troca = 1;
  while (troca == 1) // Condição para finalizar o laço caso não haja mais trocas a serem feitas
    {
      troca = 0;
      for (contador = 1; contador < MAX; contador++)
	{

	  for (i = 0; i < MAX - 1; i++)
	    {
	      if (vetor[i] > vetor[i + 1])
		{
		  troca = 1; 
		  aux = vetor[i];
		  vetor[i] = vetor[i + 1];
		  vetor[i + 1] = aux;
		}
	    }
	}
    }

}
