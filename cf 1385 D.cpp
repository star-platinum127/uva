#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1;
int solve(int l,int r,char c){
	if(l+1==r) return s1[l]!=c;
	int cntl=0;
	int cntr=0;
	int mid=(l+r)/2;
	for(int i=l;i<r;i++){
		if(i<mid) cntl+=(s1[i]!=c);
		else cntr+=(s1[i]!=c);	
	}
	return min(cntl+solve(mid,r,c+1),cntr+solve(l,mid,c+1));
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin>>s1;
		cout<<solve(0,n,'a')<<endl;
	}
	return 0;
}
