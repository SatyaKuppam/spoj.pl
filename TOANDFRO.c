/**
Author: Anuroop Kuppam
date: --
type: ad-hoc
**/

#include<stdio.h>
#include<string.h>

int main() {
	int m,n,len,i,j;
	char input[250];
	while(scanf("%d",&n) == 1 && n) {
		scanf("%s",input);
		len = strlen(input);
		m = len/n;
		char output[m][n];
		len = 0;
		int flag = 0;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				if(flag) {
					output[i][n-j-1] = input[len];
				}
				else {
					output[i][j] = input[len];
				}
				len++;
			}
			flag = (flag+1) %2;
		}
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				printf("%c",output[j][i]);
			}
		}
		printf("\n");
	}
	return 0;
}

