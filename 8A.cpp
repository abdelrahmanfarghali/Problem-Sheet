#include<iostream>
int main()
{
	int n = 0;
	int a[101];
	int count = 0;
	std::cin >> n;
	int sum = n;
	for(int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	if(n % 2 == 0)
	{
		for(int i = 0; i < n; i++)
		{
			if(a[i] % 2 == 0)
			{
				count++;
			}
		}
	}
	else
	{
		for(int i = 0; i < n; i++)
		{
			sum += a[i];
			if(sum % 2 == 0)
			{
				count++;
			}
			if(sum % 2 != 0 && i == n - 1)
			{
				if(i != 0)
				{
					sum -= a[i];
					i = 0;
					n--;
					count--;
				}
			}
		}
		int j = 0;
		for(int i = n; i >= j; i++)
		{
			if(sum % 2 != 0 && i == j)
			{
				if(i < n)
				{
					sum -= a[i];
					i = n;
					j++;
					count--;
				}
			}
		}
	}
	std::cout << count;
	return 0;
}
