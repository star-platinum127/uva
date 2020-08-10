#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s1;
		int cnt=0;
		for(int i=0;i<n-1;i++){
			cin>>s1;
			if(s1[m-1]=='R') cnt++;
		}
		cin>>s1;
		for(int i=0;i<m;i++){
			if(s1[i]=='D') cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
