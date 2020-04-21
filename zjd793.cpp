#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int n,m;
int mp[1000][1000];
vector<pair<int,int> >v[1000000];
set<pair<int,int> >st;
int dis[1000000];
int exp[1000000]={0};
int f(int x,int y){
	return x*m+y;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int num;
	cin>>num;
	while(num--){
		cin>>n>>m;
		for(int i=0;i<n*m;i++){
			v[i].clear();
			exp[i]=0;
			dis[i]=1e9;
		}
		dis[0]=0;
		st.clear();
		pair<int,int>p;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>mp[i][j];
				if(i!=0){
					p.first=f(i,j);
					p.second=mp[i][j];
					v[f(i-1,j)].push_back(p);
					p.first=f(i-1,j);
					p.second=mp[i-1][j];
					v[f(i,j)].push_back(p);
				}
				if(j!=0){
					p.first=f(i,j);
					p.second=mp[i][j];
					v[f(i,j-1)].push_back(p);
					p.first=f(i,j-1);
					p.second=mp[i][j-1];
					v[f(i,j)].push_back(p);
				}
			}
		}
		pair<int,int>now;
		st.insert({0,0});
		while(!st.empty()){
			now=*st.begin();
			st.erase(now);
			if(exp[now.second]==0){
				exp[now.second]=1;
				for(pair<int,int>next:v[now.second]){
					if(next.second+dis[now.second]<dis[next.first]){
						st.erase({dis[next.first],next.first});
						dis[next.first]=next.second+dis[now.second];
						st.insert({dis[next.first],next.first});
					}
				}
			}
		}
		cout<<dis[n*m-1]+mp[0][0]<<endl;
	}
	return 0;
}
