#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[10050];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<2*n;i++){
			cin>>arr[i];
			arr[i]%=2;
		}
		int cnt1=0,cnt2=0,cnt=0,pre1,pre2;
		for(int i=0;i<2*n;i++){
			if(arr[i]){
				cnt1++;
				if(cnt1%2==0){
					cnt++;
					cout<<pre1+1<<" "<<i+1<<endl;
				}
				pre1=i;
			}
			else{
				cnt2++;
				if(cnt2%2==0){
					cnt++;
					cout<<pre2+1<<" "<<i+1<<endl;
				}
				pre2=i;
			}
			if(cnt==n-1) break;
		}
	}
	return 0;
}
