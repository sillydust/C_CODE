#define _CRT_SECURE_NO_WARNINGS

#include <numeric>
#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Average(ElementType S[], int N)
{
    ElementType result;
    ElementType sum = 0;
    int i, len = 0;
    for (i = 0; i < N; i++)
    {
        sum += S[i];
        len++;
    }
    result = sum / len;

    return result;
}

int main()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Average(S, N));

    return 0;
}
