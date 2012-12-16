/**
Author: Anuroop Kuppam
date: 16-12-2012
type: ad-hoc
**/

#include<cstdio>
using namespace std;

int main() {
	int r,c,i;
	scanf("%d",&i);
	while(i--) {
		scanf("%d %d",&r,&c);
		if(c>=r && r&1) printf("R\n"); // Mask all the bits except the LSB to determine if it is even or odd.
		else if(c>=r && !(r&1)) printf("L\n");
		else if(c&1) printf("D\n");
		else printf("U\n");
	}
	return 0;
}
