#include <iostream>
#include<map>
#include<cstring>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
map<string,int> mp;
int idx;
int cnt=0;
int a[205][205];
int getid(string s){
	if(mp.count(s)) return mp[s];
	else{
		mp[s]=idx;
		idx++;
		return mp[s];
	}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,temp;
	int n1,n2;
	string s1,s2;
	while(cin>>n>>m){
		idx=0;
		if(n==0) break;
		cnt++;
		mp.clear();
		memset(a,-1,sizeof(a));
		for(int i=0;i<m;i++){
			cin>>s1>>s2>>temp;
			n1=getid(s1);
			n2=getid(s2);
			a[n1][n2]=temp;
			a[n2][n1]=temp;
		}
		cin>>s1>>s2;
		n1=getid(s1);
		n2=getid(s2);
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					a[i][j]=max(a[i][j],min(a[j][k],a[k][i]));
					a[j][i]=a[i][j];
				}
			}
		}
		cout<<"Scenario #"<<cnt<<endl<<a[n1][n2]<<" tons"<<endl;
	}
	
	return 0;
}
