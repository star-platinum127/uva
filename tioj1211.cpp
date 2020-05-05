#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int f[7]={0};
int n,m;
struct edge{
	int u;
	int v;
	int w;
};
struct edge e[1000];
void quicksort(int left,int right){
	int i,j;
	struct edge t;
	if(left>right) return;
	i=left;
	j=right;
	while(i!=j){
		while(e[j].w>=e[left].w && j-i) j--;
		while(e[i].w<=e[left].w && i<j) i++;
		if(j<i){
			t=e[i];
			e[i]=e[j];
			e[j]=t;
		}
	}
	t=e[left];
	e[left]=e[i];
	e[i]=t;
	quicksort(left,i-1);
	quicksort(i+1,right);
	return;
}
int getf(int v){
	if(f[v]==v) return v;
	else{
		f[v]=getf(f[v]);
		return f[v];
	}
}
int merge(int v,int u){
	int t1=getf(v);
	int t2=getf(u);
	if(t1!=t2){
		f[t2]=t1;
		return 1;
	}
	return 0;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>m){
		int sum1=0,cnt=0;
		if(n==0 && m==0) break;
		for(int i=0;i<m;i++){
			cin>>e[i].u>>e[i].v>>e[i].w;
		}		
		quicksort(0,m-1);
		for(int i=0;i<n;i++) f[i]=i;
		for(int i=0;i<m;i++){
			if(merge(e[i].u,e[i].v)){
				cnt++;
				sum1=sum1+e[i].w;
			}
			if(cnt==n-1) break;
		}
		if(cnt<n-1) cout<<-1<<endl;
		else cout<<sum1<<endl;
		
	}
		
	return 0;
}
