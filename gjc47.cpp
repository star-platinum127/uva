#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[10005];
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,buf,sum1=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>buf;
		sum1+=abs(buf-2)*abs(buf-2);
	}
	cout<<sum1<<endl;
	return 0;
}
