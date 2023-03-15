#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale(0, "rus");
	int n;
	char str1[3][10];
	FILE* fp;
	fp = fopen("D:\\ex.txt", "w+a");
	puts("Введите число");
	scanf("%d", &n);
	fprintf(fp, "%d\n", n);
	for (int i = 0;i < 3;i++)
	{
		printf("Введите строку %d \n", i + 1);
for (int j = 0;j < 10;j++)
		{
			scanf("%c", &str1[i][j]);
		}
	}
for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 10;j++)
			fprintf(fp, "%c", str1[i][j]); //Запись строки в файл
	}
	fclose(fp);
	printf("Распечатка содержимого файла\n");
	if ((fp = fopen("D:\\ex.txt", "r")) != NULL)
