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
	puts("¬ведите число");
	scanf("%d", &n);
	fprintf(fp, "%d\n", n);
	for (int i = 0;i < 3;i++)
	{
		printf("¬ведите строку %d \n", i + 1);
