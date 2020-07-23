#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll arr[400005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		arr[n+i]=arr[i];
	}
	for(int i=2;i<2*n;i++){
		arr[i]+=arr[i-2];
	}
	ll maxi=-1e9;
	for(int i=n;i<2*n;i++){
		maxi=max(maxi,arr[i]-arr[i-n-1]);
	}
	cout<<maxi<<endl;
	return 0;
}
