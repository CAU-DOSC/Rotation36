#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"header.h"
int main() {
	time_t start, end;    
	int count = 0;
	while (1) {
		if (gendata() == 0)break;
		else {
			if (count == 0) {
				printhead();
				count++;
			}
			char *str1 = (char*)malloc(sizeof(char)*(n + 1));
			strcpy(str1, str);
			start = clock();
			trivial(str1);
			end = clock();
			time1 = (double)(end - start) / CLOCKS_PER_SEC;
			strcpy(str1, str);
			start = clock();
			juggle(str1);
			end = clock();
			time2 = (double)(end - start) / CLOCKS_PER_SEC;
			strcpy(str1, str);
			start = clock();
			blockswap(str1, d, n);
			end = clock();
			time3 = (double)(end - start) / CLOCKS_PER_SEC;
			strcpy(str1, str);
			start = clock();
			reversal(str1);
			end = clock();
			time4 = (double)(end - start) / CLOCKS_PER_SEC;
			printresult();
			free(str1);
		}
	}
	return 0;
	/*time_t start, end;    
	int count = 0;
        int n,d;
	while (1) {
                if (gendata(&d,&n) == 0)break;
		else {
			if (count == 0) {
				printhead();
				count++;
			}
                 time1 = Time(&trivial,d,n);
                 time2 = Time(&juggle,d,n);
                 time3 = Time(&blockswap,d,n);
                 time4 = Time(&reversal,d,n);
                        printresult(d,n);
		}
	}
	return 0;*/
}
