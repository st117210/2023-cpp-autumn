#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int strcmpp(char* string1, char* string2);

int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");
	char string1[256] = { 0 };
	fscanf(f, "%s", &string1);
	char string2[256] = { 0 };
	fscanf(f, "%s", &string2);
	fclose(f);

	int t = strcmpp(string1, string2);

	f = fopen("out.txt", "w");
	fprintf(f, "%d", t);
	fclose(f);

	return EXIT_SUCCESS;
}

int strcmpp(char* string1, char* string2)
{
	int l = strlen(string1) > strlen(string2) ? strlen(string1) : strlen(string2);
	int count = 0;
	for (int i = 0; i < l; i++)
	{
		if (string1[i] != string2[i])
		{
			if (string1[i] > string2[i])
			{
				return 1;
				break;
			}
			else
			{
				return -1;
				break;
			}
		}
		else
		{
			++count;
		}
	}

	if (strlen(string1) == strlen(string2) && count == strlen(string1))
	{
		return 0;
	}
}


