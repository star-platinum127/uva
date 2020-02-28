#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	string s1,s2;
	int c=0;
	ll dp[101][101];
	while(getline(cin,s1) && s1[0]!='#'){
		c++;
		getline(cin,s2);
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=s1.length();i++){
			for(int j=1;j<=s2.length();j++){
				if(s1[i-1]==s2[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<"Case #"<<c<<": you can visit at most "<<dp[s1.length()][s2.length()]<<" cities."<<endl;
	}
	return 0;
}
