#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll arr[50005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		if(arr[0]+arr[1]<=arr[n-1]) cout<<1<<" "<<2<<" "<<n<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
