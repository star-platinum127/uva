#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
string s1;
bool flag;
char arr[100][100];
int n,m;
bool iok(){
	for(int i=1;i<n;i++){
		int cnt=0;
		for(int j=0;j<m;j++){
			if(s1[j]!=arr[i][j]) cnt++;
		}
		if(cnt>1) return 0;
	}
	return true;
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		flag=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<m;i++) s1[i]=arr[0][i];
		for(int i=0;i<m;i++){
			for(char c='a';c<='z';c++){
				s1[i]=c;
				if(iok()){
					for(int i=0;i<m;i++){
						cout<<s1[i];
					}
					cout<<endl;
					flag=1;
					break;
				}
			}
			if(flag==1) break;
			s1[i]=arr[0][i];
		}
		if(!flag) cout<<-1<<endl;
	}
	return 0;
}
