#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define mikumywaifu ios_base::sync_with_stdio(0)
#define mudrockmywaifu cin.tie(0)
#define pb push_back
#define ss second
#define ff first
#define mem(i,j) memset(i,j,sizeof(i))
#define pii pair<int,int>
#define pll pair<long,long>
#define lowbit(x) x&-x
const int INF =0x3F3F3F3F;
const ll LINF=4611686018426387903;
ll gcd(ll a,ll b){
    if(b==0) return a;
    a%=b;
    return gcd(b,a);
}
void debug(){
    cout<<"DEBUG :";
    cout<<"\n";
}
/*-----------------------------------------*/
const int N=10025;
ll dp[30][N][30];

signed main(){
    mikumywaifu;
    mudrockmywaifu;
	int n,m;
	int cnt=0;
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=26;i++) dp[0][i][i]=1;
		for(int i=1;i<27;i++){
			for(int j=1;j<=26;j++){
				for(int k=j+1;k<=26;k++){
					for(int w=0;w<360;w++){
						dp[i][w+k][k]+=dp[i-1][w][j];
					}
				}
			}
		}
	while(cin>>n>>m){
		cnt++;
		if(n==0&&m==0) break;
		/*for(int i=0;i<n;i++){
			for(int j=1;j<=m;j++){
				for(int k=1;k<=26;k++){
					cout<<dp[i][j][k]<<" ";
				}
				cout<<"\n";
			}
			cout<<"\n";
		}*/
		cout<<"Case "<<cnt<<": ";
		ll ans=0;
		if(n>26) cout<<0<<"\n";
		else{
			for(int i=1;i<=26;i++) ans+=dp[n-1][m][i];
			cout<<ans<<"\n";
		}

	}
}
