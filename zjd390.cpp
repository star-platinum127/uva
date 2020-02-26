#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int dp[20525];
	cin>>n;
	for(int k=0;k<n;k++){
		int m;
		cin>>m;
		int coin[m];
		int total=0;
		for(int i=0;i<m;i++){
			cin>>coin[i];
			total+=coin[i];
		} 
		memset(dp,0,sizeof(dp));
		int half=total/2;
		for(int i=0;i<m;i++){
			for(int j=half;j>=coin[i];j--){
				dp[j]=max(dp[j],dp[j-coin[i]]+coin[i]);
			}
		}
		cout<<total-dp[half]*2<<endl;
	} 
	
	return 0;
}
