#include <iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
map<char,vector<pair<char, int> > >mp;
char start;
int dfs(int start,int total){
	if(!mp.count(start)) return total;
	int maxi=0;
	for(pair<char, int> p: mp[start]){
		maxi=max(dfs(p.first,total+p.second),maxi);
	}
	return maxi;
}
int main(int argc, char** argv) {
	int n;
	while(cin>>start>>n){
		mp.clear();
		char a,b;
		int m;
		for(int i=0;i<n;i++){
			cin>>a>>b>>m;
			mp[a].push_back({b,m});
		}
		cout<<dfs(start,0)<<endl;
	}
}
