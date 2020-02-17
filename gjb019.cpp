#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<int>a;
	int s,b;
	cin>>s;
	while(cin>>b){
		a.push_back(b);
	}
	sort(a.begin(),a.end());
	for(int i=a.size()-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	return 0;
}
