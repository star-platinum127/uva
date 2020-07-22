#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int cnt=0;
		while(arr[cnt]==1 && cnt<n){
			cnt++;
		}
		if(cnt==n) cnt--;
		if(!cnt){
			cout<<"First"<<endl;
			continue;
		}
		if(cnt%2==0) cout<<"First"<<endl;
		else cout<<"Second"<<endl;
	}
	return 0;
}
