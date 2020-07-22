#include <bits/stdc++.h>
using namespace std;
#define pb push_back
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	vector<int> v;
	while(t--){
		int n;
		string s1,s2;
		v.clear();
		cin>>n;
		int pos1=0;
		int pos2=n-1;
		cin>>s1;
		cin>>s2;
		bool reverse=0;
		for(int i=n-1;i>=0;i--){
			if(!reverse){
				if(s1[pos1]==s2[i]){
					v.pb(1);
				}
				pos1++;
				v.pb(i+1);
				reverse=1;
			}else{
				if(s1[pos2]!=s2[i]){
					v.pb(1);
				}
				pos2--;
				v.pb(i+1);
				reverse=0;
			}
		}
		int len=v.size();
		cout<<len<<" ";
		for(int i=0;i<len;i++) cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
