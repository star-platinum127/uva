#include <iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool used[101];
int sol[101];
vector<int> final1;
void bt(int n,int m){
	if(n==m+1){
		int sum1=0;
		for(int i=0;i<m;i++){
			int a1=10;
			for(int j=0;j<m-i-1;j++){
				a1=a1*10;
			}
			sum1+=sol[i]*a1/10;
		}
		final1.push_back(sum1);
		return;	
	}
	for(int j=0;j<m;j++){
		if(!used[j]){
			used[j]=true;
			sol[j]=n;
			bt(n+1,m);
			used[j]=false;
		}
	}
}
int main(int argc, char** argv) {
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		used[i]=false;
	}
	memset(sol,0,sizeof(sol));
	bt(1,m);
	sort(final1.begin(),final1.end());
	for(int i=0;i<final1.size();i++){
		cout<<final1[i]<<endl;
	}
	return 0;
}
