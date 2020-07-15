#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[105];
bool flag;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		flag=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(i%2==0) flag=1;
			else flag=0;
			if(flag) if(arr[i]>0) cout<<arr[i]<<" "; else cout<<-arr[i]<<" ";
			else{
				if(arr[i]<0) cout<<arr[i]<<" ";
				else cout<<-arr[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
