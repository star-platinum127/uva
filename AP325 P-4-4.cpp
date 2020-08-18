#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define F first
#define S second
#define pb push_back
#define pii pair<int,int>
vector<pii> v; 
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	v.clear();
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v.pb({y,x});
	}
	int len=v.size();
	sort(v.begin(),v.end());
	int ans=0,cnt=-1;
	for(int i=0;i<len;i++){
		if(v[i].S>cnt){
			cnt=v[i].F;
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
