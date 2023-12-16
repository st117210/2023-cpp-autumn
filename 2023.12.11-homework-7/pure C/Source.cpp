#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>

int main(int argc, char** argv)
{
	FILE* f = fopen("in.txt", "r");

	char c = 0;
	int countChar = 0;
	while (c != EOF)
	{
		++countChar;
		c = getc(f);
	}

	fseek(f, 0, SEEK_SET);
	char* text = (char*)malloc(sizeof(char*) * countChar); //countChar = size + \0
	for (int i = 0; i < countChar; i++)
	{
		text[i] = getc(f);
	}
	text[countChar - 1] = '\0';

	fclose(f);

	int beginS = 0;
	int beginS1 = 0;
	int endS = 0;
	int endS1 = 0;
	int maxNumWords = 0;
	int words = 0;
	int wordsInS = 0;
	for (int i = 0; i < countChar; i++)
	{
		
		if (text[i] == ' ')
		{
			++words;
			++wordsInS;
		}
		else if (text[i] == '!' || text[i] == '?' || text[i] == '.')
		{
			beginS1 = endS1;
			endS1 = i;
			++words;
			++wordsInS;

			if (maxNumWords < wordsInS)
			{
				if (beginS1 != 0)
				{
					beginS = beginS1 + 2;
				}

				endS = endS1;
				maxNumWords = wordsInS;
			}
			wordsInS = 0;
		}
	}

	f = fopen("out.txt", "w");
	for (int i = beginS; i < endS + 1; i++)
	{
		fprintf(f, "%c", text[i]);
	}
	fclose(f);

	free(text);

	return 0;
}