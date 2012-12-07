/**
author: Anuroop Kuppam
date: 07-12-2012
type: ad-hoc, simple trick
**/

#include<stdio.h>

int main() {
	int i;
	scanf("%d",&i);
	if(i%10) printf("1\n%d\n",i%10);
	else printf("2\n");
	return 0;
}

