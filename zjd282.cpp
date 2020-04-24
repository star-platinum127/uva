#include <iostream>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
map<int,string> mp;
int a[205][205];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,c=0;
	while(cin>>n>>m){
		if(n==0) break;
		 c++;
		 mp.clear();
		 for(int i=0;i<n+1;i++){
		 	for(int j=0;j<n+1;j++){
		 		if(i==j) a[i][j]=0;
		 		else a[i][j]=1e9;
			 }
		 }
		 string s;
		 for(int i=0;i<n;i++){
		 	cin>>s;
		 	mp[i+1]=s;
		 }
		 int x,y,z;
		 for(int i=0;i<m;i++){
		 	cin>>x>>y>>z;
		 	a[x][y]=z;
		 	a[y][x]=z;
		 }
		 for(int k=1;k<n+1;k++){
		 	for(int i=1;i<n+1;i++){
		 		for(int j=1;j<n+1;j++){
		 			if(a[i][j]>a[i][k]+a[k][j]) a[i][j]=a[i][k]+a[k][j];
				 }
			 }
		 }
		 int mn=1e9,ans;
		 int ins;
		 for(int i=1;i<n+1;i++){
		 	ans=0;
		 	for(int j=1;j<n+1;j++){
		 		ans+=a[i][j];
			 } 
			if(ans<mn){
				mn=ans;
				ins=i;	
			} 
		 }
		 cout<<"Case #"<<c<<" : "<<mp[ins]<<endl; 
	}
	return 0;
}
