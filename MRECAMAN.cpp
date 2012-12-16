/**
Author: Anuroop Kuppam
date: 15-12-2012
type: ad-hoc
**/

#include<cstdio>
using namespace std;

const int MAX = 500002;
bool flag[MAX*10];
int a[MAX];

int main() {
	int i,p,n;
	a[0] = 0;
	for(i=1;i<=MAX;i++) {
		p = a[i-1];
		if( p > i && !flag[p-i]) a[i] = p-i;
		else a[i] = p+i;
		flag[a[i]] = 1;
	}
	while(scanf("%d",&n) == 1 && n != -1) printf("%d\n",a[n]); 
	return 0;
}
