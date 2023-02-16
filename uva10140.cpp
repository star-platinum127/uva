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
bool f[100025];
bool f2[1000025];
vector<ll> arr;
void build(){
	f[1]=1;
	for(ll i=2;i<100000;i++){
		if(!f[i]){
			arr.pb(i);
			for(int j=i+i;j<100000;j+=i){
				f[j]=1;
			}
		}
	}
}

signed main(){
    mikumywaifu;
    mudrockmywaifu;
	ll l,r;
	memset(f,0,sizeof(f));
	build();
	while(cin>>l>>r){
		memset(f2,0,sizeof(f2));
		if(1-l>=0) f2[1-l]=1;
		vector<ll>b;
		b.clear();
		for(ll i=0;i<arr.size();i++){
			ll pn=arr[i];
			ll s=l/pn+(l%pn!=0);
			if(s<=1) s=2;
			for(ll j=s*pn;j<=r;j+=pn){
				f2[j-l]=1;
			}
		}
		for(ll i=l;i<=r;i++){
			if(!f2[i-l]) b.pb(i);
		}
		ll mx=-1e18,mn=1e18;
		ll ouo,owo,a1,a2;
		for(int i=1;i<b.size();i++){
			if(b[i]-b[i-1]>mx) mx=b[i]-b[i-1],a1=b[i-1],a2=b[i];
			if(b[i]-b[i-1]<mn) mn=b[i]-b[i-1],ouo=b[i-1],owo=b[i];
		}
		if(b.size()<2) cout<<"There are no adjacent primes.\n";
		else cout<<ouo<<","<<owo<<" are closest, "<<a1<<","<<a2<<" are most distant.\n";
	}
}
