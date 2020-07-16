#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[305][305];
bool flag;
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int adj=4-(i==0)-(j==0)-(i==n-1)-(j==m-1);
			if(arr[i][j]>adj){
				cout<<"NO"<<endl;
				flag=1;
				return;;
			}else arr[i][j]=adj;
		}
	}
	cout<<"YES"<<"\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
		return;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
