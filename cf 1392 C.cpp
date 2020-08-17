#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[200005];
#define miku mywaifu
#define misaka mywaifu
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		ll ans=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=1;i<n;i++){
			ans+=max(0,arr[i-1]-arr[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
