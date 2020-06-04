#include <iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
vector<int>prt[200005];
queue<int>son[200005];
int final[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	int u,v;
	int deep[200005];
	int so2[200005];
	cin>>n>>k;
	for(int i=1;i<=n-1;i++){
		prt[i].clear();
		cin>>u>>v;
		prt[max(u,v)].push_back(min(u,v));
		son[min(u,v)].push(max(u,v));
		deep[i]=0;
		so2[i]=0;
	}
	so2[n]=0;
	deep[n-1]=0;
	deep[1]=0;
	for(int i=2;i<=n;i++){
		deep[i]=deep[prt[i].front()]+1;
	}
	for(int i=n;i>=1;i--){
		while(!son[i].empty()){
			int t=son[i].front();
			son[i].pop();
			so2[i]+=so2[t]+1;
		}
	}
	ll sum1=0;
	for(int i=1;i<=n;i++){
		final[i]=deep[i]-so2[i];
	}
	final[0]=-1e9;
	sort(final,final+n+1);
	for(int i=n;i>=n-k;i--){
		sum1+=final[i];
	}
	cout<<sum1;
	return 0;
}
