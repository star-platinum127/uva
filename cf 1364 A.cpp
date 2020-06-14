#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[100005];
bool flag;
int dp[100005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		flag=0;
		int max1=-1e9;
		int n,m;
		int sum1=0,sum2=0;
		int c=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum1+=arr[i];
			dp[i]=1;
		}
		c=n;
		sum2=sum1;
		int i=0;
		while(1){
			if(i==n){
				flag=1;
				break;
			}
			if(sum1%m!=0 || sum2%m!=0){
				cout<<c<<endl;
				break;
			}
			else{
				sum1-=arr[n-i-1];
				sum2-=arr[i];
				c--;
				i++;
			} 
		}
		if(flag==1) cout<<-1<<endl;
	}
	return 0;
}
