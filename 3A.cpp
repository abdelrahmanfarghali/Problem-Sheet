#include<iostream>
int main(){
	char chia[101] = "";
	char chib[101] = "";
	std::cin >> chia;
	std::cin >> chib;
	char chic[101] = "";
	for(int i = 0; i < sizeof(chia); i++)
	{
		chia[i] == '1' && chib[i] == '1' ? chic[i] = '0' : chia[i] == '0' && chib[i] == '1' ? chic[i] = '1' : chia[i] == '1' && chib[i] == '0' ? chic[i] = '1' : chia[i] == '0' && chib[i] == '0' ? chic[i] = '0' : 0;		
	}
	std::string chics(chic);
	std::cout << chics;
	return 0;
}
