/**
Author: Anuroop Kuppam
date: 15-12-2012
type: ad-hoc
 **/

#include<stdio.h>

int main() {
	int i,x,y,cs = 1;
	char buff[4096];
	while(scanf("%s",buff) == 1 && buff[0] != '-') {
		for(x = y = i = 0 ;buff[i] ; i++) {
			x += buff[i] == '{' ? 1 : -1;
			if(x<0) x += 2, y++;
		}
		printf("%d. %d\n",cs++, (x>>1) + y);
	}
	return 0;
}
