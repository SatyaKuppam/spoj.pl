/**
Author: Anuroop Kuppam
date: --
type: game theory
**/

#include<stdio.h>

void print_array(int A[],int N) {
	int i;
	for( i=1; i<=N;i++) {
		printf("%d\n",A[i]);
	}
	printf("xxxxxxx\n");
}

void result(int A[],int N) {
	int moves = 0;
	int i;
	for(i=1; i<=N ;i++) {
		moves += A[i]/i;
	}
	puts(moves%2 ==0 ? "BOB" : "ALICE");
}

int main() {
	int T;
	scanf("%d\n",&T);
	int i;
	int N;
	for( i = 0;i < T;i++) {
		scanf("%d",&N);	
		int S[N+1];
		int j;
		for(j=1; j<=N ;j++) {
			scanf("%d",&S[j]);
		}
		//print_array(S,N);
		result(S,N);
	}
	return 0;
}
