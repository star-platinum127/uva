#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
string s1;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int ans=1e9;
		cin>>s1;
		int le=s1.length();
		int cnt1=0,cnt0=0;
		for(int i=0;i<le;i++){
			if(s1[i]=='0') cnt0++;
			else cnt1++;
		}
		int cnt11=0,cnt00=0;
		ans=min(cnt0,cnt1);
		for(int i=0;i<le;i++){
			if(s1[i]=='0'){
				cnt00++;
				cnt0--;
			}
			else{
				cnt11++;
				cnt1--;
			}
			ans=min(ans,cnt11+cnt0);
			ans=min(ans,cnt00+cnt1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
