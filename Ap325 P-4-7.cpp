#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
priority_queue<ll> q;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		ll tmp;
		cin>>tmp;
		q.push(-tmp);
	}
	ll ans=0;
	ll pos=0;
	for(int i=0;i<n-1;i++){
		pos=0;
		pos+=q.top();
		q.pop();
		pos+=q.top();
		q.pop();
		q.push(pos);
		ans-=pos;
	}
	cout<<ans<<endl;
	return 0;
}
