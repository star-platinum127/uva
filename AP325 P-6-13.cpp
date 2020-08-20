#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define p push
#define F first
#define S second
#define pii pair<int,int>
int dp[200005];
int arr[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>arr[i];
	priority_queue<pii>q;
	dp[1]=arr[1];
	q.p({-dp[1],1});
	for(int i=2;i<=n;i++){
		if(i<=m+1) dp[i]=arr[i];
		else{
			while(q.top().S<i-(2*m)-1) q.pop();
			dp[i]=-q.top().F+arr[i];
		}
		q.p({-dp[i],i});
	}
	int mini=1e9;
	for(int i=n-m;i<=n;i++) mini=min(dp[i],mini);
	cout<<mini<<endl;
	return 0;
}
