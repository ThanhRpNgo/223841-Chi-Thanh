#include <stdio.h>

void main()
{
	int grade = 0;
	printf("the medium grade: ");
	scanf_s("%d", &grade);
	if (grade >= 8.5)
	{
		printf("good student \r\n");
	}
	else if ((grade >= 6.5) & (grade < 8))
	{
		printf("ELLs \r\n");
	}
	else if ((grade >= 5) & (grade < 6.5))
	{
		printf("the average student \r\n");
	}
	else
	{
		printf("below average student \r\n");
	}

}