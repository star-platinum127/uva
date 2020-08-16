#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[200005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m;
	int ans=0;
	ll cnt=0,sum1=0;
	cin>>n>>m;
	int tmp=0;
	for(int i=0;i<n;i++)cin>>arr[i];
	int l=0,r=0;
	for(int l=0,r=0;r<n;r++){
		sum1+=arr[r];
		while(sum1>m){
			sum1-=arr[l];
			l++;
		}
		if(sum1>tmp){
			cnt=1;
			tmp=sum1;
		} 
		else if(sum1==tmp){
			cnt++;
		}
	}
	cout<<tmp<<" "<<cnt<<endl;
	return 0;
}
