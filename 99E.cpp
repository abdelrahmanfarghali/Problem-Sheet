#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	clock_t begin = clock();
	/////////////////////////
	//YOLO
	int n;
	cin >> n;
	int j = 0;
	for(int y = 0; y < n; y++)
	{
		char tetrahedron[3] = {'A', 'B', 'C'};
		for(int x = 0; x < n; x++)
		{	
			int s = 0;
			//DABaD, DACaD, DCBaD, DCAbD, DBAbD, DBCbD
			//;DABcD, DACbD, DCBcD, DCAcD, DBAcD, DBCaD
			//;DADAD, DBDAD, DCDAD, DADBD, DBDBD, DCDBD, DADCD, DBDCD, DCDCD
			s = rand() % n + 0;
			if(tetrahedron[s] != NULL)
			{
				j++;
				tetrahedron[s] = NULL;
			}
		}
	}


	cout << j << endl;
	/////////////////////////
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << elapsed_secs << endl;

	return 0;
}
