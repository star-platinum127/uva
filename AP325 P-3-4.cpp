#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywiafu
#define misaka mywaifu
int arr[200005];
#define pb push_back
#define p push
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	stack<int> s;
	int maxi=-1e9;
	int tmp=0;
	ll ans=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	s.p(0);
	arr[0]=1e9;
	for(int i=1;i<=n;i++){
		while(arr[s.top()]<=arr[i]){
			s.pop();
		}
		ans+=i-s.top();
		s.p(i);
	}
	cout<<ans<<endl;
	return 0;
}
