#include <iostream>
using namespace std;
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a=0,b=0,c=0,ans=0;
	string s1;
	cin>>s1;
	int len1=s1.length();
	for(int i=0;i<len1;i++){
		if(s1[i]=='A') a++;
		else if(s1[i]=='B') b++;
		else if(s1[i]=='C') c++;
		else if(s1[i]=='X'){
			if(a>=3 && b>=2 && c>=1) ans++;
			a=0;
			b=0;
			c=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}
