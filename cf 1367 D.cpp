#include <bits/stdc++.h>
using namespace std;
int arr[105],vis[105];
int num[30];
char ans[105];
#define pb push_back
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
vector<int> v[105];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<105;i++) v[i].clear();
		string s1;
		int n;
		cin>>s1;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			vis[i]=0;
		}
		for(int i=0;i<26;i++) num[i]=0;
		for(int i=0;i<s1.length();i++) num[s1[i]-'a']++;
		int dx=0;
		while(1){
			dx++;
			bool flag=0;
			for(int i=0;i<n;i++){
				if(arr[i]==0 && vis[i]==0) flag=1,vis[i]=dx;
			}
			if(!flag) break;
			for(int i=0;i<n;i++){
				if(arr[i]==0 && vis[i]==dx){
					v[dx].pb(i);
					for(int j=0;j<n;j++){
						if(!vis[j])arr[j]-=abs(j-i);
					}
				}
			}
		}
		for(int i=1,j=25;i<=dx;i++,j--){
			int buf=v[i].size();
			while(num[j]<buf) j--;
			for(int k=0;k<buf;k++){
				ans[v[i][k]]='a'+j;
			}
		}
		for(int i=0;i<n;i++) cout<<ans[i];
		cout<<endl;
	}
	return 0;
}
