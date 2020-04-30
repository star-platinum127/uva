#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int p[10001];
int find(int a){
	if(p[a]==a) return a;
	else find(p[a]); 
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,q;
	int a,b;
	cin>>n>>m>>q;
	for(int i=0;i<n;i++) p[i]=i;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		a--;
		b--;
		p[find(a)]=find(b);
	}
	for(int i=0;i<q;i++){
		cin>>a>>b;
		if(find(a-1)==find(b-1)) cout<<":)"<<endl;
		else cout<<":("<<endl;
	}
	return 0;
}
