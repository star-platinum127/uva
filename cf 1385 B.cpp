#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[110];
int bct[110];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<2*n;i++){
			bct[i+1]=0;
			cin>>arr[i];
		}
		for(int i=0;i<2*n;i++){
			if(bct[arr[i]]==0){
				cout<<arr[i]<<" ";
				bct[arr[i]]=1;
			}
		}
	}
	return 0;
}
