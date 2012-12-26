/**
Author: Anuroop Kuppam
Date: 17-12-2012
type: ad-hoc
 **/

#include<cstdio>
using namespace std;

int main() {
	int i;
	long long inp,sum = 0;
	scanf("%d",&i);
	while(i--) {
		scanf("%lld",&inp);
		sum = sum^inp;
	}
	printf("%lld\n",sum);
	return 0;
}

