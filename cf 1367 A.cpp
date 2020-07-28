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
		cout<<s1[0];
		for(int i=1;i<s1.length();i+=2){
			cout<<s1[i];
		}
		cout<<endl;
		
	}
	return 0;
}
