#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[1005];
bool flag;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		flag=0;
		cin>>n>>k;
		if(n<k){
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=0;i<k;i++) arr[i]=n/k;
		if((n-n/k*k)%2!=0){
			if(k%2==0){
				cout<<"NO"<<endl;
				continue;
			}else{
				for(int i=0;i<k;i++){
					arr[i]--;
					if(arr[i]==0) flag=1;
				}
				arr[0]+=k+(n-n/k*k);
			}
		}else{
			arr[0]+=(n-n/k*k);
		}
		if(flag==1){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		for(int i=0;i<k;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
