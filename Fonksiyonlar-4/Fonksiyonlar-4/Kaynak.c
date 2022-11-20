#include<stdio.h>
#include<stdlib.h>

void dikdortgen(int en, int boy)
{
	int i, j;
	for (i = 0; i < en; i++)
	{
		for (j = 0; j < boy; j++)
		{
			printf("*");
		}
		printf("\n");
	}
 }

int main() {

	int en1, boy1;

	printf("En Gir: ");
	scanf_s("%d", &en1);
	printf("Boy Gir: ");
	scanf_s("%d", &boy1);

	dikdortgen(en1, boy1);

	return 0;
}