#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	if(n<8 && n>=7 && m>=30) cout<<"YES";
	else if(n>=8 && n<12){
		if(m<10) cout<<"NO";
		else cout<<"YES";
	}
	else if(n==12){
		if(m<30) cout<<"NO";
		else cout<<"YES";
	}
	else if(n>12 && n<17){
		if(m<10) cout<<"NO";
		else cout<<"YES";
	}
	else cout<<"XXX";
	// your code goes here
	return 0;
}
