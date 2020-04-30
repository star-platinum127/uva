#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int p[1000000];
int find(int a){
	if(p[a]<0) return a;
	else{
		p[a]=find(p[a]);
		return p[a];
	} 
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int typ=0;
	int n,m;
	while(cin>>n>>m){
		if(m==0){
			cout<<1<<endl;
			continue;
		}
		int a,b,c;
		for(int i=0;i<n;i++) p[i]=-1;
		int mx=1;
		for(int i=0;i<m;i++){
			cin>>a>>b;
			a=find(a);
			b=find(b);
			if(b!=a){
				p[a]+=p[b];
				mx=max(mx,-p[a]);
				p[b]=a;
			}
		}
		cout<<mx<<endl;		
	}

	return 0;
}
