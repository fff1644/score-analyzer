#include <stdio.h>
int main()
{
	int grades[10];
	printf("请输入10个同学的成绩:");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &grades[i]);

	}
	int MAS = grades[0];
	int MIN = grades[0];
	for (int i = 1; i < 10; i++)
	{
		if (grades[i] > MAS)
		{
			MAS = grades[i];
		}
		else if (grades[i] < MIN)
		{
			MIN = grades[i];
		}
	}
	int sum = 0;
	double average = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += grades[i];	
	}
	average = sum / 10;
	int number[5] = { 0 };
	printf("mas=%d  min=%d   average=%f\n", MAS, MIN, average);
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++)
		{
			if (grades[i] < grades[i + 1])
			{
				int t = grades[i];
				grades[i] = grades[i + 1];
				grades[i + 1] = t;
			}
		}
	}
	printf("从高到低为\n ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", grades[i]);
	}
	printf("\n");
	int num[5] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		if (grades[i] > 90)
		{
			num[0]++;
		}
		else if (grades[i] <= 90 && grades[i] >80)
		{
			num[1]++;
		}
		else if ( grades[i] <=80 && grades[i] >70)
		{
			num[2]++;
		}
		else if (grades[i] <= 70&&grades[i] > 60)
		{
			num[3]++;
		}
		else 
		{
			num[4]++;
		}
	}
	printf("90分以上：%d\n80分到90分：%d\n70分到80分：%d\n", num[0], num[1], num[2]);
	printf("60分到70分：%d\n60分以下：%d\n", num[3], num[4]);
}
