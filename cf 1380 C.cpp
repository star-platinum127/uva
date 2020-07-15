#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[100005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int cnt=0;
		int ans=0;
		int buf=1;
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		for(int i=n-1;i>=0;i--){
			cnt=arr[i]*buf;
			if(cnt>=m){
				ans++;
				buf=1;
				cnt=0;
				continue;
			}
			buf++;
		}
		cout<<ans<<endl;
	} 
	return 0;
}
