#include <iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
vector<int> final2;
ll tr[1000000];
ll ad[1000000];
ll final1=0;
int ans=0;
int n,l;
int pre=0;
bool st[1000000];
void cut_tree(int i){
	if(ad[i]+tr[i]<=l || ad[i]-tr[i]>=0){
		int le=i-1;
		while(le>0 && st[le]==1){
			le--;
		}
		int r=i+1;
		while(r<n-1 && st[r]==1) r++;
		if((i>=0&&ad[i]+tr[i]<=ad[r]) || (i<=n-1&&ad[i]-tr[i]>=ad[le])){
			st[i]=1;
			final2.push_back(tr[i]);
			ans++;
		}
	}
	
}
int main(int argc, char** argv) {
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>ad[i];
		st[i]=0;
	}	
	for(int i=0;i<n;i++){
		cin>>tr[i];
	}
	while(true){
		for(int i=0;i<n;i++){
			if(st[i]==0){
				cut_tree(i);
			}
		}	
		if(ans==pre) break;
		else pre=ans;
		
	}
	cout<<ans<<endl;
	if(final2.size()>0) cout<<*max_element(final2.begin(),final2.end());
	else cout<<0;
	return 0;
}
