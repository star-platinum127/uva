#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define pb push_back
int arr[4005];
int dp[4005];
int ans[4005];
vector<int> v[2005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		v.clear();
		bool flag=0;
		int maxi=-1e9;
		for(int i=0;i<2*n;i++){
			cin>>arr[i];
			if(arr[i]>maxi){
				maxi=arr[i];
				v.pb(i+1);
			}
		}
		int cnt=0;
		v.pb(2*n+1);
		for(int i=1;i<v.size();i++) ans[cnt++]=v[i]-v[i-1];
		for(int i=1;i<=n;i++) dp[i]=0;
		for(int i=0;i<cnt;i++){
			for(int j=n;j>=ans[i];j--){
				dp[j]=max(dp[j],dp[j-ans[i]]+ans[i]);
			}
		}
		if(dp[n]==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
	return 0;
}
