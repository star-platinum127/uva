#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
vector<int> v;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		v.clear();
		cin>>n;
		int cnt=-1;
		while(n!=0){
			int buf=n%10;
			n/=10;
			cnt++;
			if(buf==0) continue;
			v.pb(buf*pow(10,cnt));
		}
		
		int len=v.size();
		cout<<len<<endl;
		for(int i=0;i<len;i++) cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
