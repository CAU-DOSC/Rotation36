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
	return 0;
}
