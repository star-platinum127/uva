#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll k4[5];
int total;
ll ans;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int k;
		int n;
		cin>>n>>k;
		k4[0]=1;
		total=1;
		for(int i=1;i<4;i++){
			k4[i]=k*k4[i-1];
			total+=k4[i];
		}
		ans=n/total;
		for(int i=0;i<4;i++){
			cout<<ans*k4[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
