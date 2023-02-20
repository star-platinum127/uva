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

vector<int> kmp(string s2){
	int n=s2.length();
	vector<int>dp(n+1);
	for(int i=1,j=0;i<n;i++){
		while(j&&s2[i]!=s2[j]){
			j=dp[j-1];
		}
		if(s2[i]==s2[j]) j++;
		dp[i]=j;
	}
	return dp;
}
signed main(){
    mikumywaifu;
    mudrockmywaifu;
	string s;
	while(cin>>s){
		string s3;
		reverse(s.begin(),s.end());
		s3=s;
		reverse(s.begin(),s.end());
		vector<int> w=kmp(s3);
		int j=0;
		for(int i=0;i<s.length();i++){
			while(j&&s[i]!=s3[j]){
				j=w[j-1];
			}
			if(s[i]==s3[j]) j++;
		}
		cout<<s;
		for(int i=j;i<s.length();i++) cout<<s3[i];
		cout<<"\n";
	}
}
