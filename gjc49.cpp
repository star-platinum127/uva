#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int fnt[200005];
int bck[200005];
int ans[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++){
		fnt[i]=i;
		bck[i]=i;
	}
	for(int i=0;i<n-1;i++){
		cin>>a>>b;
		a--;b--;
		fnt[b]=a;
		bck[a]=b;
	}
	int buf,c1;
	for(int i=0;i<n;i++){
		if(fnt[i]==i){
			buf=i;
		}
		if(bck[i]==i) c1=i;
	}
	fnt[buf]=buf;
	bck[c1]=c1;
	ans[buf]=(buf+1)%997;
	buf=bck[buf];
	for(int i=0;i<n-1;i++){
		ans[buf]=((ans[fnt[buf]]*7)+(buf+1))%997;
		buf=bck[buf];
	}
	cout<<ans[c1]<<endl;
	return 0;
}
