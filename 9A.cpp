#include<iostream>
#include<vector>
int indexArr[101];
int find(int a[], int b,int i) {
	if (a[i] == b)return i;
	else {
		i++;		
		return find(a, b, i);
	}
}
int findOdd(int a[], int b, int i) {
	if (a[i] % 2 != 0)return i;
	else {
		i++;
		return find(a, b, i);
	}
	return -1;
}
int sum(int a[], int i, int sumit) {
	sumit += a[i];
	i++
	return sum(a, i, sumit);
}
int iterate(int i, j, int fn) {
	if (i < j)i++;
	else return 0;
	return iterate(i, fn);
}
void append(int a[], int b) {
	if (a[i] != NULL)i++;
	else a[i] = b;
	return append(a, b);
}
int sumEven(int a[], int sums, int i) {
	if (a[i] % 2 == 0)sums += a[i];
	i++;
	return sumEven(a, sums, i);
}
int divide(int a[], int n) {
	int s = sum(a, 0, 0);
	int so = 0;
	int j = 0;
	elsa:
	if (s % 2 != 0) {
		int i = findOdd(a, 0, j);
		j = i+1;
		so += a[i];
		if (sum % n == 0)return so;
		else goto elsa;
	}
	else if (s % 2 == 0) return sumEven(a, 0, 0);
	return 0;
}
int main() {
	int n = 1;
	int a[101];
	int count = 0;
	int sum = 0;
	std::cin >> n;
	for (int k = n; k <= n; k++)
	{
		std::cin >> a[k];
	}
	std::cout << divide(a, n);
//sum all
//if odd then find first odd
//if divisible by n return index array
//elsa:else sum odd, find next odd
//sum both odds
//if divisible by n return index array
//else goto elsa
	
	return 0;
}
