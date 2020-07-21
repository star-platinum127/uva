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
		int cnt2=0;
		int cnt1=0;
		if(n==1) cout<<"FastestFinger"<<endl;
		else if(n==2){
			cout<<"Ashishgup"<<endl;
		}
		else if(n%2!=0) cout<<"Ashishgup"<<endl;
		else{
			for(int i=2;i*i<=n;i++){
				if(n%i==0){
					while(n%i==0){
						n/=i;
						if(i==2) cnt2++;
						else cnt1++;
					}
				}
			}
			if(n>1) cnt1++;
			if(cnt1==0) cout<<"FastestFinger"<<endl;
			else if(cnt2>=2) cout<<"Ashishgup"<<endl;
			else if(cnt2==1){
				if(cnt1==1) cout<<"FastestFinger"<<endl;
				else cout<<"Ashishgup"<<endl;
			}
		}
	}
	return 0;
}
