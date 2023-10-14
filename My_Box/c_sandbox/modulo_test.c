#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int i;
	int j;
	int modulo;
	char confirm_response;

	printf("Enter any signed integer number: \n");

	scanf("%d", &i);

	printf("Confirm the integer you just entered is %d\n", i);

	scanf("%c", &confirm_response);

	if (confirm_response == 'Y' || confirm_response == 'y')
	{

		printf("Enter another signed integer number: \n");

		scanf("%d", &j);

		printf("Confirm the integer you just entered is %d", j);
		scanf("%c", &confirm_response);

		if (confirm_response == 'Y' || confirm_response == 'y')
		{
			modulo = i % j;

			printf("%d mod %d is %d\n", i, j, modulo);
		}
		printf("Runtime error");
	}
	printf("Runtime error");

	return (0);
}
