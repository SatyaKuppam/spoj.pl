/**
author: Anuroop Kuppam
date: 06-12-2012
type: sorting easy
**/

#include<stdio.h>

int main() {
	int i,j,k,l,m,n,o,sum;
	scanf("%d",&n);
	for(o=0;o<n;o++) {
	scanf("%d %d",&j,&i);
	int a[i];
	for(l=0;l<i;l++) scanf("%d",&a[l]);
	for(l=i;l>0;l--) {
	for(m=0;m<l-1;m++) {
		if(a[m] < a[m+1]) {
			int k = a[m];
			a[m] = a[m+1];
			a[m+1] = k;
		}
	}
	}
	sum = 0;
	for(l=0;l<i;l++) {
		sum = sum + a[l];
		if(sum >= j) break;
	}
	if(sum < j) printf("Scenario #%d:\nimpossible\n",o+1);
	else {
			printf("Scenario #%d:\n%d\n",o+1,l+1);
	   }	
	}
	return 0;
}
