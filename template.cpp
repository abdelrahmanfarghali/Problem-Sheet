#include<stdio.h>
#include<ctime>
#include<iostream>
using namespace std;
void func(int a)
{
	a--;
	if(a > 1)
		func(a);
}
void funcb(int a)
{
	for(a = 5; a > 1; a++)
	{
	}
}
int main()
{
	clock_t begin = clock();
	/////////////////////////
	//YOLO
	func(5);
	/////////////////////////
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << elapsed_secs << endl;

	return 0;
}
