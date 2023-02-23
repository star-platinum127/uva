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
const int N=100025;
bool p[N]={0};
void is_prime(){
	for(int i=2;i<N;i++){
		if(!p[i]){
			for(int j=i+i;j<N;j+=i){
				p[j]=1;
			}
		}
	}
}
ll cal(ll c){
	ll tmp=0;
	while(c){
		tmp+=(c%10);
		c/=10;
	}
	return tmp;
}
bool che(ll n){
	bool flag=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag) return 0;
	else return 1;
}
signed main(){
    mikumywaifu;
    mudrockmywaifu;
	int t;
	is_prime();
	while(cin>>t){
	
	while(t--){
		ll n;
		cin>>n;
		for(ll i=n+1;i;i++){
			if(che(i)) continue;
			bool f=0;
			ll cnt=0;
			ll tmp=i;
			for(int j=2;j<=sqrt(i);j++){
				if(tmp%j==0){
					while(tmp%j==0){
						//if(i==456494) cout<<j<<" ";
						tmp/=j;
						if(p[j]==0){
							cnt+=cal(j);
						}
					}
				}
			}
			//cout<<"\n";
			if(tmp&&tmp!=1) cnt+=cal(tmp);
			//if(i==456494) cout<<cnt<<"\n";
			if(cnt==cal(i)){
				cout<<i<<"\n";
				break;
			}
			
		}
	}
	}
}
