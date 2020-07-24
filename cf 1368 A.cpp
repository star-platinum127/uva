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
		int a,b,c;
		cin>>a>>b>>c;
		int sum1=a+b;
		int cnt=0;
		while(sum1<=c){
			if(a>b) swap(a,b);
			a+=b;
			cnt++;
			sum1+=b;
		}
		cout<<cnt+1<<endl;
	}
	return 0;
}
