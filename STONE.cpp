/**
Author: Anuroop Kuppam
date: 15-12-2012
type: center of gravity(geometry)
**/

#include<cstdio>
using namespace std;

int main() {
	int i,j,k,l;
	scanf("%d",&i);
	while(i--) {
		scanf("%d",&j);
		double X[j+1],Y[j+1];
		for(k=0;k<j;k++) scanf("%lf %lf",&X[k],&Y[k]);
		double A,Cx,Cy,x;
		X[j] = X[0]; Y[j] = Y[0];
		A = Cx = Cy = 0.0;
		for(k=0;k<j;k++) {
			x = X[k]*Y[k+1] - X[k+1]*Y[k];
			Cx += (X[k] + X[k+1]) * x; 
			Cy += (Y[k] + Y[k+1]) * x;
			A += x;
		}
		Cx = Cx/(3*A);
		Cy = Cy/(3*A);
		printf("%0.2lf %0.2lf\n",Cx,Cy);
	}
	return 0;
}
