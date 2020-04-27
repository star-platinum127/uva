#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll a[205][205];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int tmp;
	while(cin>>n){
		if(n==0) break;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) a[i][j]=1e9;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>tmp;
				if(tmp!=0) a[i][j]=tmp;
			}
		}
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(a[i][j]>a[i][k]+a[k][j]) a[i][j]=a[i][k]+a[k][j];
				}
			}
		}
		int mn=1e9;
		for(int i=0;i<n;i++){
			if(a[i][i]<mn) mn=a[i][i];
		}
		if(mn==1e9) cout<<-1<<endl;
		else cout<<mn<<endl; 
	}
	return 0;
}
