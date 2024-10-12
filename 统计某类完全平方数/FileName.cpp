#define _CRT_SECURE_NO_WARNINGS

/******Ҫ��ʵ��һ���������ж���һ��������N�Ƿ�����������
                    ������ȫƽ����������������λ������ͬ����144��676��****/


#include <stdio.h>
#include <math.h>
#define MAXN 10

int IsTheNumber(const int N)
{
    int sqrtN = (int)sqrt(N);
    if (sqrtN * sqrtN != N)
    {
        return 0;
    }
    int temp = N;
    int digits[MAXN] = { 0 };
    while (temp > 0)
    {
        digits[temp % 10]++;
        temp /= 10;
    }
    for (int i = 0; i < MAXN; i++)
    {
        if (digits[i] >= 2)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for (i = n1; i <= n2; i++) {
        if (IsTheNumber(i))
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}