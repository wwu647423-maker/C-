#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define private 3//想生成几个不一样的一位数数字，最大为10
int isexist(int num, int arr[], int counter)
{
	for (int i = 0; i < counter; i++)
	{
		if (arr[i] == num)
			return 1;
	}
	return 0;
}
int main()
{
	int counter = 0;
	srand((unsigned)time(NULL));
	int number[private];
	while (counter < private)
	{
		int num = rand() % 10;
		if (!isexist(num, number, counter))
		{
			number[counter] = num;
			counter++;
		}
	}
	for (int i = 0; i < private; i++)
	{
		printf("%d\t", number[i]);
	}
	return 0;
}