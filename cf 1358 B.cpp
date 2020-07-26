#include <bits/stdc++.h>
using namespace std;
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
		int cnt=0;
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			if(arr[i]<=i+1) cnt=i+1;
		}
		cout<<cnt+1<<endl;
	}
	return 0;
}
