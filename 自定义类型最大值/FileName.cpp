#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max(ElementType S[], int N)
{
    ElementType result;
    int i;
    result = S[0];
    for (i = 0; i < N; i++)
    {
        if (S[i] > result)
        {
            result = S[i];
        }

    }


    return result;
}

int main()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}