#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
char s1[55];
char s2[55];
char ch[10]={'a','b','a','c','a','b','a'};
int n;
bool solve(){
	int cnt=0;
	for(int i=0;i<n-7+1;i++){
		bool ans=1;
		for(int j=i;j<i+7;j++){
			if(s2[j]!=ch[j-i]){
				ans=0;
				break;
			}
		}
		if(ans==1) cnt++;
	}
	return (cnt==1);
}
bool solve2(int m){
	for(int i=0;i<n;i++) s2[i]=s1[i];
	for(int i=m;i<m+7;i++){
		if(s2[i]=='?'){
			s2[i]=ch[i-m];
		}
	}
	return solve();
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		bool flag=0;
		cin>>n;
		cin>>s1;
		for(int i=0;i<n-7+1;i++){
			if(solve2(i)==1){
				flag=1;
				break;
			}
		}
		if(flag==0) cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++){
				if(s2[i]=='?'){
					cout<<'x';
				}else cout<<s2[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
