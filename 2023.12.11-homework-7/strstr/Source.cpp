#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int strstrr(char* string, char* sample);

int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");
	char string[256] = { 0 };
	fscanf(f, "%s", &string);
	char sample[256] = { 0 };
	fscanf(f, "%s", &sample);
	fclose(f);

	int a = strstrr(string, sample);

	f = fopen("out.txt", "w");
	fprintf(f, "%d", a);
	fclose(f);

	return EXIT_SUCCESS;
}

int strstrr(char* string, char* sample)
{
	if (string == sample || *sample == '\0')
	{
		return 0;
	}

	int i = 0;
	int j = 0;
	int res = 0;
	while (sample[i] != '\0') 
	{
		if (string[j] == '\0')
		{
			res = -1;
			break;
		}

		if (string[j + i] == sample[i])
		{
			i++;
			res = j;
		}
		else 
		{
			j++;
			i = 0;
		}
	}

	return res;
}
