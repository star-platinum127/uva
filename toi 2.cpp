#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
char arr[20][20];
char buf[27];
bool flag=0;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k=0;
	int n,m;
	int r;
	cin>>n>>m;
	cin>>r;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
			if(arr[i][j]!='0'){
				buf[k]=arr[i][j];
				k++;
			}
		}
	}
	if(r>k){
		cout<<"Mission fail."<<endl;
		flag=1;
	}
	sort(buf,buf+k);
	int t=0;
	while(flag==0 && t<r){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==buf[t]){
					cout<<i<<" "<<j<<endl;
				}
			}
		}
		t++;
	}
	return 0;
}
