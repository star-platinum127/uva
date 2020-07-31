#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[100005];
int sm[100005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		for(int i=0;i<=n;i++) sm[i]=0;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			sm[i]=sm[i-1]+arr[i];
		}
		int tmp=0;
		int ans=0;
		int mx=0;
		int cnt=0;
		for(int i=k;i>=0;i--){
			int pos=m-i*2+1;
			ans=0;
			if(pos<1) continue;
			for(int j=tmp+1;j<=pos;j++){
				mx=max(mx,arr[j]+arr[j+1]);
			}
			ans+=sm[pos];
			tmp=pos;
			ans+=mx*i;
			cnt=max(ans,cnt);
		}
		cout<<cnt<<endl;
	}
	return 0;
}
