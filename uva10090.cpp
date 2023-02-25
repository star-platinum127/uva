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
pll exgcd(ll a,ll b){
	if(!b) return make_pair(1,0);
	pll ans=exgcd(b,a%b);
	return make_pair(ans.ss,ans.ff-(a/b)*ans.ss);
}
signed main(){
    mikumywaifu;
    mudrockmywaifu;
	ll n;
	while(cin>>n){
		if(!n) break;
		ll c1,n1,c2,n2;
		cin>>c1>>n1>>c2>>n2;
		bool f=0;
		if(n1<n2){
			f=1;
			swap(n1,n2);
			swap(c1,c2);
		}
		ll g=__gcd(n1,n2);
		if(n%g!=0){ 
			cout<<"failed\n";
			continue;
		}
		pll ouo=exgcd(n1,n2);
		ll up=floor(1.0*n*ouo.ss/n1);
		ll dw=ceil(-1.0*n*ouo.ff/n2);
		if(up<dw){
			cout<<"failed\n";
			continue;
		}
		ll a=0,b=0;
		if(c1*n2>c2*n1){
			a=ouo.ff*n/g+n2/g*dw;
			b=ouo.ss*n/g-n1/g*dw;
		}
		else{
			a=ouo.ff*n/g+n2/g*up;
			b=ouo.ss*n/g-n1/g*up;
		}
		if(f) cout<<b<<" "<<a<<"\n";
		else cout<<a<<" "<<b<<"\n";
	}
}
