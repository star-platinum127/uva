#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[1005][1005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int x,y;
		cin>>x>>y;
		string s1;
		for(int i=0;i<n;i++){
			cin>>s1;
			for(int j=0;j<m;j++){
				arr[i][j]=s1[j];
			}
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]=='.'){
					if(arr[i][j+1]=='.' && j!=m-1){
						if(2*x>y){
							ans+=y;
							arr[i][j+1]='#';
						}
						else ans+=x;
					}
					else{
						ans+=x;
					} 
				}
			}
		}
		cout<<ans<<endl;	
	}
	return 0;
}
