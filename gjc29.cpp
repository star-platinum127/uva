#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m;
	int arr[2000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>m;
	for(int j=n;j<m+n;j++){
		cin>>arr[j];
	}
	sort(arr,arr+n+m);
	for(int i=0;i<n+m;i++) cout<<arr[i]<<" ";
	return 0;
}
