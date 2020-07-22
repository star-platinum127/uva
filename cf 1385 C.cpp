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
		int cnt=n;
		for(int i=n-2;i>=0;i--){
			if(arr[i]>=arr[i+1]) cnt--;
			else break;
		}
		for(int i=cnt-2;i>=0;i--){
			if(arr[i]<=arr[i+1]) cnt--;
			else break;
		}
		cout<<cnt-1<<endl;
	}
	return 0;
}
