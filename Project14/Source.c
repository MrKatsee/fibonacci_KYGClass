#include <stdio.h>

int rfibo(int);
int sfibo(int);

int main()
{
	for (int i = 2; i <= 45; i++)
	{
		if (i % 2)
		{
			printf("rfibo(%d): %d\n", i, rfibo(i));
			printf("sfibo(%d): %d\n", i, sfibo(i));
		}
		else
			sfibo(i);
	}

	system("pause");

	return 0;
}

int rfibo(int n)
{
	if (n <= 1)
		return n;
	else
		return rfibo(n - 1) + rfibo(n - 2);
}
int sfibo(int n)
{
	static int num_a = 0;
	static int num_b = 1;
	int temp;

	temp = num_b;
	num_b = num_a + num_b;
	num_a = temp;

	return num_b;
}