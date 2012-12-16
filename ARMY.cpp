/**
Author: Anuroop Kuppam
date: 15-12-2012
type: ad-hoc
**/

#include<cstdio>
using namespace std;

int main() {
	int i;
	scanf("%d",&i);
	while(i--) {
		int j,k;
		scanf("%d %d",&j,&k);
		int max1,max2,l,m;
		max1 = max2 = 0;
		while(j--) {
			scanf("%d",&l);
			if(l > max1) max1 = l;
		}
		while(k--) {
			scanf("%d",&m);
			if(m > max2) max2 = m;
		}
		if(max1 >= max2) printf("Godzilla\n");
		else printf("MechaGodzilla\n");
	}
	return 0;
}

