#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"header.h"
int main() {
	time_t start, end;
	int count = 0;
        int n,d;
	while (1) {
                if (gendata(&n,&d) == 0)break;
		else {
			if (count == 0) {
				printhead();
				count++;
			}
                 time1 = Time(trivial,n,d);
                 time2 = Time(juggle,n,d);
                 time3 = Time(blockswap,n,d);
                 time4 = Time(reverse,n,d);
                        printresult(n,d);
		}
	}
	return 0;
}