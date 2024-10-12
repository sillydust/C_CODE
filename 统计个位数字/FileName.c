#define _CRT_SECURE_NO_WARNINGS


/*要求实现一个函数，可统计任一整数中某个位数出现的次数。例如-21252中，2出现了3次，则该函数应该返回3。*/

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
    int digits[10] = { 0 };//0 ~ 9有十个数

    if (n == 0)
    {
        if (D == 0) return 1;
        else return 0;
    }

    while (n > 0) 
    {
        digits[n % 10]++;//使下标为n/%0的位置++并储存在该位置
        n /= 10;
    }

    return digits[D];
}