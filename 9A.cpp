#include<iostream>
int main(){
	int n = 1;
	int i[101];
	int count = 0;
	int sum = 0;
	std::cin >> n;
	for(int k = n; k <= n; k++)
	{
		std::cin >> i[k];
	}
	for(int j = 0; j < sizeof(i); j++)
	{
		if(n % 2 = 0)
		{
			if(i[j] % 2 == 0)
			{
				count++;
				sum += i[j];
			}
		}
	}
	return 0;
}
