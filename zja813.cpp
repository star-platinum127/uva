#include <iostream>
#include<algorithm>
#include<stack>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll ans;
stack<int> stk,cnt;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	ans=0;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		while(!stk.empty() && stk.top()<a){
			ans+=cnt.top();
			cnt.pop();
			stk.pop();
		}
		if(!stk.empty() && stk.top()==a){
			ans+=cnt.top();
			cnt.top()++;
		}else{
			stk.push(a);
			cnt.push(1);
		}
		if(stk.size()>1) ans++;
	}
	cout<<ans*2<<endl;
	return 0;
}
