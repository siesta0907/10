#include <stdio.h>
#include <string.h>
void main(void){
	char c;
	
	FILE *fp = NULL;
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
	{
		printf("파일을 못열음\n");
		return;
	}
	while ((c=fgetc(fp)) != EOF) putchar(c);
	fclose(fp);
}
