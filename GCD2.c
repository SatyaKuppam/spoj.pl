/**
author: Anuroop Kuppam
date: 06-12-2012
type: number theory, euclids gcd algorithm
hints: string mod, (a+b) mod c = ((a mod c) + (b mod c)) mod c
**/

#include<stdio.h>
char b[300];
int rem(int a) {
	int p=0,i;
	for(i=0;b[i]!= '\0';i++) p = ((b[i]-'0')+p*10) %a;
	return p;
}

int gcd(int a,int b) {
	if(b==0) return a;
	else gcd(b,a%b);
}

int main() {
	int i,j,a;
	scanf("%d",&i);
	while(i--) {
		scanf("%d %s",&a,b);
		if(a == 0) printf("%s\n",b);
		else {
			int p = rem(a);
			printf("%d\n",gcd(a,p));
		}
	}
	return 0;
}
