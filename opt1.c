#include "Header.h"


void opt1(char *filename)		//fix_file_il_country
{
	int eror, i;
	char num[20], start[4], pck;

	FILE *f = fopen("1.txt", "r");
	if (f == NULL){			//verify file was opened correctly
		printf("EROR\n");
		scanf("%d", &eror);
		return;
	}

	FILE *fp = fopen(filename, "w");
	if (f == NULL){			//verify file was created\modified correctly
		printf("Eror");
		return;
	}

	fscanf(f, "%3s%s", &start, &num);	//getting the first number in the file
	while (!feof(f))
	{
		if ((strlen(num) == 9) && (strcmp(start, "972") == 0))	//checking the length without country code is 9 and the first 3 digits are 972
		{
			for (i = 0; i < 12; i++) {
				if ((num[i] >= 0) && (num[i] <= 9)) {
					//printf("Number = %3s%s is now fixed\n\n", start, num); - optional too un-comment to see each fixed number
					fprintf(fp, "%s%s\n", start, num);
				}
			}
		}
		fscanf(f, "%3s%s", &start, &num);
	}
	fclose(f);
	fclose(fp);
	printf("\n\n\t\t\t\t===Numbers in file are fixed===\n\n");
	rewind(stdin);
	printf("\t\t\t\t===Remove country code? (Y/N)===\n\n\t\t\t\t\t\t");
	scanf("%c", &pck);
	if (pck == 'y' || pck == 'Y')
		opt2(filename);
}