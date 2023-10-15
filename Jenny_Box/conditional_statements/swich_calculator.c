#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: A calculator for add, subtract, multiply, and divide operations
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	float a, b, sum, diff, quot, prod;
	char op;
	int i;

	puts("Enter an operator");
	op = getchar();

	switch (op == '+')
	{
		case 1:
			puts("Enter 2 operands");
			scanf("%f %f", &a, &b);
			sum = a + b;
			printf("Sum of %f and %f is %f\n", a, b, sum);
		default:
			switch (op == '-')
			{
				case 1:
					puts("Enter 2 operands");
					scanf("%f %f", &a, &b);
					diff = a - b;
					printf("Difference between %f and %f is %f\n", a, b, diff);
				default:
					switch (op == '/' || op == '\\')
					{
						case 1:
							puts("Enter 2 operands");
							scanf("%f %f", &a, &b);
							quot = a / b;
							printf("%f divided by %f is %f\n", a, b, quot);
						default:
							switch (op == '*')
							{
								case 1:
									puts("Enter 2 operands");
									scanf("%f %f", &a, &b);
									prod = a * b;
									printf("%f times %f is %f\n", a, b, prod);
								default:
									puts("You have entered an incorrect operator");
									break;
									//continue;
							}
					}
			}
	}
	return (0);
}


