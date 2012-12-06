/**
author: Anuroop Kuppam
date: 06-12-2012
type: ad-hoc, easy
**/

#include<stdio.h>

int abs(int k) {
	if( k < 0 ) return k * -1;
	else return k;
}

int main() {
	int a[10],i,k,diff,res;
	for(i=0;i<10;i++) scanf("%d",&a[i]);
	for(i=1;i<10;i++) a[i] +=a[i-1];
	diff = 100 - a[0]; 
	res = a[0];
	for(i=1; i< 10;i++) {
		k = abs(100 - a[i]);
		if( k < diff || (k == diff && a[i] > res)) {
			diff = k;
			res = a[i];
		}
	}
	printf("%d\n",res);
	return 0;
}
