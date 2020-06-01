#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr;
		int dou=0;
		int odd=0;
		for(int i=0;i<n;i++){
			 cin>>arr;
			 if(arr%2==0) dou++;
			 else odd++;
		}
		int c=1;
		bool flag=false;
		if(odd==0){
			cout<<"NO"<<endl;
			continue;
		}
		if(dou==0){
			if(m%2==0){
				cout<<"NO"<<endl;
				continue;
			}
		} 
		while(c<=odd){
			if(m-c<=dou){
				cout<<"YES"<<endl;
				flag=true;
				break;
			}else c+=2; 			
		}
		if(flag==true) continue;
		else cout<<"NO"<<endl;
	}
	return 0;
}
