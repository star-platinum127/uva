#include <iostream>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long p[20];
bool ok=false;
void bt(int n,int l,long long sum,long long m,vector<long long>his){
	his.push_back(0);
	for(int i=l;i<n;i++){
		his[his.size()-1]=p[i];
		int tmp=sum;
		tmp+=p[i];
		if(tmp==m){
			for(int j=0;j<his.size();j++) cout<<his[j]<<" ";
			cout<<endl;
			ok=true;
			continue;
		}
		if(tmp>m || i>=n-1 || l>=n-1) continue;
		bt(n,i+1,tmp,m,his);
		
	}
}
int main(int argc, char** argv) {
	int n;
	long long m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>p[i];
	vector<long long>his;
	bt(n,0,0,m,his);
	if(ok==false) cout<<"NO";
	return 0;
}
