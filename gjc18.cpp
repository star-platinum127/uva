#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int po;
	int sc[4]={0,0,0,0};
	for(int i=0;i<n;i++){
		cin>>po;
		if(po>3) sc[3]++;
		else sc[po-1]++;
	}
	for(int i=0;i<4;i++) cout<<sc[i];
	return 0;
}
