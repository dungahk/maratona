#include <stdio.h>

#define MAX 100000

int main() 
{
    int n, i, v[MAX], maior, j, cost, soma, maxsofar, maxendinghere;

    while (scanf("%d", &n) != EOF)
    {
        scanf("%d", &cost);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &v[i]);
            v[i] = v[i] - cost;
        }
        
        /*maior = 0;
        for (i = 0; i < n; i++)
        {
            soma = v[i];
            for (j = i + 1; j < n; j++)
            {
                soma = soma + v[j];
                if (soma > maior)
                {
                    maior = soma;
                    printf("%d(%d) %d(%d) - %d\n", i, v[i], j, v[j], maior);
                }
            }
        }*/
        maxendinghere = 0;
        maxsofar = 0;
        for (i = 0; i < n; i++)
        {
            if (maxendinghere + v[i] > 0)
            {
                maxendinghere = maxendinghere + v[i];
            }
            else
            {
                maxendinghere = 0;
            }
            if (maxendinghere > maxsofar)
            {
                maxsofar = maxendinghere;
            }
        }
        if (maxsofar <= 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", maxsofar);
        }
    }
    
    return 0;
}