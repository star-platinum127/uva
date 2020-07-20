#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt=0;
		int ans=0;
		string s1;
		cin>>s1;
		for(int i=0;i<n;i++){
			if(s1[i]=='(') cnt++;
			else if(s1[i]==')') cnt--;
			if(cnt<0){
				cnt=0;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
