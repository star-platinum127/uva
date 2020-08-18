#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define N 100005
int arr[N];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	for(int i=1;i<n;i++){
		arr[i]+=arr[i-1];
	}
	ll ans=0;
	for(int i=0;i<n;i++) ans+=arr[i];
	cout<<ans<<endl;
	return 0;
}
