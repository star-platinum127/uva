#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int arr[10005];
	int k;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k;
		arr[k]=i;
	}
	int sum1=0;
	for(int i=1;i<=n-1;i++){
		sum1+=abs(arr[i]-arr[i+1]);
	}
	cout<<sum1<<endl;
	return 0;
}
