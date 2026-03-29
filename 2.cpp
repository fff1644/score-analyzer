#include<stdio.h>
void inputscore(int grades[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &grades[i]);
	}
}
void MASMINaverage(int grades[], int n)
{
	int MAS = grades[0];
	int MIN = grades[0];
	int  sum = 0;
	double average = 0 ;
	for (int i = 0; i < n; i++)
	{
		if (grades[i] >= MAS)
			MAS = grades[i];
		if (grades[i] >= MIN)
			MIN = grades[i];
		sum += grades[i];
	}
	average = sum / n;
	printf("mas=%d  min=%d   average=%f\n", MAS, MIN, average);
}
void arrange(int grades[], int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - j-1; i++)
		{
			if (grades[i] < grades[i + 1])
			{
				int t = grades[i];
				grades[i] = grades[i + 1];
				grades[i + 1] = t;
			}
		}
	}
	printf("从高到低为:   ");
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", grades[i]);
	}
	printf("\n");
}
	void gradeslevel(int grades[], int n)
{
		int num[5] = { 0 };
	for (int i = 0; i < n; i++)
	{
		if (grades[i] >=90)
			num[0]++;
		else if (grades[i] >= 80)
			num[1]++;
		else if (grades[i] >= 70)
			num[2]++;
		else if (grades[i] >= 60)
			num[3]++;
		else if (grades[i] < 60)
			num[4]++;
	}
	printf("90分以上：%d\n80分到90分：%d\n70分到80分：%d\n", num[0], num[1], num[2]);
	printf("60分到70分：%d\n60分以下：%d\n", num[3], num[4]);
}


int main()
{
	int n = 10;
	int grades[10];
	printf("请输入%d个同学的成绩:\n", n);
	inputscore(grades, n);
	MASMINaverage( grades, n);
	arrange(grades, n);
	gradeslevel(grades, n);
	return 0;
}