#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int a[200005];
int b[200005];
int c[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,h;
	cin>>t>>h;
	int cnt=0,c1=0,c2=0;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		if(m&&k) a[cnt++]=n;
		else if(!m && k) b[c2++]=n;
		else if(!k && m) c[c1++]=n;
	}
	sort(b,b+c2);
	sort(c,c+c1);
	for(int i=0;i<min(c1,c2);i++){
		a[cnt++]=b[i]+c[i];
	}
	sort(a,a+cnt);
	int ans=0;
	if(cnt<h) cout<<-1<<endl;
	else{
		for(int i=0;i<h;i++) ans+=a[i];
		cout<<ans<<endl; 
	}
	return 0;
}
