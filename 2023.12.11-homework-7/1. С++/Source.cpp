#include<iostream>
#include<fstream>
#include<string>

int main(int argc, char* argv[])
{
	std::ifstream fin("in.txt");
	std::string text = { 0 };
	std::string str = { 0 };
	while (!fin.eof())
	{
		std::getline(fin, str);
		text += str + ' ';
	}
	fin.close();

	int ykaz = 0;
	int* tt = new int[text.size()] { 0 };
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] != ' ' && text[i] != '!' && text[i] != '?' && text[i] != ',' && text[i] != '.' && text[i] != ':') //you can add other characters (example, numbers)
		{
			tt[ykaz] = i;
			++ykaz;
		}
	}

	int k = 0;
	int* ykazHaClovo = new int[ykaz - 1] { 0 };
	for (int i = 1; i < text.size(); i++)
	{
		if (tt[i] != 0)
		{
			ykazHaClovo[k] = tt[i];
			++k;
		}
	}

	int* arrEndWords = new int[ykaz - 1] { 0 };
	int  kolvoClov = 0;
	for (int i = 0; i < ykaz - 1; i++)
	{

		if (ykazHaClovo[i + 1] - ykazHaClovo[i] != 1)
		{
			arrEndWords[i] = 1;
		}
	}
	for (int j = 0; j < ykaz - 1; j++)
	{
		kolvoClov += arrEndWords[j];
	}

	char* lettersArr = new char[ykaz - 1] { 0 };
	for (int i = 0; i < ykaz - 1; i++)
	{
		lettersArr[i] = text[ykazHaClovo[i]];
	}

	int countEndWord = 0;
	int* dlinaClova = new int[kolvoClov] { 0 };
	for (int i = 0; i < kolvoClov; i++)
	{
		for (int j = 0; j < ykaz - 1; j++)
		{
			if (arrEndWords[countEndWord] == 0)
			{
				++dlinaClova[i];
				++countEndWord;
			}
			else
			{
				++dlinaClova[i];
				++countEndWord;
				break;
			}

		}
	}

	countEndWord = 0;
	int ykazDlina = -1;
	int countWord = 0;
	int povtorWord = 0;
	for (int i = 0; i < kolvoClov; i++)
	{
		char* word = new char[dlinaClova[i] + 1] { 0 };
		for (int j = 0; j < dlinaClova[i] + 1; j++)
		{
			word[j] = lettersArr[countEndWord];
			++countEndWord;

		}
		word[dlinaClova[i]] = '\0';
		++countWord;
		--countEndWord;

		int countWord1 = countWord;
		int countEndWord1 = countEndWord;

		int povtorWord1 = 0;
		for (int x = countWord; x < kolvoClov; x++)
		{

			char* word1 = new char[dlinaClova[countWord1] + 1] { 0 };
			for (int z = 0; z < dlinaClova[countWord1] + 1; z++)
			{
				word1[z] = lettersArr[countEndWord1];
				++countEndWord1;
			}
			word1[dlinaClova[countWord1]] = '\0';
			--countEndWord1;

			int rightWord = 0;
			if (dlinaClova[countWord1] == dlinaClova[i])
			{
				for (int y = 0; y < dlinaClova[i]; y++)
				{
					if (word1[y] != word[y])
					{
						break;
					}
					else
					{
						++rightWord;
					}
				}

			}

			if (rightWord == dlinaClova[i])
			{
				++povtorWord1;
			}

			if (povtorWord < povtorWord1)
			{
				povtorWord = povtorWord1;
				ykazDlina = i;
			}
			++countWord1;

			delete[] word1;
		}

		delete[] word;
	}

	int sumEndWord = 0;
	int ykazUltraPuperClovo = 0;
	for (int i = 0; i < ykaz - 1; i++)
	{
		sumEndWord += arrEndWords[i];
		if (sumEndWord == ykazDlina)
		{
			ykazUltraPuperClovo = i + 1;
			break;
		}
	}

	char* ultraPuperClovo = new char[dlinaClova[ykazDlina] + 1] {0};
	for (int i = 0; i < dlinaClova[ykazDlina] + 1; i++)
	{
		ultraPuperClovo[i] = lettersArr[ykazUltraPuperClovo + i];
	}
	ultraPuperClovo[dlinaClova[ykazDlina]] = '\0';

	std::ofstream fout("out.txt");
	fout << ultraPuperClovo << std::endl;
	fout.close();

	delete[] tt;
	delete[] arrEndWords;
	delete[] ultraPuperClovo;
	delete[] lettersArr;
	delete[] ykazHaClovo;
	delete[] dlinaClova;

	return EXIT_SUCCESS;
}
