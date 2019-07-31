#include<iostream>
//bool found(char sequence[]);
int main(int argc, char* argv[])
{
	//char sequence[101];
	//std::cin >> sequence;
	//sequence += '\0';
	std::string str;
	std::cin >> str;
	if(str.find("H") != std::string::npos) 
	{
		std::cout << "YES";
		return 0;
	}
	if(str.find("Q") != std::string::npos) 
	{
		std::cout << "YES";
		return 0;
	}
	if(str.find("9") != std::string::npos) 
	{
		std::cout << "YES";
		return 0;
	}
	std::cout << "NO";
	//if (found(sequence)) std::cout << "YES";
	//if (!found(sequence)) std::cout << "NO";
	return 0;
}
bool found(char sequence[])
{
	for (int i = 0; i < 101; i++)
	{
		if (sequence[i] == 'H') return true;
		if (sequence[i] == 'Q') return true;
		if (sequence[i] == '9') return true;
	}
	return false;
}
