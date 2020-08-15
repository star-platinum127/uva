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
		v.clear();
		string s1;
		cin>>s1;
		bool flag=0;
		int cnt=0;
		int len=s1.length();
		for(int i=0;i<len;i++){
			if(s1[i]=='1'){
				flag=1;
				cnt++;
			}
			else{
				if(flag==1) v.pb(cnt);
				cnt=0;
				flag=0;
			}
		}
		if(flag==1) v.pb(cnt);
		int s=v.size();
		sort(v.begin(),v.end());
		int ans=0;
		for(int i=s-1;i>=0;i-=2){
			ans+=v[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
