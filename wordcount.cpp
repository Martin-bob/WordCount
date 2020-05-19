#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) {
	FILE* fp;
	char ch, temp;
	fp = fopen(argv[2], "r");
	//nums represents the numbers of characters
	int nums = 0;
	//count represents the numbers of words	
	int count = 1;
	if (fp == NULL) {
		printf("The file does not exist");
	}
	ch = fgetc(fp);
	while (!feof(fp)) {
		ch = fgetc(fp);
		nums++;
		/*if(ch=='\t'|ch=='\n'){
			nums++;
		}*/
		if ((ch==' '| ch == ',' | ch == '\n') && temp != ' ') {
			count++;
		}
		temp = ch;
	}
	if (strcmp(argv[1], "-c") == 0) {
		printf("×Ö·ûÊý:%d\n", nums);
	}
	else if (strcmp(argv[1], "-w") == 0) {
		printf("µ¥´ÊÊý:%d\n", count);
	}
	fclose(fp);

	return 0;
}
