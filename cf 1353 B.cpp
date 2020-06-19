#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int a[35];
int b[35];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int sum1=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum1+=a[i];
		}
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<m;i++){
			if(a[i]<b[n-i-1]){
				sum1-=a[i];
				sum1+=b[n-i-1];
			} 
		}
		cout<<sum1<<endl;
	}
	return 0;
}
