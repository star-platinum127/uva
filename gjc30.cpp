#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<s.length()-1;i++){
		if(s[i]=='A' && s[i+1]=='C') cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
