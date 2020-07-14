#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int n;
int m;
int arr[100005];
bool jug(int a){
	int now=0;
	for(int i=1;i<=n;i++){
		while(now<=n && arr[now]<=a){
			now++;
		}
		if((now-i)%m==0) return 1;
		a++;
	}
	return 0;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>arr[i];
	int maxi=-1e9;
	sort(arr+1,arr+n+1);
	for(int i=1;i<=n;i++) maxi=max(maxi,arr[i]-i+1);
	int l=maxi-1;
	int r=1000000000;
	while(l+1<r){
		int mid=(r+l)/2;
		if(jug(mid)) r=mid;
		else l=mid;
	}
	cout<<l-maxi+1<<endl;
	for(int i=maxi;i<=l;i++) cout<<i+1<<" ";
	return 0;
}
