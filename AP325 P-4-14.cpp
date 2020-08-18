#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
#define pii pair<int,int> 
#define F first
#define S second
vector<pii> v;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	v.clear();
	int tmp;
	for(int i=0;i<n;i++){
		cin>>tmp;
		v.pb({-tmp,0});
	}
	for(int i=0;i<n;i++){
		cin>>v[i].S;
	}
	sort(v.begin(),v.end());
	int maxi=-1,ans=0;
	for(int i=0;i<n;i++){
		if(v[i].S>maxi){
			ans++;
			maxi=v[i].S;
		}
	}
	cout<<ans<<endl;
	return 0;
}
