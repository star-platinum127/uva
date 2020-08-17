#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
#define miku mywaifu
#define misaka mywaifu
#define pb push_back
#define popb pop_back
#define pf pop_front
int arr[200005];
deque<int> qmax,qmin;
void pmax(int i){
	while( !qmax.empty()&&arr[qmax.back()]<=arr[i] ) qmax.popb();
	qmax.pb(i);
}
void pmin(int i){
	while( !qmin.empty()&& arr[qmin.back()]>=arr[i]) qmin.popb();
	qmin.pb(i);
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	qmax.clear();
	qmin.clear();
	for(int i=0;i<n;i++) cin>>arr[i];
	qmax.pb(0);
	qmax.pb(0);
	ll tmp=0;
	ll maxi=-1e9;
	for(int i=1;i<n;i++){
		if(qmax.front()<=i-m){
			qmax.pf();
		}
		pmax(i);
		if(qmin.front()<=i-m){
			qmin.pf();
		}
		pmin(i);
		tmp=arr[qmax.front()]-arr[qmin.front()];
		maxi=max(maxi,tmp);
	}
	cout<<maxi<<endl;
	return 0;
}
