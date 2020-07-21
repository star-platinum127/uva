#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[10000];
int b[10000];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int cnt=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int pre;
		for(int i=0;i<m;i++) cin>>b[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i]==b[j]){
					cnt++;
					pre=arr[i];
				}
			}
		}
		if(cnt){
			cout<<"YES"<<endl;
			cout<<1<<" "<<pre<<endl;
			
		} 
		else cout<<"NO"<<endl;
	}
	return 0;
}
