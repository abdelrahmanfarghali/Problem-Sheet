#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<iostream>
//bool find(string s, vector c);
int ms(int n, int m, int s)
{
	s = n;
	if (s + 1 >= 5 && s + 1 % 2 != 0) m++;
	else return m;
	return ms(n - 2, m, s);
}
int is(int n, int i, int iter)
{
	if (n == 1) return 1;
	if (iter <= n)
	{
		if(iter % 2 == 0)
		{
			i += i * 3;
		}
		else
		{
			i += i * 2;
		}
	}
	//else if (n + 1 % 2 == 0) return i - 1;	//this if input is 2 or 3
	else return i;	//this if input is 4
	return is(n, i, iter + 1);	//we need to find a factor for 3, 6, 18, and 42
/*
	if (n == 1) return 1;
	if (iter <= n) i = i * j;
	else return i;
	return is(n, i + 1, j, iter + 1);
	//todo add k before iteration ends
	//when the iteration ends the increment will be added in increase() function
	//so we need to increase by k from iter = 5 until iter = n - 2
	//or we can add the total increments after finishing the recursion depending on m
	//as if we have m = 5 then begin from m = 1 and add 
	//3 ^ 2 * increment + 3 ^ 3 * increment + 3 ^ 4 * increment then add the last m on the increase() fn
*/
}
int smp(int k, int l, int iter)
{
	int n = 0;
	int m = 0;
	if (iter >= 4)
	{
		if (l % 2 == 0) k += pow(3, (l / 2) - 1);
		else
		{
			m = pow(3, (l / 2) - 1);
			m = m * 4;
			k += m;
		}
		return smp(k, l, iter - 1);
	}
	return k;
}
int increase(int n, int i, int m, int k)
{
	//if (n + 1 % 2 != 0) m = ms(n, 0, 0);
	k = smp(k, n, n);
	std::cout << k << std::endl;
	i = is(n, i, i);
	//i += k;
	return i;
}
int main()
{
	clock_t begin = clock();
	/////////////////////////
	//YOLO
	int n = 0;
	std::cin >> n;
	std::cout << increase(n, 1, 0, 0) - 1;
	/*
	int j = 0;
	bool tj = false;
	int o = 4;
	int p = 0;
	int pj = 21; //in case of n = 4 pj = 21
	for (int x = 0; x < n; x++)
	{
		int c = o;
		o = p;
		p = c;
		int tetrahedron[4] = {1, 2, 3, 4};			
		for(int y = o; p > o ? y < p : y > p; y++)
		{
			if(tetrahedron[y] != NULL)
			{
				tetrahedron[y] = NULL;
				if (y > 0) tetrahedron[y - 1] = y;
				//if can do cycle j++
				j++;
				//exceptions
				if (n < 4)
				{
					if (p > o)p = n;
					else o = n;
				}
			}
		}
		pj--;
		//n--;	//mistake cause n is constant during the process of counting
			//throught the array of points, but you need to count if it takes more than 4 lines to complete
			//the operation of drawing a path so you need to revert it back in a third loop
	}
	cout << j << endl;*/
	/////////////////////////
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	putchar_unlocked(elapsed_secs);

	return 0;
}
/*
//random pickup
//restrictions
//vector declaration instead of array
vector<string> cvec;
string s = "";
//inserting sequence which must be checked if there is a similar sequence and if there is don't insert
s += tetrahedron[y];	//during the loop in y loop
s += '\0';	//after the y loop in x loop
if (!find(s, cvec) cvec.insert(s);

//make char array of char arrays so it will accept these outcomes and then,
// pass through points again and find out if it did pass throught the same sequence so
// it will not count that as a test and will test again until it reaches for 1000000007 
//tests checking if there is any more possible outcomes the test is cycle test for
//undirected graph each cycle can be 1, 3, 4, ..., n sides until it reaches for the maximum 
//n that it's maximum is 10000000; we're gonna test if sequence is possible using 
//<random pick up> under restriction of rules to restrict impossible or unavailable moves

//We're gonna split the array of strings into many so it can accept such large amount of 
//data and we'll check each array on every operation (gonna replace with a dynamic vector with putting limit of 1,000,000,007 indeces)
/*
DA BAD B
DA CAD B
DA BCD A
DA CBD A
DA DAD B
DA DBD A
DA DCD A

DA DCD B
DA BCD B

DA BAD C
DA CAD C
DA CBD C
DA DAD C
DA DBD C
*/
//DABaD, DACaD, DCBaD, DCAbD, DBAbD, DBCbD
//;DABcD, DACbD, DCBcD, DCAcD, DBAcD, DBCaD
//;DADAD, DBDAD, DCDAD, DADBD, DBDBD, DCDBD, DADCD, DBDCD, DCDCD
//hypnothesis about the first route can be varied from - to
//hypnothesis: n = 2 route = 1;n = 4 route = 6;n = 6 route = 4 * 21
//hypnothesis: route = 1 * 2, 2 * 3, 3 * 4, 4 * 5 n = 2, 4, 5, 6 respectively
///////////////// important update //////////////////////////////////////////
//this is a simple math problem path of size 5 got 42 paths path of size 3 got 6 paths
///////////////// very important update /////////////////////////////////////
//if n = even number then multiply by 3 if not multiply by 2
