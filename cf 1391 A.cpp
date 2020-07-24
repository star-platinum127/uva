#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[2050];

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	bool flag;
	cin>>t;
	while(t--){
		int n;
		char s1[2005];
		cin>>n;
		flag=0;
		int maxi=-1e9;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			maxi=max(maxi,arr[i]);
		}
		for(int i=0;i<maxi;i++){
			cout<<'a';
			s1[i]='a';
		}
		if(maxi!=0) cout<<endl;
		if(maxi==0){
			maxi=1;
			cout<<'a';
			s1[0]='a';
			cout<<endl;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<maxi;j++){
				if(j==arr[i]){
					if(s1[j]+1>121) s1[j]=char(s1[j]+1-20);
					else s1[j]=char((s1[j]+1));
					cout<<s1[j];
				}else cout<<s1[j];
			}
			cout<<endl;
		}
	}
	return 0;
}
