#include <stdio.h>
#include <string.h>
void main(void){
	int i =0;
	
	FILE *fp = NULL;
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
	{
		printf("������ ������\n");
		return;
	}
	for (i = 0; i<3; i++){
		char word[30];
		printf("�ܾ �Է����ּ���: ");
		scanf("%s", &word);
		fprintf(fp, "%s\n",word );

	}
	
	fclose(fp);
}
