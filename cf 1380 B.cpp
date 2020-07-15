#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
char ch;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		int a=0,b=0,c=0;
		int n=s1.length();
		for(int i=0;i<n;i++){
			if(s1[i]=='R') a++;
			else if(s1[i]=='S') b++;
			else c++;
		}
		int maxi=max(a,b);
		maxi=max(maxi,c);
		if(maxi==a) ch='P';
		else if(maxi==b) ch='R';
		else ch='S';
		for(int i=0;i<n;i++) cout<<ch;
		cout<<endl;
	}
	return 0;
}
