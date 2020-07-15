#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[1005];
int flag[1005];
bool si;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		si=0;
		int n;
		int mini=1e9;
		int buf=0;
		cin>>n;
		for(int i=0;i<n;i++){
			flag[i]=0;
			cin>>arr[i];
			mini=min(arr[i],mini);
			if(arr[i]>mini) flag[i]=1;
		}
		mini=1e9;
		for(int i=n-1;i>=0;i--){
			mini=min(arr[i],mini);
			if(arr[i]<=mini && flag[i]) flag[i]=0;
		}
		for(int i=0;i<n;i++){
			if(flag[i]==1){
				cout<<"YES"<<endl;
				si=1;
				for(int j=i-1;j>=0;j--) if(arr[j]<arr[i]){
					cout<<j+1<<" ";
					break;
				}
				cout<<i+1<<" ";
				for(int j=i+1;j<n;j++) if(arr[j]<arr[i]){
					cout<<j+1<<" ";
					break;
				}
				cout<<endl;
				break;
			}
		}
		if(si==0) cout<<"NO"<<endl;
	}
	return 0;
}
