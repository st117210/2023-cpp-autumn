#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int main(int argc, char* argv[])
{
	FILE* f = fopen("in.txt", "r");
	char* ch = (char*)malloc(sizeof(char*) * ( + 1));

	fscanf(f, "%s", &word2);
	fclose(f);



	f = fopen("out.txt", "w");
	fprintf(f, "%s", t);
	fclose(f);


	return EXIT_SUCCESS;
}
