#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int len1;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int cnt=0;
		string s1;
		cin>>s1;
		len1=s1.length();
		for(int i=0;i<len1;i++){
			if(s1[i]=='1') cnt++;
		}
		int n=len1-cnt;
		int min1=min(n,cnt);
		if(min1%2!=0) cout<<"DA"<<endl;
		else cout<<"NET"<<endl;
	}
	return 0;
}
