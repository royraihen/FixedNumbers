#include "Header.h"


void opt3(char *filename)//just_0
{
	char num[20];
	rename(filename, "temp.txt");

	FILE *f = fopen("temp.txt", "r");
	if (f == NULL)
	{
		printf("EROR f\n");
		return;
	}
	FILE *fp = fopen(filename, "w");
	if (f == NULL)
	{
		printf("Eror fp");
		return;
	}

	fscanf(f, "%s", num);
	while (!feof(f))
	{
		if ((strlen(num) == 8) || (strlen(num) == 9))
			fprintf(fp, "0%s\n", num);
		fscanf(f, "%s", num);
	}

	fclose(f);
	fclose(fp);
	remove("temp.txt");
	printf("\n\nNumbers in file are fixed");
}

