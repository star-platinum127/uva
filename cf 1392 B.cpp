#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		int maxi=-1e9;
		int mini=1e9;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			mini=min(mini,arr[i]);
			maxi=max(maxi,arr[i]);
		}
		
		if(k%2==0){
			for(int i=0;i<n;i++) cout<<arr[i]-mini<<" ";
		}
		else for(int i=0;i<n;i++) cout<<maxi-arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
