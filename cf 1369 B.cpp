#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt=0;
		string arr;
		cin>>arr;
		int buf=1e9;
		int buf2=-1e9;
		for(int i=0;i<n;i++){
			if(arr[i]=='1') buf=min(buf,i);
			else buf2=max(buf2,i-1);
		}
		for(int i=0;i<n;i++){
			if(i<=buf2 && i>=buf) continue;
			cout<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}
