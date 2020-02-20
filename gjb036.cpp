#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,c;
	cin>>n;
	vector<ll>su;
	for(int i=0;i<n;i++){
		cin>>c;
		su.push_back(c);
	}
	sort(su.begin(),su.end(),greater<int>());
	long long int m=0;
	for(int i=0;n>1;i++){
		su[n-2]+=su[n-1];
		m+=su[n-2];
		su.pop_back();
		sort(su.begin(),su.end(),greater<int>());
		n--;
	}
	cout<<m;
	return 0;
}
