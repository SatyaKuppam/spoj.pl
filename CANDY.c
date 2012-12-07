/**
author:Anuroop Kuppam
type: ad-hoc, easy
**/

#include<stdio.h>

int main() {
	int i,j,k,l,s;
	while(1) {
		scanf("%d",&i);
		if( i == -1) break;
		int a[i];
		k = 0;
		for(j=0;j<i;j++) {
			scanf("%d",&a[j]);
			k += a[j];
		}
		s = k/i;
		l = 0;
		if(k % i == 0) {
			for(j=0;j<i;j++) {
				if(a[j] < s) l += s - a[j];
			}
			printf("%d\n",l);
		}
		else printf("-1\n");
	}
	return 0;
}
