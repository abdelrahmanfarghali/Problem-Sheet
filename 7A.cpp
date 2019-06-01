#include<iostream>
int main(){
	char strings[101] = "";
	std::cin >> strings;
	for(int i = 0; i < sizeof(strings);i++)
	{
		if((int)strings[i] < 97)
		{
			int num = ((int)strings[i]) + 32;	
			strings[i] = (char)num;
		}
	}
	int firsts;
	int seconds;
	for(int i = 0; i < sizeof(strings);i++)
	{
		firsts += (int)strings[i];
	}
	char stringb[101] = "";
	std::cin >> stringb;
	for(int i = 0; i < sizeof(stringb);i++)
	{
		if((int)stringb[i] < 97)
		{
			int num = ((int)stringb[i]) + 32;	
			strings[i] = (char)num;
		}
	}
	for(int i = 0; i < sizeof(stringb);i++)
	{
		seconds += (int)stringb[i];
	}
	seconds > firsts ? std::cout << -1 : seconds < firsts ? std::cout << 1 : seconds == firsts ? std::cout << 0 : return 0;
	return 0;
}
