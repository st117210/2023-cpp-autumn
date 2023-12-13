#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


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

char* strcatt(char* word1, char* word2)
{
	int l1 = strlen(word1);
	int l2 = strlen(word2);
	for (int i = 0; i < l2 + 1; i++)
	{
		word1[l1] = word2[i];
		l1++;
	}
	return word1;
}