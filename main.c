#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	
	char word1[30], word2[30], word3[30];
	
	printf("input a word: ");
	scanf("%s", word1);
	
	printf("input a word: ");
	scanf("%s", word2);
	
	printf("input a word: ");
	scanf("%s", word3);
	
	
	FILE *fp;
	fp = fopen("sample.txt", "w");

	fprintf(fp, "%s\n%s\n%s\n", word1, word2, word3);
		
	fclose(fp);
	
	return 0;
}
