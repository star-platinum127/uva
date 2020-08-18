#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[50005];
int n,k;
bool solve(int pos){
	int el=-1;
	int nw=k;
	for(int i=0;i<n;i++){
		if(arr[i]<=el) continue;
		if(nw==0) return false;
		nw--;
		el=arr[i]+pos;
	}
	return true;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	int r=arr[n-1]-arr[0];
	int ans=0;
	for(int i=r/2;i>0;i>>=1){
		while(i+ans<r && !solve(ans+i)){
			ans+=i;
		}
	}
	cout<<ans+1<<endl;
	return 0;
}
