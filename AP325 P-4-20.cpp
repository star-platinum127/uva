#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define pii pair<int,int>
#define S second
#define F first
#define pb push_back
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	vector<pii> v;
	v.clear();
	cin>>t;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<t;i++){
		int x,y;
		cin>>x>>y;
		v.pb({x,y});
	}
	sort(v.begin(),v.end());
	ll pos=n,ans=0,tmp=0;
	for(int i=0;i<t;i++){
		if(pos<v[tmp].F || i<=tmp) continue;
		if(pos>=m) break;
		while(tmp!=t-1 && pos>=v[tmp].F){
			tmp++;
		}
		tmp--;
		pos=v[tmp].S;
		ans++;
	}
	if(pos<m) cout<<-1<<endl;
	else cout<<ans<<endl;
	return 0;
}
