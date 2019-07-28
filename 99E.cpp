#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
bool find(string s, vector c);
int main()
{
	clock_t begin = clock();
	/////////////////////////
	//YOLO
	int n;
	cin >> n;
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
	cout << j << endl;
	/////////////////////////
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << elapsed_secs << endl;

	return 0;
}
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
