/**
Author: Anuroop Kuppam
Date: 16-12-2012
type: math
### What if the size of llu isnt enough for the operation, Think of an alternate formula.
**/

#include<cstdio>
using namespace std;

int main() {
	unsigned long long n;
	int i;
	scanf("%d",&i);
	while(i--) {
		scanf("%llu",&n);
		printf("%llu\n",(n+1)*n/6);
	}
	return 0;
}
