#include "Header.h"

void opt2(char *filename)//fix_972_to_0
{
	int eror;
	char start[2] = "0";
	char ignore[4];
	char num[20];
	rename(filename, "temp.txt");

	FILE *f = fopen("temp.txt", "r");
	if (f == NULL)
	{
		printf("EROR\n");
		scanf("%d", &eror);
		return;
	}
	FILE *fp = fopen(filename, "w");
	if (f == NULL)
	{
		printf("Eror");
		return;
	}

	fscanf(f, "%3s%s", &ignore, &num);
	while (!feof(f))
	{
		if ((strlen(num) == 9) && (strcmp(ignore, "972") == 0))
			fprintf(fp, "%s%s\n", start, num);
		fscanf(f, "%3s%s", &ignore, &num);
	}
	fclose(f);
	fclose(fp);
	remove("temp.txt");
	printf("\n\n\t\t\t\t===Numbers in file are fixed===\n\n\n");

}