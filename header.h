#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int n;
int d;
char *str;
double time1;
double time2;
double time3;
double time4;
int gendata();
void trivial(char*tri);
void juggle(char *jug);
void swap(char *str1, int i1, int i2, int d);
void blockswap(char *str1);
void reverse(char *str1, int a, int b);
void reversal(char *str1);
void printhead();
void printresult();
