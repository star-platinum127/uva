#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[305][305];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) arr[i][j]=0;
		if(m%n==0){
			cout<<0<<endl;
		}
		else{
			cout<<2<<endl;
		}
		int x=0,y=0;
		for(int i=0;i<m;i++){
			arr[x][y]=1;
			x++;y++;
			if(x==n) x=0;
			if(y==n){
				y=0;
				x++;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<arr[i][j];
			cout<<endl;
		}
	}
	return 0;
}
