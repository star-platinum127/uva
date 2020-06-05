#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int odd;
int dou;
int arr[55];
int buck[105];
bool flag;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		flag=0;
		int n;
		dou=0;
		odd=0;
		cin>>n;
		for(int i=1;i<=100;i++) buck[i]=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			buck[arr[i]]++;
			if(arr[i]%2==0) dou++;
			else odd++;
		}
		if(odd%2==0){
			cout<<"YES"<<endl;
			continue;
		} 
		for(int i=1;i<=100;i++){
			if(buck[i]>0 && buck[i+1]>0){
				cout<<"YES"<<endl;
				flag=1;
				break;
			} 
		}
		if(flag==1) continue;
		cout<<"NO"<<endl;
		
	}
	return 0;
}
