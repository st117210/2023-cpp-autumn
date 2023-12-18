#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int strLen(char* str);
char* strcatt(char* word1, char* word2);

int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");
	char word1[256] = {0};
	fscanf(f, "%s", &word1);
	char word2[256] = {0};
	fscanf(f, "%s", &word2);
	fclose(f);

	char* t = strcatt(word1, word2);

	f = fopen("out.txt", "w");
	fprintf(f, "%s", t);
	fclose(f);

	return EXIT_SUCCESS;
}

int strLen(char* str)
{
	int res = 0;
	while (str[res++] != '\0');
	return res;
}

char* strcatt(char* word1, char* word2)
{
	int l1 = strLen(word1);
	int l2 = strLen(word2);
	for (int i = 0; i < l2 + 1; i++)
	{
		word1[l1] = word2[i];
		l1++;
	}
	return word1;
}