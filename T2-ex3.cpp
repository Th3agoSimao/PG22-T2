#include <time.h>
#include <stdio.h>
// Esse programa utiliza a biblioteca time.h para imprimir o tempo médio de execução da função recursiva e da iterativa do Fibonacci.

long long int fibR(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        if (n == 2)
        {
            return 1;
        }
        else
        {
            return fibR(n - 1) + fibR(n - 2);
        }
    }
}

long long int fibI(int n)
{
    long long int n1 = 0, n2 = 1, n3;
    int i = 2;
    if (n == 1)
    {
        return n1;
    }
    else
    {
        if (n == 2)
        {
            return n2;
        }
        else
        {
            while (i < n)
            {
                n3 = n1 + n2;
                n1 = n2;
                n2 = n3;
                i++;
            }
            return n3;
        }
    }
}

int main()
{

    time_t tInicial, tFinal;

    int n;
    scanf("%d", &n);
    tInicial = time(NULL);
    printf("%d\n", fibI(n));
    tFinal = time(NULL);
    printf("Tempo da funcao iterativa em segundos: %f\n\n", difftime(tFinal, tInicial));

    tInicial = time(NULL);
    printf("%d\n", fibR(n));
    tFinal = time(NULL);
    printf("Tempo da funcao recursiva em segundos: %f\n\n", difftime(tFinal, tInicial));
    return 0;
}