#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[8005];
int bct[8005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		memset(bct,0,sizeof(bct));
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			bct[arr[i]]++;
			arr[i]+=arr[i-1];
		}
		int ans=0,sum1=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				sum1=arr[j]-arr[i-1];
				if(sum1<=n && bct[sum1]){
					ans+=bct[sum1];
					bct[sum1]=0;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
