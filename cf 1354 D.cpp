#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[1000005];	
int n,q;
int b[1000005];
int solve(int mid){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]<=mid) cnt++;
	}
	for(int i=0;i<=q;i++){
		if(b[i]>0 && b[i]<=mid) cnt++;
		else if(b[i]<0 && abs(b[i])<=cnt) cnt--;
	}
	
	return cnt>0;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int l=0,r=1e9;
	cin>>n>>q;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<q;i++) cin>>b[i];
	while(r-l>1){
		int mid=(r+l)/2;
		if(solve(mid)) r=mid;
		else l=mid;
	}
	if(r!=1e9) cout<<r<<endl;
	else cout<<0<<endl;
	return 0;
}
