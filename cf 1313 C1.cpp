#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=500005;
ll a[N];
ll stk[N];
ll l[N];
ll r[N];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int k=0;
	for(int i=1;i<=n;i++){
		while(k!=0 && a[stk[k]]>a[i]) k--;
		int t;
		if(k==0) t=0;
		else t=stk[k];
		l[i]=l[t]+a[i]*(i-t);
		stk[++k]=i;
	}
	k=0;
	for(int i=n;i>=1;i--){
		while(k!=0 && a[stk[k]]>a[i]) k--;
		int t;
		if(k==0) t=n+1;
		else t=stk[k];
		r[i]=r[t]+a[i]*(t-i);
		stk[++k]=i;
	}
	ll max1=0;
	int p;
	for(int i=1;i<=n;i++){
		if(max1<l[i]+r[i]-a[i]){
			max1=l[i]+r[i]-a[i];
			p=i;
		} 
	}
	for(int i=p-1;i>=1;i--) a[i]=min(a[i],a[i+1]);
	for(int i=p+1;i<=n;i++) a[i]=min(a[i],a[i-1]);
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
