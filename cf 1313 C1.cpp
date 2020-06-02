#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll a[500005];
ll stk[500005];
ll l[500005];
ll r[500005];
int main(int argc, char** argv) {
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
