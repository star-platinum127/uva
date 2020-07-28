#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define pb push_back
vector<int> v;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		string s1;
		cin>>n>>k;
		cin>>s1;
		int ans=0;
		int cnt=k;
		for(int i=0;i<n;i++){
			if(s1[i]=='0') cnt++;
			else{
				cnt-=k;
				cnt/=(k+1);
				ans+=cnt;
				cnt=0;
			}
		}
		cout<<ans+cnt/(k+1)<<endl;
	}
	return 0;
}
