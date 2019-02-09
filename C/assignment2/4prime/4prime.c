#include<stdio.h>
int main()
{
	int low, high, flag = 0, i;
	scanf_s("%d %d", &low, &high);
	if (low < high)
	{
		while (low <= high)
		{
			flag = 0;
			if (low == 1)
				flag = 1;
			else
			{
				for (i = 2; i < low; i++)
				{
					if (low%i == 0)
					{
						flag = 1;
						break;
					}
				}
			}
			if (flag == 0)
				printf("%d ", low);
			low++;
		}
	}
	else
		printf("invalid input");
	getch();
	return 0;
}