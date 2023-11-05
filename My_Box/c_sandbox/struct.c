#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int roll_num;
	char name[30];
	float mark;
};

int main(void)
{
	int i, j, k;
	char *details[3] = {"name", "roll_num", "mark"};
	struct Student s[3];

//	details = {"name", "roll_num", "mark"};

	for (k = 0, j = 1; k < 3 && j <= 3; k++, j++)
	{
		for (i = 0; i < 3; i++)
		{
			printf("\nEnter %s of Student [%d]: ", details[i], j);
			
			if (strcmp(details[i], "name") == 0)
			{
				scanf("%[^\n]", s[k].name);
			}
			else if (strcmp(details[i], "roll_num") == 0)
			{
				scanf("%d", &s[k].roll_num);
			}
			else if (strcmp(details[i], "mark") == 0)
			{
				scanf("%f", &s[k].mark);
			}	
			getchar();
		}
	}

	for (k = 0, j = 1; k < 3 && j <= 3; k++, j++)
	{
		printf("Student [%d]:\n", j);

		for (i = 0; i < 3; i++)
		{
			if (strcmp(details[i], "name") == 0)
			{
				printf("%s -> %s\n", details[i], s[k].name);
			}
			else if (strcmp(details[i], "roll_num") == 0)
			{
				printf("%s -> %d\n", details[i], s[k].roll_num);
			}
			else if (strcmp(details[i], "mark") == 0)
			{
				printf("%s -> %f\n", details[i], s[k].mark);
			}
		}
		putchar('\n');
	}

	return (0);
}
