#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[1005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt=0;
		int buf=0,tmp=0;
		bool flag=0;
		for(int i=0;i<n;i++) cin>>arr[i];
		int pos1=0,pos2=n-1;
		int a=0,b=0;
		while(pos2>=pos1){
			tmp=0;
			if(!flag){
				while(pos2>=pos1 && tmp<=buf){
					tmp+=arr[pos1++];
				}
				flag=1;
			}
			else if(flag){
				while(pos2>=pos1 && tmp<=buf){
					tmp+=arr[pos2--];
				}
				flag=0;
			}
			buf=tmp;
			cnt++;
			if(flag==1) a+=tmp;
			else b+=tmp;
		}
		cout<<cnt<<" "<<a<<" "<<b<<endl;
	}
	return 0;
}
