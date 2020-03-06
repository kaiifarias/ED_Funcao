#include <stdio.h>

void inverteVetor(int vetor[ ], int i)
{
    int aux, n = i - 1;

    for (i = 0; i <= n; i++)
    {
      aux = vetor[i];
      vetor[i] = vetor[n];
      vetor[n] = aux;
      n--;
    }
}

int main()
{
    int vetor[] = {1,2,3,4,5}, i;

	for (i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    inverteVetor(vetor, i);

    for (i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
