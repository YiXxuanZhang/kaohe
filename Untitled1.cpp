#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	char *name[] = {"hello","my","boy" };
char** p;
p = name + 1;
printf("%s", *p);
}
