#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[30][30];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		bool flag=0;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0;i<26;i++) for(int j=0;j<26;j++) arr[i][j]=0;
		for(int i=0;i<n;i++){
			if(s2[i]<s1[i]){
				cout<<-1<<endl;
				flag=1;
				break;
			}
			else{
				arr[s2[i]-'a'][s1[i]-'a']++;
			}
		}
		int ans=0;
		if(flag==1) continue;
		for(int i=0;i<26;i++){
			flag=0;
			int buf;
			for(int j=i+1;j<26;j++){
				if(arr[j][i]>0){
					if(flag==0){
						buf=j-i;
						flag=1;
					}else{
						arr[j][i+buf]++;
					}
				}
			}
			if(flag) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
