#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int cnt=0;
	int max1=-1e9;
	string s1;
	cin>>s1;
	int len=s1.length();
	for(int i=0;i<len;i++){
		if(s1[i]=='F') cnt++;
		else cnt=0;
		max1=max(max1,cnt);
	}
	cout<<max1<<endl;
	return 0;
}
