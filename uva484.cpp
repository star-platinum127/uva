#include <iostream>
#include<vector>
#include<algorithm>
using namespace std; 
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<ll> v,all;
int main(int argc, char** argv) {
	ll a;
	while(cin>>a){
		v.push_back(a);
	}
	for(int i=0;i<v.size();i++){
		if(count(all.begin(),all.end(),v[i])==0){
			cout<<v[i]<<" "<<count(v.begin(),v.end(),v[i])<<endl;
			all.push_back(v[i]);
		}
	}
	return 0;
}
