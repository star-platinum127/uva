#include <iostream>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
int a[100][100];
int c;
int x1[4]={1,-1,0,0};
int y1[4]={0,0,1,-1};
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int C,R;
		string s;
		cin>>C>>R;
		C--;
		R--;
		getline(cin,s);
		int l=0;
		while(getline(cin,s) && s.size()){
			for(int i=0;i<int(s.size());i++){
				c=int(s.size());
				a[l][i]=s[i];
			}
			l++;
		}
		ll ans=0;
		a[C][R]='*';
		queue<pii> q;
		q.push({C,R});
		while(!q.empty()){
			ans++;
			pii now=q.front();
			q.pop();
			for(int i=0;i<4;i++){
				int dx=now.F+x1[i];
				int dy=now.S+y1[i];
				if(a[dx][dy]==0 && dx<l && dy<c && dx>=0 && dy>=0){
					a[dx][dy]='*';
					q.push({dx,dy});
				}
			}
		}
		cout<<ans<<endl;
	} 
	return 0;
}
