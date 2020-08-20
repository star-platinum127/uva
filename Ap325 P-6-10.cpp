#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu 
int arr[105];
int dp[200005];
bool f[200005];
bool flag;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	int sum1=0;
	cin>>n>>m>>k;
	memset(dp,-1,sizeof(dp));
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		sum1+=arr[i];
	}
	flag=0;
	int tmp=k-m+sum1;
	int maxi=1e9;
	dp[0]=1;
	int pre=-1;
	for(int i=1;i<=n;i++){
		for(int j=sum1;j>=0;j--){
			if(dp[j]!=-1){
				dp[j+arr[i]]=1;
				f[j+arr[i]]=1;
			}
		}
	}
	for(int i=tmp;i<=200005;i++){
		if(dp[i]==1){
			flag=1;
			cout<<i<<endl;
			break;
		}
	}
	if(!flag) cout<<0<<endl;
	return 0;
}
