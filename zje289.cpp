#include <iostream>
#include<map>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
map < string, int > mp;
typedef long long ll;
string a[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	while(cin>>m>>n){
		mp.clear();
		int cnt=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++){
			if(!mp[a[i]]){
				cnt++;
			}	
			mp[a[i]]++;
		}
		ll ans=0;
		if(cnt==m) ans++;
		for(int i=m;i<n;i++){
			mp[a[i-m]]--;
			if(mp[a[i-m]]==0) cnt--;
			if(mp[a[i]]==0) cnt++;
			mp[a[i]]++;
			ans+=(cnt==m);
		}
		cout<<ans<<endl;
	}
	return 0;
}
