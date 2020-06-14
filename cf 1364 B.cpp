#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[100005];
bool flag[100005];
int dp[100005];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int c=0;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			flag[i]=1;
		}
		for(int i=1;i<n-1;i++){
			dp[i]=abs(arr[i+1]-arr[i])+abs(arr[i-1]-arr[i])-abs(arr[i-1]-arr[i+1]);
			if(dp[i]<=0) flag[i]=0;
		}
		cout<<arr[0]<<" ";
		for(int i=1;i<n-1;i++){
			if(flag[i]==0) continue ;
			else{
				c+=dp[i];
				cout<<arr[i]<<" ";
			}
		}
		cout<<arr[n-1]<<endl;
	}
	return 0;
}
