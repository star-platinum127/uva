#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
ll dp[600000],num,idx=0,tmp,n[600000];
vector<ll> v,ans;
int main(int argc, char** argv) {
	v.clear();
	ans.clear();
	cin>>num;
	v.push_back(num);
	n[0]=num;
	dp[0]=1;
	idx++;
	while(cin>>num){
		n[idx]=num;
		if(num>v[v.size()-1]){
			v.push_back(num);
			dp[idx]=v.size();
		}
		else{
			*lower_bound(v.begin(),v.end(),num)=num;
			dp[idx]=lower_bound(v.begin(),v.end(),num)-v.begin()+1;
		}
		idx++;
	}
	tmp=v.size();
	cout<<tmp<<endl<<"-"<<endl;
	for(int i=idx-1;i>=0;i--){
		if(dp[i]==tmp){
			ans.push_back(n[i]);
			tmp--;
		}
	}
	reverse(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
	return 0;
}
