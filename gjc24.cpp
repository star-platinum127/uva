#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	int min1=1e9;
	int max1=-1e9;
	int cnt;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>cnt;
		if(cnt<min1) min1=cnt;
		if(cnt>max1) max1=cnt; 
	}
	cout<<max1-min1;
	return 0;
}
