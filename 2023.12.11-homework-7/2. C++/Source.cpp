#include<iostream>
#include<fstream>
#include<string>

int palindrom(std::string str);

int main(int argc, char* argv[])
{
	std::ifstream fin("in.txt");
	std::string str = { 0 };
	while (!fin.eof())
	{
		fin >> str;
	}
	fin.close();

	int t = palindrom(str);

	std::ofstream fout("out.txt");
	fout << t << std::endl;
	fout.close();

	return EXIT_SUCCESS;
}

int palindrom(std::string str)
{
	int g = str.size();

	std::string reverse = str;
	for (int i = 0; i < g; i++)
	{
		reverse[i] = str[g - i - 1];
	}

	for (int i = 0; i < g; i++)
	{
		if (reverse[i] != str[i])
		{
			return 0; // str != palindrom 
			break;
		}
		else
		{
			return 1; // str == palindrom
		}
	}
}

