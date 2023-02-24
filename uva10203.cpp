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

signed main(){
    mikumywaifu;
    mudrockmywaifu;
	int t;
	stringstream s2;
	int f=0;
	while(cin>>t){
		while(t--){
			if(f) cout<<"\n";
			f=1;
			string s;
			s2.clear();
			s2.str("");
			pair<double,double> st;
			cin>>st.ff>>st.ss;
			cin.get();
			double dis=0;
			int cnt=0;
			while(getline(cin,s)){
				if(s=="" ||s[0]==EOF){
					break;
				}
				s2.clear();
				s2.str("");
				s2<<s;
				pair<int,int> r1,r2;
				s2>>r1.ff;
				s2>>r1.ss;
				s2>>r2.ff;
				s2>>r2.ss;
				//cout<<r1.ff<<r1.ss<<r2.ff<<r2.ss<<"\n";
				dis+=sqrt(((r1.ff-r2.ff)*(r1.ff-r2.ff)+(r1.ss-r2.ss)*(r1.ss-r2.ss)));
			}
			dis/=1000;
			dis*=2;
			double t2=dis/20;
			t2*=60;
			int tt=(int)round(t2);
			cout<<tt/60<<":";
			if(tt%60>=10)cout<<tt%60<<"\n";
			else cout<<0<<tt%60<<"\n";
		}
	}
}
