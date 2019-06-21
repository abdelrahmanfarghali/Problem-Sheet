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
	for(int y = 1; y < n; y++)
	{
		char tetrahedron[3] = {'A', 'B', 'C'};
		while(tetrahedron[0] != NULL || tetrahedron[1] != NULL || tetrahedron[2] != NULL)
		{
			int s = 0;
			//DABaD, DACaD, DCBaD, DCAbD, DBAbD, DBCbD
			//;DABcD, DACbD, DCBcD, DCAcD, DBAcD, DBCaD
			//;DADAD, DBDAD, DCDAD, DADBD, DBDBD, DCDBD, DADCD, DBDCD, DCDCD
			//hypnothesis about the first route can be varied from - to
			//hypnothesis: n = 2 route = 1;n = 4 route = 6;n = 6 route = 4 * 21
			//hypnothesis: route = 1 * 2, 2 * 3, 3 * 4, 4 * 5 n = 2, 4, 5, 6 respectively
			s = rand() % n + 0;
			if(tetrahedron[s] != NULL)
			{
				j += y;
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
