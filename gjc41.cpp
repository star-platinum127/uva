#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[105];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int sum1=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum1+=arr[i];
	}
	sum1=sum1/n;
	int cnt=0;
	for(int i=0;i<n;i++){
		cnt+=abs(arr[i]-sum1);
	}
	cout<<cnt/2<<endl;
	return 0;
}
