#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[200005];
int b[200005];
int id[200005];
int dp[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin>>n){
		for(int i=1;i<=n;i++){
			dp[i]=0;
			cin>>arr[i];
			id[arr[i]]=i;
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
			if(id[b[i]]-i>0) dp[id[b[i]]-i]++;
			else dp[id[b[i]]-i+n]++;
			
		}
		int max1=-1e9;
		for(int i=1;i<=n;i++){
			max1=max(dp[i],max1);
		}
		cout<<max1<<endl;
	}
	return 0;
}
