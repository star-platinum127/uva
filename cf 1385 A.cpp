#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a!=b && a!=c && c!=b) cout<<"NO"<<endl;
		else if((a==b && c>b) || (a==c && b>c) || (c==b && a>c)) cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			if(a==b && b==c) cout<<a<<" "<<b<<" "<<c;
			else{
				int maxi=max(a,b);
				maxi=max(maxi,c);
				int mini=min(a,b);
				mini=min(mini,c);
				cout<<maxi<<" "<<mini<<" "<<mini;
			}
		}
		cout<<endl;
	}
	return 0;
}
