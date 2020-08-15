#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[1000005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		char s1;
		cin>>n;
		memset(arr,0,sizeof(arr));
		for(int i=1;i<=n;i++){
			cin>>s1;
			arr[i]=arr[i-1]+s1-'0';
		}
		ll ans=0;
		map<int,int> bct;
		for(int i=0;i<=n;i++){
			int tmp=arr[i]-i;
			if(bct[tmp]) ans+=bct[tmp];
			bct[tmp]++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
