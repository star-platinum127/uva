#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[105];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		int cnt1=0,cnt2=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		if(arr[0]%2!=0) cnt1++;
		for(int i=1;i<n;i++){
			if(arr[i]%2!=i%2 && i%2==0) cnt1++;
			else if(arr[i]%2!=i%2 && i%2!=0) cnt2++;
		}
		if(cnt1!=cnt2) cout<<-1<<endl;
		else cout<<cnt1<<endl;
		
	}
	return 0;
}
