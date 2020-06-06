#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[1005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int min1=1e9;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				min1=min(min1,abs(arr[i]-arr[j]));
			}
		}
		cout<<min1<<endl;
	}
	return 0;
}
