/**
Author: Anuroop Kuppam
date: 17-12-2012
type: Simulation
**/

#include<cstdio>
#include<stack>
using namespace std;

int main() {
	int i;
	while(scanf("%d",&i) == 1 && i) {
		stack<int> sideLane;
		int order = 1;
		bool flag = true;
		int trucks[i];
		for(int j=0;j<i;j++) scanf("%d",&trucks[j]);
		for(int j=0;j<i && flag;j++) {
			while(!sideLane.empty() && sideLane.top() == order) {
				order++;
				sideLane.pop();
			}
			if(trucks[j] == order) order++;
			else if(!sideLane.empty() && sideLane.top() < trucks[j]) flag = false;
			else sideLane.push(trucks[j]);
		}
		if(flag) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
