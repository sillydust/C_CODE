#define _CRT_SECURE_NO_WARNINGS


/*Ҫ��ʵ��һ����������ͳ����һ������ĳ��λ�����ֵĴ���������-21252�У�2������3�Σ���ú���Ӧ�÷���3��*/

#include <stdio.h>
#include <math.h>

int Count_Digit(const int N, const int D);

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}
int Count_Digit(const int N, const int D)
 {
    int n = N;
    n = fabs(n);
    int digits[10] = { 0 };//0 ~ 9��ʮ����

    if (n == 0)
    {
        if (D == 0) return 1;
        else return 0;
    }

    while (n > 0) 
    {
        digits[n % 10]++;//ʹ�±�Ϊn/%0��λ��++�������ڸ�λ��
        n /= 10;
    }

    return digits[D];
}