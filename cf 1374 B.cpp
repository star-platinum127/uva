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
		int n,m;
		cin>>n;
		m=n;
		int cnt1=0,cnt2=0;
		while(m%3==0){
			cnt1++;
			m/=3;
		}
		while(m%2==0){
			cnt2++;
			m/=2;
		}
		if(m>1){
			cout<<-1<<endl;
			continue;
		}
		else if(cnt1<cnt2){
			cout<<-1<<endl;
			continue;
		}
		else cout<<cnt1-cnt2+cnt1<<endl;
	}
	return 0;
}
