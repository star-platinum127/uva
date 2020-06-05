#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int mp[52][52];
bool flag;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		flag=0;
		cin>>n;
		string s1;
		for(int i=0;i<n;i++){
			cin>>s1;
			for(int j=0;j<n;j++){
				mp[i][j]=s1[j]-'0';
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(mp[i][j]==1){
					if(i<n-1 && j<n-1){
						if(mp[i+1][j]==0 && mp[i][j+1]==0){
							flag=1;
							break;
						}
					}
				}
			}
		}
		if(flag==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
