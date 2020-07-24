#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int a[200005];
int b[200005];
int n,m;
ll solve(){
	ll ans=0;
	for(int i=0;i<m;i++){
		ans+=a[i];
		b[i]--;
		if(b[i]==0) ans+=a[i];
	}
	int cnt=0;
	for(int i=0;i<m;i++){
		cnt+=b[i];
		if(b[i]==0) continue;
		ans+=a[m+cnt-1];
	}
	return ans;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		sort(a,a+n);
		reverse(a,a+n);
		sort(b,b+m);
		cout<<solve()<<endl;	
	}

	return 0;
}
