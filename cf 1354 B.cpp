#include <iostream>
#include<algorithm>
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
		int cnt[4]={0,0,0,0};
		int n=s1.length();
		int l=0;
		int ans=n+1;
		for(int i=0;i<n;i++){
			int buf=s1[i]-'0';
			cnt[buf]++;
			while(cnt[s1[l]-'0']>1){
				cnt[s1[l]-'0']--;
				l++;
			}
			if(cnt[1] && cnt[2] && cnt[3]){
				ans=min(ans,i-l+1);
			}
		}
		if(ans==n+1){
			ans=0;
		}
		cout<<ans<<endl;
	}
	return 0;
}
