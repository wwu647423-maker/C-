#include <stdio.h>
#include <windows.h>
int main()
{
	int profit = 0;
	int profit_result = 0;
	float bonus = 0;
	do
	{
		printf("请输入一个数字\n");
		profit_result = scanf_s("%d", &profit);
		if (profit_result != 1)
		{
			while (getchar() != '\n');
		}
		system("cls");
	} while (profit_result != 1);
	system("cls");
	if (profit <= 10)
	{
		bonus = profit * 0.1;
		printf("你的奖金为%.2f\n", bonus);
	}
	else if (profit > 10 && profit < 20)
	{
		bonus = (profit - 10) * 0.075 + 10 * 0.1;
		printf("你的奖金为%.2f\n", bonus);
	}
	else if (profit >= 20 && profit < 40)
	{
		bonus = (profit - 20) * 0.05 + 10 * 0.1 + 10 * 0.075;
		printf("你的奖金为%.2f\n", bonus);
	}
	else if (profit >= 40 && profit < 60)
	{
		bonus = (profit - 40) * 0.03 + 10 * 0.1 + 10 * 0.075 + 20 * 0.05;
		printf("你的奖金为%.2f\n", bonus);
	}
	else if (profit >= 60 && profit < 100)
	{
		bonus = (profit - 60) * 0.015 + 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03;
		printf("你的奖金为%.2f\n", bonus);
	}
	else
	{
		bonus = (profit - 100) * 0.01 + 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015;
		printf("你的奖金为%.2f\n", bonus);
	}
	return 0;
}