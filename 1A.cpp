#include<iostream>
using namespace std;
int cindex = 0;
int main()
{
	int n;
	char a[101];
	cin >> n;
	int x = n;
	int y = n;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
	}


	int current = n;
	for(int i = n; i > 0; i--)
	{
		if(a[current] < a[i])
		{
			current = i;
		}
	}
	x = current;
	current = n;
	for(int i = n; i > 0; i--)
	{
		if(a[current] > a[i])
		{
			current = i;
			if(i == 1)break;
		}
	}
	y = current;
	for(int i = x;i >= 0;i--)
	{
		cindex++;
	}
	for(int i = 0;i < y;i++)
	{
		cindex++;
	}
	cindex -= 4;
	cout << cindex;
	return 0;
}
