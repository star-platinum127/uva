#include <bits/stdc++.h>
using namespace std;
#define pb push_back 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[1005];
int b[1005];
bool f;
vector<int> v;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		v.clear();
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			
		}
		while(n>0){
			f=0;
			vector<bool> w(n,false);
			
			for(int i=0;i<n;i++){
				if(arr[i]<n) w[arr[i]]=true;
			}
			int mex=0;
			while(mex<n && w[mex]) mex++;
			if(mex==n){
				arr[n-1]=mex;
				v.pb(n-1);
				n--;
				continue;
			}
			arr[mex]=mex;
			v.pb(mex);
		}
		int buf=v.size();
		cout<<buf<<endl;
		for(int i=0;i<buf;i++){
			cout<<v[i]+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}
