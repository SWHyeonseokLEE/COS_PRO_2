#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//price_m�� �迭 price�� �����Դϴ�.
int solution(int price[], size_t price_m, int money) {
    int answer = 0;
    int sum = 0;

    for (int i = 0; i < price_m; i++)
    {
        sum += price[i];
    }

    answer = money - sum;

    return answer;
}

int main()
{
    int price_m = 4;
    int price[4] = { 2100, 3200, 2100, 800 };
    int money = 10000;
    int result;

    result = solution(price, price_m, money);

    printf("�ܵ��� %d���Դϴ�.", result);
}