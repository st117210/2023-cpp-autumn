#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

char* strmultt(char* string, int n);

int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");
	char string1[256] = { 0 };
	fscanf(f, "%s", &string1);
	int n = 0;
	fscanf(f, "%d", &n);
	fclose(f);

	char* t = strmultt(string1, n);

	f = fopen("out.txt", "w");
	fprintf(f, "%s", t);
	fclose(f);

	free(t);

	return EXIT_SUCCESS;
}

char* strmultt(char* string, int n)
{
	int l = (strlen(string)) * n;
	char* copy = (char*)malloc(sizeof(char*) * l);
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < strlen(string); j++)
		{
			copy[k] = string[j];
			++k;
		}
	}
	copy[l] = '\0';

	return copy;
}


