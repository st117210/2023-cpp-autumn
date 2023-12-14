#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int strLen(char* str);
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

int strLen(char* str)
{
	int res = 0;
	while (str[res++] != '\0');
	return res;
}

int strcmpp(char* string1, char* string2)
{
	int l = strLen(string1) > strLen(string2) ? strLen(string1) : strLen(string2);
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

	if (strLen(string1) == strLen(string2) && count == strLen(string1))
	{
		return 0;
	}
}


