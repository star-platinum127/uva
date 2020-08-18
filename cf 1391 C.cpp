#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define mod 1000000007
int arr[1000005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	ll cnt=2;
	ll ans=2;
	for(int i=3;i<=n;i++){
		cnt*=i;
		cnt%=mod;
		ans*=2;
		ans%=mod;
		arr[i]=(cnt-ans+mod)%mod;
	}
	cout<<arr[n]<<endl;
	return 0;
}
