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
ll cal(vector<ll> cc){
	ll tmp=0;
	int ff=0;
	for(auto e:cc){
		if(e=='-'){
			ff=1;
			continue;
		}
		tmp*=10;
		tmp+=e;
	}
	if(ff) return -tmp;
	return tmp;
}
signed main(){
    mikumywaifu;
    mudrockmywaifu;
	string s;

	while(cin>>s){
		ll tar;
		cin>>tar;
		vector<ll> a;
		vector<char> b;
		a.clear();
		b.clear();
		int l=s.length();
		bool f=0;
		vector<ll> c;
		for(auto e:s){
			if((e>='0'&&e<='9')||e=='-'){
				if(e!='-')c.pb(e-'0');
				else c.pb('-');
				f=1;
			}
			else if((e==']'||e=='[')&&f){
				a.pb(cal(c));
				c.clear();
				f=0;
			}
			else if(e=='*' ||e=='+'){
				if(f){
					a.pb(cal(c));
					c.clear();
					f=0;
				}
				b.pb(e);
			}
		}
		
		//for(auto e:a) cout<<e<<" ";	
		vector<ll>pre(tar+1);
		vector<ll> ans(tar+1);
		bool flag=0;
		ll x=a[a.size()-1];
		a.pop_back();
		ll y=a[a.size()-1];
		a.pop_back();
		ll z=b[b.size()-1];
		b.pop_back();
		if(z=='+'){
			for(int i=1;i<=tar;i++){
				if(i==1) ans[i]=y;
				else ans[i]=ans[i-1]+x;
			}
		}
		else{
			for(int i=1;i<=tar;i++){
				if(i==1) ans[i]=y*x;
				else ans[i]=ans[i-1]*x;
			}
		}
		//for(int i=1;i<=11;i++) cout<<ans[i]<<" ";
		while(!a.empty()){
			pre.clear();
			for(int i=1;i<=tar;i++) pre[i]=ans[i];
			ans.clear();
			//for(int i=1;i<=11;i++) cout<<pre[i]<<" ";
			//cout<<"\n";
			z=b[b.size()-1];
			b.pop_back();
			x=a[a.size()-1];
			a.pop_back();
			if(z=='+'){
				for(int i=1;i<=tar;i++){
					if(i==1) ans[i]=x;
					else ans[i]=ans[i-1]+pre[i-1];
					//cout<<pre[i-1]<<" ";
				}
				//cout<<"\n";
			}
			else{
				for(int i=1;i<=tar;i++){
					if(i==1) ans[i]=x*pre[1];
					else ans[i]=ans[i-1]*pre[i];
				}
			}
			//for(int i=1;i<=11;i++) cout<<ans[i]<<" ";
			//cout<<"\n";
		}
		
		for(int i=1;i<tar;i++) cout<<ans[i]<<" ";
		cout<<ans[tar];
		cout<<"\n";
	}
}
