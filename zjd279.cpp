#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
vector<int> v[105];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int num,n,m;
	while(cin>>num){
		if(num==0) break;
		for(int i=0;i<num;i++) v[i].clear();
		while(cin>>n){
			if(n==0) break;
			n--;
			while(cin>>m){
				if(m==0) break;
				m--;
				v[n].push_back(m);
			}
		}
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>m;
			m--;
			int a[num];
			for(int i=0;i<num;i++) a[i]=0;
			int cnt=num;
			queue<int> q;
			q.push(m);
			while(!q.empty()){
				m=q.front();
				q.pop();
				for(int i:v[m]){
					if(a[i]==0){
						a[i]=1;
						cnt--;
						q.push(i);
					}
				}
			}
			cout<<cnt;
			for(int i=0;i<num;i++){
				if(a[i]==0) cout<<" "<<i+1;
			}
			cout<<endl;
		}
	}
	return 0;
}
