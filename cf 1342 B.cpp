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
		string s1;
		bool flag=0;
		cin>>s1;
		int a=0,b=0;
		int n=s1.length();
		for(int i=0;i<n;i++){
			if(s1[i]-'0'==0) a++;
			else b++;
			
		}
		if(!a || !b){
			for(int j=0;j<n;j++) cout<<s1[j];
			cout<<endl;
			continue;
		}
		flag=s1[0]-'0';
		cout<<s1[0];
		flag^=1;
		for(int i=1;i<n;i++){
			if(flag==s1[i]-'0'){
				cout<<s1[i];
				flag^=1;
			}else{
				cout<<flag;
				cout<<s1[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
