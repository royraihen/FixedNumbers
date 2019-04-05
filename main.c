#include "Header.h"

void main()
{
	int end;
	int pick;
	char filename[15];
	rewind(stdin);
	printf("Enter new filename:\n");
	gets(filename);

	void (*pf[])(char *filename) = { opt1,opt2,opt3 };
	
	do
	{
		system("cls");
		pick = 0;
		printf("\t\t\t===Select which program to run (1-3) Or 0 to Exit===\n\n\t\t\t\t\t\t");
		printf("\n\t\t1.Making sure all numbers are on the right length and have IL country code\n\t\t2.Switch IL country code for 0");
		printf("\n\t\t3.Adding or making sure 0 is the first digit on a number");
		scanf("%d", &pick);

		if ((pick > 0) && (pick < 5))
			(*pf[pick - 1])(filename);
	} while (pick);
	//fix_file_il_country(filename);
}