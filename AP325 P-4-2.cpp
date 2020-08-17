#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
int arr[100005];
int b[100005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++) cin>>b[i];
	sort(arr,arr+n);
	sort(b,b+n);
	int pos=0;
	int ans=0;
	for(int i=0;i<n;i++){
		while(pos<n){
			if(b[pos]>arr[i]){
				pos++;
				ans++;
				break;
			}
			pos++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
