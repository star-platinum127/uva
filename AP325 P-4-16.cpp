#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define F first
#define S second
#define pii pair<int,int>
#define pb push_back
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	vector<pii> v;
	v.clear();
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.pb({x,0});
	}
	for(int i=0;i<n;i++) cin>>v[i].S;
	sort(v.begin(),v.end());
	ll cnt=0;
	ll ans=0;
	for(int i=0;i<n;i++){
		cnt+=v[i].F;
		ans+=v[i].S-cnt;
	} 
	cout<<ans<<endl;
	return 0;
}
