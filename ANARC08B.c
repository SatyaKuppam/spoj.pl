/**
author: Anuroop Kuppam
date: 08-12-2012
type: ad-hoc
**/

#include<stdio.h>
#include<string.h>

char encode[10][10] = {"063","010","093","079","106","103","119","011","127","107"};

int decode(int code) {
	switch(code) {
		case 63: return 0;
		case 10: return 1;
		case 93: return 2;
		case 79: return 3;
		case 106: return 4;
		case 103: return 5;
		case 119: return 6;
		case 11: return 7;
		case 127: return 8;
		case 107: return 9;
	}
	return 0;
}

void getres(char *res, int n) {
	int temp[50];
	int k = 0;	
	res[0] = 0;
	while(n) {
		temp[k] = n%10;
		n = n/10;
		k++;
	}
	for(--k;k>=0;k--) {
		strcat(res,encode[temp[k]]);
	}
}

int main() {
	int i,j,k,a,n[3];
	char input[1000],res[1000];
	while(scanf("%s",input) == 1) {
		if(!strcmp(input,"BYE")) break;
		a = n[0] = n[1] = k =0;
		for(i=0;input[i] != '='; ) {
			if(input[i] == '+') {
				k++;
				i++;
			}
			else {
				for(j=i;j<3+i;j++) {
					a = a*10+input[j] - '0';
				}
				n[k] = n[k]*10+decode(a);
				a=0;
				i = i+3;
			}
		}
		n[2] = n[0] + n[1];
		getres(res,n[2]);
		printf("%s%s\n",input,res);
	}
	return 0;
}
