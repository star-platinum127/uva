#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		int cnt=0;
		int ans=1e9;
		for(int i=0;i<=9;i++){
			for(int j=0;j<=9;j++){
				int nw=i;
				cnt=0;
				for(int k=0;k<s1.length();k++){
					if(s1[k]-'0'==nw){
						if(nw==i) nw=j;
						else if(nw==j) nw=i;
					}else cnt++;
				}
				if(nw==i) ans=min(ans,cnt);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
