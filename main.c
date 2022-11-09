#include <stdio.h>
#include <string.h>
void main(void){
	int i =0;
	
	FILE *fp = NULL;
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
	{
		printf("파일을 못열음\n");
		return;
	}
	for (i = 0; i<3; i++){
		char word[30];
		printf("단어를 입력해주세요: ");
		scanf("%s", &word);
		fprintf(fp, "%s\n",word );

	}
	
	fclose(fp);
}
