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
		string s1;
		cin>>s1;
		ll ans=0;
		ll cnt=0;
		int min1=0;
		int len=s1.length();
		for(int i=0;i<len;i++){
			if(s1[i]=='-'){
				cnt--;
			}else cnt++;
			if(cnt<min1){
				min1=cnt;
				ans+=i+1;
			}
		}
		ans+=len;
		cout<<ans<<endl;
	}
	return 0;
}
