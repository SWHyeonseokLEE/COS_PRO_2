#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int people[], int people_len)
{
	int* answer = (int*)malloc(sizeof(int) * 4);
	memset(answer, 0, sizeof(int) * 4);

	for (int i=0; i < people_len; i++)
	{
		if (people[i] < 95)						    answer[0]++;
		if (people[i] >= 95 && people[i] < 100) 	answer[1]++;
		if (people[i] >= 100 && people[i] < 105)	answer[2]++;
		else            							answer[3]++;
	}
	return answer;
}

int main()
{
	int people[] = { 97, 102, 93, 100, 107 };
	int people_len = 5;
	int* ret = solution(people, people_len);

	printf("solution �Լ��� ��ȯ ���� [");
	for (int i = 0; i < 4; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", ret[i]);
	}
	printf("] �Դϴ�.\n");
}