#include <bits/stdc++.h>
using namespace std;


int main() {
	int c,co=0,most=0;
	cin>>c;
	int a[c][2];
	for(int i=0;i<c;i++){
		cin>>a[i][0];
		a[i][1]=1;
		for(int j=i-1;j>=0;j--){
			if(a[j][0]<a[i][0] && a[j][1]>=a[i][1]){
				a[i][1]=a[j][1]+1;
			}
		}	
		if(a[i][1]>most) most=a[i][1];
	}
	cout<<most;
	return 0;
}
