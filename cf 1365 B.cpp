#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[505];
int b[505];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		bool sorted=1;
		bool val1=0;
		bool val2=0;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(i>=1) if(arr[i]<arr[i-1]) sorted=0;
		} 
		for(int i=0;i<n;i++){
			cin>>b[i];
			if(b[i]) val1=1;
			else val2=1;
		}
		if(val2 && val1) cout<<"YES"<<endl;
		else if(sorted) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
