#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int cnt=0;
		int ans=0;
		for(int i=0;i<n;i++){
			cnt++;
			if(cnt==arr[i]){
				ans++;
				cnt=0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
