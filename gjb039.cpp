#include <iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int  sol[101];
int n;
void bt(int x,int sol[],int dy[],int md1[],int md2[]){
	if(x==n){
		for(int i=0;i<n;i++){
			cout<<sol[i]+1<<" ";
		}
		cout<<endl;
		return;
	}	
	for(int i=0;i<n;i++){
		if(dy[i] || md1[i-x+n] ||md2[i+x]) 
			continue;
		int dy2[n],md3[2*n],md4[2*n];
		memcpy(dy2,dy,n*sizeof(int));
		memcpy(md3,md1,2*n*sizeof(int));
		memcpy(md4,md2,2*n*sizeof(int));
		sol[x]=i;
		dy2[i]=1;
		md3[i-x+n]=1;
		md4[i+x]=1;
		bt(x+1,sol,dy2,md3,md4);
	}
}
int main(int argc, char** argv) {
	int dy[101],md1[101],md2[101];
	memset(dy,0,sizeof(dy));
	memset(md1,0,sizeof(md1));
	memset(md2,0,sizeof(md2));
	cin>>n;
	bt(0,sol,dy,md1,md2);
	return 0;
}
