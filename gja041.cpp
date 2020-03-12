#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	int c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		c++;
		if(c==5){
			c=0;
			n++;
		} 
	}
	cout<<n;
	return 0;
}
